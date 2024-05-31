#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QStackedWidget>
#include <QStringListModel>
#include "login.h"
#include "lyrics.h"
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
    void showUsername(const QString &username);

private slots:
    void on_popButton_clicked();
    void on_rapButton_clicked();
    void on_rockButton_clicked();
    void on_randbButton_clicked();
    void on_hiphopButton_clicked();
    void on_dancepopButton_clicked();
    void on_poprapbutton_clicked();
    void on_urbanconbutton_clicked();
    void on_trapButton_clicked();
    void on_southernhiphopButton_clicked();
    void on_modernrockButton_clicked();
    void on_canadianpopButton_clicked();
    void on_hippopButton_clicked();
    void on_neoMellowButton_clicked();
    void on_postgrungeButton_clicked();
    void on_edmButton_clicked();
    void on_searchLine_textChanged(const QString &arg1);
    void on_searchList_clicked(const QModelIndex &index);
    void on_backButton_clicked();
    void on_lyricsBack_clicked();
    void fetchLyrics(const QString &artistName, const QString &songName);
    void onLyricsFetched(int exitCode, QProcess::ExitStatus exitStatus);

private:
    Ui::MainWindow *ui;
    QStringListModel *listModel;
    QStandardItemModel *searchModel;
    QStackedWidget *stackedWidget;
    Spotify *spotifyData;
    TrackView *trackView;
    void showTracks(const QStringList &trackNames);
    QStringList getTrackNames(const QList<QList<QString>> &filteredData) const;
    Lyrics *lyricsView;
    QProcess *process;
};
#endif // MAINWINDOW_H
