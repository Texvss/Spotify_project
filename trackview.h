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

signals:
    void backButtonClicked();

private slots:
    void on_backButton_clicked();

private:
    Ui::TrackView *ui;
    QStringListModel *model;
};

#endif // TRACKVIEW_H
