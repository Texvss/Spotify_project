#include "trackview.h"
#include "ui_trackview.h"
#include "lyrics.h"

TrackView::TrackView(QWidget *parent, Spotify *spotifyInstance)
    : QWidget(parent)
    , ui(new Ui::TrackView)
    , model(new QStringListModel(this))
    , contextMenu(new QMenu(this))
    , spotify(spotifyInstance) // Initialize Spotify instance
    , currentTrackId("") // Initialize current track ID
{
    ui->setupUi(this);
    this->setStyleSheet("QWidget { background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #4C4C4C, stop:1 black); }");
    connect(ui->backButton, &QPushButton::clicked, this, &TrackView::on_backButton_clicked);
    ui->trackView->setModel(model);
    connect(ui->trackView->selectionModel(), &QItemSelectionModel::currentChanged, this, &TrackView::onSongSelected); // Connect selection model

    setWindowTitle("Genre");

    // Add context menu action
    QAction *viewLyricsAndSimilar = new QAction("View Lyrics and Similar", this);
    connect(viewLyricsAndSimilar, &QAction::triggered, this, &TrackView::onViewLyricsAndSimilar);
    contextMenu->addAction(viewLyricsAndSimilar);
}

TrackView::~TrackView()
{
    delete ui;
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
        lyricsWindow->setArtistSongName(artistName, songName); // Ensure label is set
        lyricsWindow->show();
    }
}


void TrackView::onSongSelected(const QModelIndex &index)
{
    QString trackName = model->data(index, Qt::DisplayRole).toString();

    // Split trackName into artist and song if needed, assuming format "artist - song"
    QStringList nameParts = trackName.split(" - ");
    if (nameParts.size() == 2) {
        QString artistName = nameParts[0].trimmed();
        QString songName = nameParts[1].trimmed();

        // Find the track_id for the selected song
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
        return -1; // Invalid track ID
    }
    // Find the cluster number using the track_id
    for (const auto &row : spotify->data) {
        if (row[static_cast<int>(COLUMNS::track_id)] == currentTrackId) {
            if (row.size() > static_cast<int>(COLUMNS::s_clusters)) {
                return row[static_cast<int>(COLUMNS::s_clusters)].toInt();
            }
            break;
        }
    }
    return -1; // Invalid data
}
