#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QStackedWidget>
#include <QStringListModel>
#include "liked.h"
#include "login.h"
#include "lyrics.h"
#include "spotify.h"
#include "trackview.h"
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showUsername(const QString &username);

private slots:
    // PLAYLISTS
    void on_popButton_clicked();            // POP
    void on_rapButton_clicked();            // RAP
    void on_rockButton_clicked();           // ROCK
    void on_randbButton_clicked();          // R&B
    void on_hiphopButton_clicked();         // HIPHOP
    void on_dancepopButton_clicked();       // DANCEPOP
    void on_poprapbutton_clicked();         // POPRAP
    void on_urbanconbutton_clicked();       // URBAN
    void on_trapButton_clicked();           // TRAP
    void on_southernhiphopButton_clicked(); // SOUTHERHIPHOP
    void on_modernrockButton_clicked();     // MODERNROCK
    void on_canadianpopButton_clicked();    // CANADIANPOP
    void on_hippopButton_clicked();         // HIPPOP
    void on_neoMellowButton_clicked();      // NEOMELLOW
    void on_postgrungeButton_clicked();     // POSTGRUNGE
    void on_edmButton_clicked();            // EDM
    // SEARCH
    void on_searchLine_textChanged(const QString &arg1);
    void on_searchList_clicked(const QModelIndex &index);
    // BACK
    void on_backButton_clicked();
    void on_backLiked_clicked();
    //PARSER
    void fetchLyrics(const QString &artistName, const QString &songName);
    void onLyricsFetched(int exitCode, QProcess::ExitStatus exitStatus);
    //AUTH
    // void backLyricsClicked();

    // void on_lyricsBack_clicked();
    // void on_searchButton_clicked();
    void on_likedButton_clicked();

    // void showUsername(const QString &username);

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
    Login *login;
    Liked *liked;
    QString username;
    void setLikedUsername(const QString &username);
};

#endif // MAINWINDOW_H
