#include "trackview.h"
#include "ui_trackview.h"

TrackView::TrackView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrackView), model(new QStringListModel(this))
{
    ui->setupUi(this);
    ui->trackView->setModel(model);
    setWindowTitle("Genre");
}

TrackView::~TrackView()
{
    delete ui;
}

void TrackView::genreTracks(const QStringList& tracks){
    model->setStringList(tracks);
}




