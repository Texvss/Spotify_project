#ifndef LIKED_H
#define LIKED_H

#include <QSqlDatabase>
#include <QTableWidget>
#include <QWidget>
#include <QtSql>
namespace Ui {
class Liked;
}

class Liked : public QWidget
{
    Q_OBJECT

public:
    explicit Liked(QWidget *parent = nullptr);
    ~Liked();
    void loadPlaylist(const QString &username);
    void addTrack(const QString &trackName, const QString &artistName, const QString &username);


signals:
    void backLikedClicked();

private slots:
    void on_backLiked_clicked();



private:
    Ui::Liked *ui;
    QSqlDatabase database;
    void saveTrackToDatabase(const QString &username, const QString &trackName, const QString &artistName);
    QString username;
};

#endif // LIKED_H

