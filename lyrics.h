#ifndef LYRICS_H
#define LYRICS_H

#include <QWidget>
#include <QStringListModel>
#include <QMenu>
#include <QLabel>
#include <QContextMenuEvent>
#include "spotify.h"

namespace Ui {
class Lyrics;
}

class Lyrics : public QWidget
{
    Q_OBJECT

public:
    explicit Lyrics(QWidget *parent = nullptr, Spotify *spotify = nullptr);
    ~Lyrics();
    void setLyrics(const QString &text);
    void updateSongList(int cluster);
    void showClusterForSong(const QString &artistName, const QString &songName);
    void setHeaderAndLyrics(const QString &header, const QString &text);

signals:
    void backLyricsClicked();

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

private slots:
    void on_lyricsBack_clicked();
    void onViewLyrics();
    void showContextMenu(const QPoint &pos);

private:
    Ui::Lyrics *ui;
    QStringListModel *model;
    QMenu *contextMenu;
    Spotify *spotify;
    QLabel *artistSongLabel;
};

#endif // LYRICS_H
