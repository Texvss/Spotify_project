#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStringListModel>
#include <QMainWindow>
#include "spotify.h"

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
    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QStringListModel *listModel;
    Spotify *spotifyData;
};
#endif // MAINWINDOW_H
