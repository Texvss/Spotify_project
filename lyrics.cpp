#include "lyrics.h"
#include "ui_lyrics.h"
#include <QDebug>
#include <QContextMenuEvent>
#include <QMenu>
#include <QAction>

Lyrics::Lyrics(QWidget *parent, Spotify *spotifyInstance)
    : QWidget(parent)
    , ui(new Ui::Lyrics)
    , model(new QStringListModel(this))
    , contextMenu(new QMenu(this))
    , spotify(spotifyInstance)
{
    ui->setupUi(this);
    ui->clusterList->setModel(model);
    connect(ui->lyricsBack, &QPushButton::clicked, this, &Lyrics::on_lyricsBack_clicked);

    QAction *viewAction = new QAction("View", this);
    connect(viewAction, &QAction::triggered, this, &Lyrics::onViewLyrics);
    contextMenu->addAction(viewAction);

    ui->clusterList->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->clusterList, &QListView::customContextMenuRequested, this, &Lyrics::showContextMenu);

    artistSongLabel = new QLabel(this);
    artistSongLabel->setStyleSheet("color: white; font-size: 16px;");
    ui->lyricsBack->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: "
                                  "5px;background-color: #b83030;color:white;}"
                                  "QPushButton:hover{border: 1px solid black;border-radius: "
                                  "5px;background-color: #3d010e;color:#c0c0c0;}");
}

Lyrics::~Lyrics()
{
    delete ui;
}

void Lyrics::setLyrics(const QString &text)
{
    ui->lyricsList->setPlainText(text);
}

void Lyrics::updateSongList(int cluster)
{
    QList<QList<QString>> songs = spotify->filterByCluster(cluster);
    QStringList songNames;
    for (const auto &song : songs) {
        if (song.size() > static_cast<int>(COLUMNS::track_name) && song.size() > static_cast<int>(COLUMNS::artist_name)) {
            QString formattedName = song[static_cast<int>(COLUMNS::artist_name)] + " - " + song[static_cast<int>(COLUMNS::track_name)];
            songNames << formattedName;
        }
    }
    model->setStringList(songNames);
    ui->clusterList->setModel(model);
}

void Lyrics::showClusterForSong(const QString &artistName, const QString &songName)
{
    for (const auto &row : spotify->data) {
        if (row[static_cast<int>(COLUMNS::artist_name)] == artistName && row[static_cast<int>(COLUMNS::track_name)] == songName) {
            int clusterNumber = row[static_cast<int>(COLUMNS::s_clusters)].toInt();
            updateSongList(clusterNumber);
            break;
        }
    }
}

void Lyrics::contextMenuEvent(QContextMenuEvent *event)
{
}

void Lyrics::showContextMenu(const QPoint &pos)
{
    QModelIndex index = ui->clusterList->indexAt(pos);
    if (index.isValid()) {
        contextMenu->exec(ui->clusterList->viewport()->mapToGlobal(pos));
    }
}

void Lyrics::onViewLyrics()
{
    QModelIndex index = ui->clusterList->currentIndex();
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
void Lyrics::setHeaderAndLyrics(const QString &header, const QString &text)
{
    ui->trackInfo->setText(header);
    ui->lyricsList->setPlainText(text);
}

void Lyrics::on_lyricsBack_clicked()
{
    emit backLyricsClicked();
    this->close();
}
