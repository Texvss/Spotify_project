#ifndef TRACKVIEW_H
#define TRACKVIEW_H

#include <QStandardItemModel>
#include <QStringListModel>
#include <QWidget>
#include <QMenu>
#include <QContextMenuEvent>
#include "spotify.h"

namespace Ui {
class TrackView;
}

class TrackView : public QWidget
{
    Q_OBJECT

public:
    explicit TrackView(QWidget *parent = nullptr, Spotify *spotify = nullptr);
    ~TrackView();
    void genreTracks(const QStringList &tracks);
    int getCurrentSongClusterNumber() const;

signals:
    void backButtonClicked();

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

private slots:
    void on_backButton_clicked();
    void onViewLyricsAndSimilar();
    void onSongSelected(const QModelIndex &index);

private:
    Ui::TrackView *ui;
    QStringListModel *model;
    QMenu *contextMenu;
    Spotify *spotify;
    QString currentTrackId;
};

#endif // TRACKVIEW_H
