#ifndef LIKED_H
#define LIKED_H

#include <QWidget>
#include <QTableWidget>
#include <QSqlDatabase>
namespace Ui {
class Liked;
}

class Liked : public QWidget
{
    Q_OBJECT

public:
    explicit Liked(QWidget *parent = nullptr);
    ~Liked();
    void addTrack(const QString &track, const QString &artist);
    // void loadPlaylist(const QString &username);
    // void saveTrackToDatabase(const QString &username, const QString &trackName, const QString &artistName);

private:
    Ui::Liked *ui;
    QTableWidget *tableWidget;
    // QSqlDatabase *database;
};

#endif // LIKED_H
