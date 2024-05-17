#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "spotify.h"
const QString path = "/Users/mansur/Desktop/playlist_2010to20222.csv";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), listModel(new QStringListModel), spotifyData(new Spotify(path))
{
    ui->setupUi(this);
    listModel->setStringList(spotifyData->getTrackNames());
    ui->listView->setModel(listModel);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete listModel;
    delete spotifyData;
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    ui->titlelineEdit->setText((*spotifyData)[index.row()][static_cast<int>(COLUMNS::track_name)]);
    ui->albumlineEdit->setText((*spotifyData)[index.row()][static_cast<int>(COLUMNS::album)]);
}
