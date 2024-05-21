#ifndef TRACKVIEW_H
#define TRACKVIEW_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStringListModel>

namespace Ui {
class TrackView;
}

class TrackView : public QWidget
{
    Q_OBJECT

public:
    explicit TrackView(QWidget *parent = nullptr);
    ~TrackView();
    void genreTracks(const QStringList& tracks);


private:
    Ui::TrackView *ui;
    QStringListModel *model;
};

#endif // TRACKVIEW_H
