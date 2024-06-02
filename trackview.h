#ifndef TRACKVIEW_H
#define TRACKVIEW_H

#include <QWidget>
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
    explicit TrackView(QWidget *parent = nullptr);
    ~TrackView();
    void genreTracks(const QStringList &tracks);
    void setUsername(const QString &username);

signals:
    void backButtonClicked();

private slots:
    void on_backButton_clicked();
    void on_trackView_doubleClicked(const QModelIndex &index);
    void addToLiked();

private:
    Ui::TrackView *ui;
    QStringListModel *model;
    QMenu *contextMenu;
    Liked *liked;
    QString username;
};

#endif // TRACKVIEW_H
