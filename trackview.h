#ifndef TRACKVIEW_H
#define TRACKVIEW_H

#include <QWidget>
#include <QMenu>
#include <QContextMenuEvent>
#include "spotify.h"
#include <QStringListModel>
#include <QMenu>
#include "liked.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TrackView; }
QT_END_NAMESPACE

class TrackView : public QWidget
{
    Q_OBJECT

public:
    explicit TrackView(QWidget *parent = nullptr, Spotify *spotify = nullptr);
    ~TrackView();
    void genreTracks(const QStringList &tracks);
    int getCurrentSongClusterNumber() const;
    void setUsername(const QString &username);

signals:
    void backButtonClicked();

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;

private slots:
    void on_backButton_clicked();
    void onViewLyricsAndSimilar();
    void onSongSelected(const QModelIndex &index);
    void on_trackView_doubleClicked(const QModelIndex &index);
    void addToLiked();
private:
    Ui::TrackView *ui;
    QStringListModel *model;
    QMenu *contextMenu;
    Spotify *spotify;
    QString currentTrackId;
    Liked *liked;
    QString username;
};

#endif // TRACKVIEW_H
