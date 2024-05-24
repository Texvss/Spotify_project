#include "trackview.h"
#include "ui_trackview.h"

TrackView::TrackView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TrackView), model(new QStringListModel(this))
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &TrackView::on_backButton_clicked);
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

void TrackView::on_backButton_clicked()
{
    emit backButtonClicked();
}
