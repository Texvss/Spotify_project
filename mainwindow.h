#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStringListModel>
#include <QMainWindow>
#include "spotify.h"
#include "trackview.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_popButton_clicked();
    void on_rapButton_clicked();
    void on_rockButton_clicked();
    void on_randbButton_clicked();
    void on_hiphopButton_clicked();
    void on_dancepopButton_clicked();
    void on_poprapbutton_clicked();
    void on_urbanconbutton_clicked();
    void on_searchLine_textChanged(const QString &arg1);
    void on_searchList_clicked(const QModelIndex &index);


private:
    Ui::MainWindow *ui;
    QStringListModel *listModel;
    QStandardItemModel *searchModel;
    Spotify *spotifyData;
    TrackView *trackView;
    void showTracks(const QStringList& trackNames);
    QStringList getTrackNames(const QList<QList<QString>>& filteredData) const;
};
#endif // MAINWINDOW_H
