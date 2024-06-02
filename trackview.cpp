#include "trackview.h"
#include "ui_trackview.h"


TrackView::TrackView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrackView)
    , model(new QStringListModel(this))
    , contextMenu(new QMenu(this))
    , liked(new Liked(this))
{
    ui->setupUi(this);
    ui->backButton->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: 5px;background-color: #b83030;color:white;}"
                                  "QPushButton:hover{border: 1px solid black;border-radius: 5px;background-color: #3d010e;color:#c0c0c0;}");
    connect(ui->backButton, &QPushButton::clicked, this, &TrackView::on_backButton_clicked);
    ui->trackView->setModel(model);
    setWindowTitle("Genre");
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
