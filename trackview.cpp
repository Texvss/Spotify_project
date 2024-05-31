#include "trackview.h"
#include "ui_trackview.h"


TrackView::TrackView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrackView)
    , model(new QStringListModel(this))
    , contextMenu(new QMenu(this))
    , likedTracks(nullptr)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &TrackView::on_backButton_clicked);
    ui->trackView->setModel(model);
    setWindowTitle("Genre");
    QAction *addToPlaylistAction = contextMenu->addAction("Add to playlist");
    contextMenu -> addAction("Lyrics");
    contextMenu -> addAction("Artist");

    connect(addToPlaylistAction, &QAction::triggered, this, &TrackView::addToLiked);

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
        qDebug() << "Adding track to playlist:" << track;


        QStringList trackDetails = track.split(" - ");
        if (trackDetails.size() == 2) {
            likedTracks->addTrack(trackDetails.at(0), trackDetails.at(1));
        }
    }
    else {
        qDebug() << "No valid index selected.";
    }
}

