#include "liked.h"
#include "ui_liked.h"
#include <QHeaderView>
#include <QSqlQuery>
#include <QSqlDatabase>

Liked::Liked(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Liked)
    , tableWidget(new QTableWidget(this))
{
    ui->setupUi(this);
    tableWidget -> setFixedSize(300, 500);
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableWidget -> setColumnCount(2);
    QStringList columnNames = {"Artist", "Track"};
    tableWidget->setHorizontalHeaderLabels(columnNames);
    tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

}

Liked::~Liked()
{
    delete ui;
}
// void Liked::addTrack(const QString &track, const QString &artist)
// {
//     int row = tableWidget->rowCount();
//     tableWidget->insertRow(row);
//     tableWidget->setItem(row, 0, new QTableWidgetItem(track));
//     tableWidget->setItem(row, 1, new QTableWidgetItem(artist));
// }


void Liked::loadPlaylist(const QString &username) {
    tableWidget->setRowCount(0); // Очищаем таблицу перед загрузкой данных
    QSqlQuery qry;
    qry.prepare("SELECT tracks.TrackName, tracks.ArtistName FROM playlists "
                "JOIN tracks ON playlists.TrackID = tracks.TrackID WHERE playlists.Username = :username");
    qry.bindValue(":username", username);

    if (qry.exec()) {
        while (qry.next()) {
            QString trackName = qry.value(0).toString();
            QString artistName = qry.value(1).toString();
            addTrack(trackName, artistName);
        }
    } else {
        qDebug() << "Failed to load playlist: " << qry.lastError().text();
    }
}

void Liked::saveTrackToDatabase(const QString &username, const QString &trackName, const QString &artistName) {
    QSqlQuery qry;

    // First, insert the track into the tracks table if it doesn't already exist
    qry.prepare("INSERT OR IGNORE INTO tracks (TrackName, ArtistName) VALUES (:trackName, :artistName)");
    qry.bindValue(":trackName", trackName);
    qry.bindValue(":artistName", artistName);

    if (!qry.exec()) {
        qDebug() << "Failed to insert track: " << qry.lastError().text();
        return;
    }

    // Retrieve the TrackID of the inserted or existing track
    qry.prepare("SELECT TrackID FROM tracks WHERE TrackName = :trackName AND ArtistName = :artistName");
    qry.bindValue(":trackName", trackName);
    qry.bindValue(":artistName", artistName);

    if (!qry.exec() || !qry.next()) {
        qDebug() << "Failed to retrieve TrackID: " << qry.lastError().text();
        return;
    }

    int trackID = qry.value(0).toInt();

    // Insert the relationship into the playlists table
    qry.prepare("INSERT INTO playlists (Username, TrackID) VALUES (:username, :trackID)");
    qry.bindValue(":username", username);
    qry.bindValue(":trackID", trackID);

    if (!qry.exec()) {
        qDebug() << "Failed to insert into playlist: " << qry.lastError().text();
    }
}

void Liked::addTrack(const QString &trackName, const QString &artistName) {
    int row = tableWidget->rowCount();
    tableWidget->insertRow(row);
    tableWidget->setItem(row, 0, new QTableWidgetItem(trackName));
    tableWidget->setItem(row, 1, new QTableWidgetItem(artistName));

    QString username = "current_username"; // Замените на фактическое имя пользователя
    saveTrackToDatabase(username, trackName, artistName);
}

// как правильно прописать конструктор для liked
// как указать относительные пути
// парсер для треков в названии которых несколько слов
