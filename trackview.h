#ifndef TRACKVIEW_H
#define TRACKVIEW_H

#include <QStandardItemModel>
#include <QStringListModel>
#include <QWidget>
#include <QMenu>
#include <liked.h>

namespace Ui {
class TrackView;
}

class TrackView : public QWidget
{
    Q_OBJECT

public:
    explicit TrackView(QWidget *parent = nullptr);
    ~TrackView();
    void genreTracks(const QStringList &tracks);
    void setUsername(const QString &username);

signals:
    void backButtonClicked();
    void addToPlaylistClicked(const QString &track, const QString &artist);


private slots:
    void on_backButton_clicked();

    void on_trackView_doubleClicked(const QModelIndex &index);

    void addToLiked();

private:
    Ui::TrackView *ui;
    QStringListModel *model;
    QMenu *contextMenu;
    Liked *likedTracks;
    QString username;
};



#endif // TRACKVIEW_H
