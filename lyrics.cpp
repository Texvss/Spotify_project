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
    , contextMenu(new QMenu(this)) // Initialize context menu as a pointer
    , spotify(spotifyInstance) // Initialize Spotify instance
{
    ui->setupUi(this);
    this->setStyleSheet("QWidget { background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #4C4C4C, stop:1 black); }");
    ui->clusterList->setModel(model); // Assuming you have a clusterList in the UI to show the song list
    connect(ui->lyricsBack, &QPushButton::clicked, this, &Lyrics::on_lyricsBack_clicked);

    // Add context menu action
    QAction *viewAction = new QAction("View", this);
    connect(viewAction, &QAction::triggered, this, &Lyrics::onViewLyrics);
    contextMenu->addAction(viewAction);

    // Enable custom context menu for clusterList
    ui->clusterList->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->clusterList, &QListView::customContextMenuRequested, this, &Lyrics::showContextMenu);

    // Initialize the artist - songname label
    artistSongLabel = new QLabel(this);
    artistSongLabel->setStyleSheet("color: white; font-size: 16px;"); // Style as needed
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
    QList<QList<QString>> songs = spotify->filterByCluster(cluster); // Use the Spotify instance
    QStringList songNames;
    for (const auto &song : songs) {
        if (song.size() > static_cast<int>(COLUMNS::track_name) && song.size() > static_cast<int>(COLUMNS::artist_name)) {
            QString formattedName = song[static_cast<int>(COLUMNS::artist_name)] + " - " + song[static_cast<int>(COLUMNS::track_name)];
            songNames << formattedName;
        }
    }
    model->setStringList(songNames);
    ui->clusterList->setModel(model); // Set the model for the clusterList view
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
    setArtistSongName(artistName, songName); // Set the label text
}

void Lyrics::contextMenuEvent(QContextMenuEvent *event)
{
    // This method can be empty if not needed
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

        // Create a new Lyrics window for the selected song
        Lyrics *lyricsWindow = new Lyrics(nullptr, spotify);
        lyricsWindow->showClusterForSong(artistName, songName);
        lyricsWindow->setArtistSongName(artistName, songName); // Ensure label is set
        lyricsWindow->show();
    }
}

void Lyrics::on_lyricsBack_clicked()
{
    emit backLyricsClicked();
    this->close(); // Close the lyrics window when back button is clicked
}

void Lyrics::setArtistSongName(const QString &artistName, const QString &songName)
{
    artistSongLabel->setText(artistName + " - " + songName);
}
