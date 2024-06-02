#include "trackview.h"
#include "ui_trackview.h"
#include "lyrics.h"

TrackView::TrackView(QWidget *parent, Spotify *spotifyInstance)

    : QWidget(parent)
    , ui(new Ui::TrackView)
    , model(new QStringListModel(this))
    , contextMenu(new QMenu(this))
    , spotify(spotifyInstance)
    , currentTrackId("")
    , liked(new Liked(this))
{
    ui->setupUi(this);
    ui->backButton->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: 5px;background-color: #b83030;color:white;}"
                                  "QPushButton:hover{border: 1px solid black;border-radius: 5px;background-color: #3d010e;color:#c0c0c0;}");
    connect(ui->backButton, &QPushButton::clicked, this, &TrackView::on_backButton_clicked);
    ui->trackView->setModel(model);
    connect(ui->trackView->selectionModel(), &QItemSelectionModel::currentChanged, this, &TrackView::onSongSelected);

    setWindowTitle("Genre");
    QAction *viewLyricsAndSimilar = new QAction("View Lyrics and Similar", this);
    connect(viewLyricsAndSimilar, &QAction::triggered, this, &TrackView::onViewLyricsAndSimilar);
    contextMenu->addAction(viewLyricsAndSimilar);
    QAction *addToPlaylistAction = contextMenu->addAction("Add to playlist");

    connect(addToPlaylistAction, &QAction::triggered, this, &TrackView::addToLiked);
    liked->hide();
}

TrackView::~TrackView()
{
    delete ui;
}

void TrackView::setUsername(const QString &username)
{
    this->username = username;
}


void TrackView::genreTracks(const QStringList &tracks)
{
    model->setStringList(tracks);
}

void TrackView::on_backButton_clicked()
{
    emit backButtonClicked();
}

void TrackView::contextMenuEvent(QContextMenuEvent *event)
{
    contextMenu->exec(event->globalPos());
}

void TrackView::onViewLyricsAndSimilar()
{
    QModelIndex index = ui->trackView->currentIndex();
    if (!index.isValid()) {
        return;
    }

    QString trackName = model->data(index, Qt::DisplayRole).toString();
    QStringList nameParts = trackName.split(" - ");
    if (nameParts.size() == 2) {
        QString artistName = nameParts[0].trimmed();
        QString songName = nameParts[1].trimmed();

        Lyrics *lyricsWindow = new Lyrics(nullptr, spotify);
        lyricsWindow->showClusterForSong(artistName, songName);
        lyricsWindow->show();
    }
}


void TrackView::onSongSelected(const QModelIndex &index)
{
    QString trackName = model->data(index, Qt::DisplayRole).toString();

    QStringList nameParts = trackName.split(" - ");
    if (nameParts.size() == 2) {
        QString artistName = nameParts[0].trimmed();
        QString songName = nameParts[1].trimmed();

        for (const auto &row : spotify->data) {
            if (row[static_cast<int>(COLUMNS::artist_name)] == artistName && row[static_cast<int>(COLUMNS::track_name)] == songName) {
                currentTrackId = row[static_cast<int>(COLUMNS::track_id)];
                break;
            }
        }
    }
}

int TrackView::getCurrentSongClusterNumber() const
{
    if (currentTrackId.isEmpty()) {
        return -1;
    }
    for (const auto &row : spotify->data) {
        if (row[static_cast<int>(COLUMNS::track_id)] == currentTrackId) {
            if (row.size() > static_cast<int>(COLUMNS::s_clusters)) {
                return row[static_cast<int>(COLUMNS::s_clusters)].toInt();
            }
            break;
        }
    }
    return -1;
}
void TrackView::on_trackView_doubleClicked(const QModelIndex &index)
{
    if (index.isValid()) {
        contextMenu->exec(QCursor::pos());
    }
}

void TrackView::addToLiked()
{
    QModelIndex currentIndex = ui->trackView->currentIndex();
    if (currentIndex.isValid()) {
        QString track = model->data(currentIndex, Qt::DisplayRole).toString();
        qDebug() << "Adding track to playlist:" << track << "for user:" << this->username;

        QStringList trackDetails = track.split(" - ");
        if (trackDetails.size() == 2) {
            liked->addTrack(trackDetails.at(1).trimmed(), trackDetails.at(0).trimmed(), username);
        }
    } else {
        qDebug() << "No valid index selected.";
    }
}
