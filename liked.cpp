#include "liked.h"
#include <QHeaderView>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "ui_liked.h"
#include <QBoxLayout>

Liked::Liked(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Liked)
{
    ui->setupUi(this);
    ui->backLiked->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: 5px;background-color: #b83030;color:white;}"
                                  "QPushButton:hover{border: 1px solid black;border-radius: 5px;background-color: #3d010e;color:#c0c0c0;}");

    // ui->likedTracks->setFixedSize(350, 500);
    ui->likedTracks->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->likedTracks->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->likedTracks->setColumnCount(2);
    QStringList columnNames = {"Artist", "Track"};
    ui->likedTracks->setHorizontalHeaderLabels(columnNames);
    ui->likedTracks->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->likedTracks->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Liked::~Liked()
{
    delete ui;
}

void Liked::loadPlaylist(const QString &username)
{
    qDebug() << "Loading playlist for user:" << username;
    ui->likedTracks->setRowCount(0);

    QSqlQuery qry;
    qry.prepare("SELECT id FROM users WHERE username = :username");
    qry.bindValue(":username", username);

    if (!qry.exec() || !qry.next()) {
        qDebug() << "Failed to retrieve UserID for username:" << username << ", Error:" << qry.lastError().text();
        return;
    }

    int userID = qry.value(0).toInt();
    qDebug() << "UserID for username" << username << "is" << userID;
    qry.prepare(
        "SELECT tracks.TrackName, tracks.ArtistName FROM playlists "
        "JOIN tracks ON playlists.track_id = tracks.id "
        "WHERE playlists.user_id = :user_id");
    qry.bindValue(":user_id", userID);

    if (qry.exec()) {
        if (!qry.next()) {
            qDebug() << "No tracks found for user:" << username;
        } else {
            qry.previous();
            while (qry.next()) {
                QString trackName = qry.value(0).toString();
                QString artistName = qry.value(1).toString();
                addTrack(trackName, artistName, username);
            }
        }
    } else {
        qDebug() << "Failed to load playlist for user ID:" << userID << ", Error:" << qry.lastError().text();
    }
}

void Liked::saveTrackToDatabase(const QString &username, const QString &trackName, const QString &artistName)
{
    QSqlQuery qry;
    qry.prepare("SELECT id FROM users WHERE username = :username");
    qry.bindValue(":username", username);

    if (!qry.exec() || !qry.next()) {
        qDebug() << "Failed to retrieve UserID for username:" << username << ", Error:" << qry.lastError().text();
        return;
    }

    int userID = qry.value(0).toInt();
    qDebug() << "UserID for username" << username << "is" << userID;
    qry.prepare(
        "INSERT OR IGNORE INTO tracks (TrackName, ArtistName) VALUES (:trackName, :artistName)");
    qry.bindValue(":trackName", trackName);
    qry.bindValue(":artistName", artistName);

    if (!qry.exec()) {
        qDebug() << "Failed to insert track:" << trackName << "by" << artistName << ", Error:" << qry.lastError().text();
        return;
    }

    qry.prepare(
        "SELECT id FROM tracks WHERE TrackName = :trackName AND ArtistName = :artistName");
    qry.bindValue(":trackName", trackName);
    qry.bindValue(":artistName", artistName);

    if (!qry.exec() || !qry.next()) {
        qDebug() << "Failed to retrieve TrackID for track:" << trackName << "by" << artistName << ", Error:" << qry.lastError().text();
        return;
    }

    int trackID = qry.value(0).toInt();
    qDebug() << "TrackID for track" << trackName << "by" << artistName << "is" << trackID;

    qry.prepare("INSERT INTO playlists (user_id, track_id) VALUES (:user_id, :track_id)");
    qry.bindValue(":user_id", userID);
    qry.bindValue(":track_id", trackID);

    if (!qry.exec()) {
        qDebug() << "Failed to insert into playlist for user ID:" << userID << "and track ID:" << trackID << ", Error:" << qry.lastError().text();
    } else {
        qDebug() << "Successfully inserted into playlist for user ID:" << userID << "and track ID:" << trackID;
    }
}

void Liked::addTrack(const QString &trackName, const QString &artistName, const QString &username)
{
    int row = ui->likedTracks->rowCount();
    ui->likedTracks->insertRow(row);
    ui->likedTracks->setItem(row, 0, new QTableWidgetItem(artistName));
    ui->likedTracks->setItem(row, 1, new QTableWidgetItem(trackName));
    saveTrackToDatabase(username, trackName, artistName);
}


void Liked::on_backLiked_clicked()
{
    emit backLikedClicked();
}


