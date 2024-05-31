#include "mainwindow.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include "./ui_mainwindow.h"
#include "lyrics.h"
#include "spotify.h"
#include "trackview.h"



const QString path = ":/data/playlist_2010to20222Ars.csv";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , listModel(new QStringListModel)
    , spotifyData(new Spotify(path))
    , trackView(nullptr)
    , stackedWidget(new QStackedWidget(this))
    , searchModel(new QStandardItemModel(this))
    ,lyricsView(nullptr)
    , process(new QProcess(this))
    , login(new Login)
    , liked(nullptr)
{
    ui->setupUi(this);
    this->hide();
    login->show();
    ui->searchList->setVisible(false);
    ui->searchLine-> setVisible(false);
    // ui->userLabel->setText(Login::showUsername());

    connect(ui->popButton, &QPushButton::clicked, this, &MainWindow::on_popButton_clicked);
    connect(ui->rapButton, &QPushButton::clicked, this, &MainWindow::on_rapButton_clicked);
    connect(ui->rockButton, &QPushButton::clicked, this, &MainWindow::on_rockButton_clicked);
    connect(ui->randbButton, &QPushButton::clicked, this, &MainWindow::on_randbButton_clicked);
    connect(ui->hiphopButton, &QPushButton::clicked, this, &MainWindow::on_hiphopButton_clicked);
    connect(ui->dancepopButton, &QPushButton::clicked, this, &MainWindow::on_dancepopButton_clicked);
    connect(ui->poprapbutton, &QPushButton::clicked, this, &MainWindow::on_poprapbutton_clicked);
    connect(ui->urbanconbutton, &QPushButton::clicked, this, &MainWindow::on_urbanconbutton_clicked);
    connect(ui->trapButton, &QPushButton::clicked, this, &MainWindow::on_trapButton_clicked);
    connect(ui->southernhiphopButton,
            &QPushButton::clicked,
            this,
            &MainWindow::on_southernhiphopButton_clicked);
    connect(ui->modernrockButton,
            &QPushButton::clicked,
            this,
            &MainWindow::on_modernrockButton_clicked);
    connect(ui->canadianpopButton,
            &QPushButton::clicked,
            this,
            &MainWindow::on_canadianpopButton_clicked);
    connect(ui->hippopButton, &QPushButton::clicked, this, &MainWindow::on_hippopButton_clicked);
    connect(ui->neoMellowButton,
            &QPushButton::clicked,
            this,
            &MainWindow::on_neoMellowButton_clicked);
    connect(ui->postgrungeButton,
            &QPushButton::clicked,
            this,
            &MainWindow::on_postgrungeButton_clicked);
    connect(ui->edmButton, &QPushButton::clicked, this, &MainWindow::on_edmButton_clicked);
    connect(ui->searchLine, &QLineEdit::textChanged, this, &MainWindow::on_searchLine_textChanged);
    connect(ui->searchList, &QListView::clicked, this, &MainWindow::on_searchList_clicked);

    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), this, &MainWindow::onLyricsFetched);
    listModel->setStringList(spotifyData->getTrackNames());
    ui->searchLine->setPlaceholderText("Search...");
    ui->searchLine->setStyleSheet(
        "QLineEdit { padding: 5px; border: 1px solid gray; border-radius: 5px; }");
    ui->searchList->setStyleSheet(
        "QListView { padding: 5px; border: 1px solid gray; border-radius: 5px; }");

    stackedWidget->addWidget(ui->centralwidget);
    setCentralWidget(stackedWidget);



    // stackedWidget->addWidget(ui->centralwidget);
    // setCentralWidget(login);



    connect(login, &Login::loginSuccess, this, &MainWindow::showMainWindow);
    connect(login, &Login::signUpSuccess, this, &MainWindow::showMainWindow);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete listModel;
    delete spotifyData;
    delete trackView;
    delete searchModel;
    delete stackedWidget;
    delete login;
}


void MainWindow::showUsername(const QString &username)
{
    // currentUsername = username;
    ui->userLabel->setText("User: " + username);
}

void MainWindow::showMainWindow()
{
    this->show();
    login->hide();
    showUsername(login->showUsername());
}

void MainWindow::backLyricsClicked()
{
    this->show();
    lyricsView->hide();
}


void MainWindow::showTracks(const QStringList &trackNames)
{
    if (!trackView) {
        trackView = new TrackView(this);
        connect(trackView, &TrackView::backButtonClicked, this, &MainWindow::on_backButton_clicked);
        stackedWidget->addWidget(trackView);
    }

    trackView->genreTracks(trackNames);
    stackedWidget->setCurrentWidget(trackView);
}

QStringList MainWindow::getTrackNames(const QList<QList<QString>> &filteredData) const
{
    QStringList trackNames;
    for (const auto &row : filteredData) {
        QString trackWithArtist = row[static_cast<int>(COLUMNS::artist_name)] + " - "
                                  + row[static_cast<int>(COLUMNS::track_name)];
        trackNames << trackWithArtist;
    }
    return trackNames;
}

void MainWindow::on_popButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("pop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_rapButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("rap");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_rockButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("rock");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_randbButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("r&b");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_hiphopButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("hip hop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_dancepopButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("dance pop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_poprapbutton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("pop rap");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_urbanconbutton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("urban contemporary");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_trapButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("trap");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_southernhiphopButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("southern hip hop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_modernrockButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("modern rock");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_canadianpopButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("canadian pop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_hippopButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("hip pop");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_neoMellowButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("neo mellow");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_postgrungeButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("post-grunge");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::on_edmButton_clicked()
{
    if (spotifyData) {
        QList<QList<QString>> filteredData = spotifyData->filterByGenre("edm");
        QStringList trackNames = getTrackNames(filteredData);
        showTracks(trackNames);
    }
}

void MainWindow::fetchLyrics(const QString &artistName, const QString &songName)
{

    // QStringList arguments;
    // arguments << "/Users/mansur/PycharmProjects/genius_parser/.venv/bin/activate";
    // process->start("source", arguments);

    // arguments.clear();
    // arguments << "/Users/mansur/PycharmProjects/genius_parser/parser.py" << artistName << songName;

    // qDebug() << "Starting process with arguments:" << "/n" << arguments;
    // QString program = "python3";
    // process->start(program, arguments);
    // process->start("sh",  {"/Users/mansur/PycharmProjects/genius_parser/run.sh", artistName, songName});
    process->start("sh",  {"/Users/mansur/PycharmProjects/genius_parser/run.sh", artistName, songName});
    // for (size_t);
    qDebug() << songName.split(" ");
    qDebug() << songName.split(" ").size();
    process->waitForFinished();
    qDebug() << "Results: " << "/n" << process->readAllStandardOutput();

}


void MainWindow::on_searchLine_textChanged(const QString &text)
{
    searchModel->clear();
    if (text.isEmpty()) {
        ui->searchList->setVisible(false);
    } else {
        for (const auto &row : spotifyData->data) {
            if (row[static_cast<int>(COLUMNS::track_name)].contains(text, Qt::CaseInsensitive)) {
                QString displayText = row[static_cast<int>(COLUMNS::track_name)];
                searchModel->appendRow(new QStandardItem(displayText));
                ui->searchList->setModel(searchModel);
            } else if (row[static_cast<int>(COLUMNS::artist_name)].contains(text,
                                                                            Qt::CaseInsensitive)) {
                QString displayText = row[static_cast<int>(COLUMNS::artist_name)];
                searchModel->appendRow(new QStandardItem(displayText));
                ui->searchList->setModel(searchModel);
            } else if (row[static_cast<int>(COLUMNS::album)].contains(text, Qt::CaseInsensitive)) {
                QString displayText = row[static_cast<int>(COLUMNS::album)];
                searchModel->appendRow(new QStandardItem(displayText));
                ui->searchList->setModel(searchModel);
            }
        }
        ui->searchList->setVisible(true);
    }
}

void MainWindow::on_searchList_clicked(const QModelIndex &index)
{
    QString trackName = searchModel->data(index, Qt::DisplayRole).toString();
    // QString trackName = ui ->searchLine -> text();
    QString artistName;
    for (const auto &row : spotifyData->data) {
        if (row[static_cast<int>(COLUMNS::track_name)].compare(trackName, Qt::CaseInsensitive) == 0) {
            artistName = row[static_cast<int>(COLUMNS::artist_name)];
            break;
        }
    }

    qDebug() << trackName;
    // qDebug() << artistName;
    fetchLyrics(artistName, trackName);
}

void MainWindow::onLyricsFetched(int exitCode, QProcess::ExitStatus exitStatus)
{
    qDebug() << "Process finished with exit code:" << "/n" << exitCode << "and exit status:" << exitStatus;

    if (exitStatus == QProcess::NormalExit && exitCode == 0) {
        QString lyrics = process->readAllStandardOutput();
        qDebug() << "Lyrics fetched:" << lyrics;

        if (!lyricsView) {
            lyricsView = new Lyrics(this);
        }
        lyricsView->setLyrics(lyrics);
        lyricsView->show();
        setCentralWidget(lyricsView);
    } else {
        QString errorOutput = process->readAllStandardError();
        qDebug() << "Failed to fetch lyrics. Error:" << "/n" << errorOutput;

        QMessageBox::critical(this, "Error", "Failed to fetch lyrics");
    }
}

void MainWindow::on_backButton_clicked()
{
    stackedWidget->setCurrentWidget(ui->centralwidget);
    // trackView->hide();
    // this->show();
}


void MainWindow::on_searchButton_clicked()
{
    ui->searchLine->setVisible(true);
    ui->searchButton->setVisible(false);
}


void MainWindow::on_likedButton_clicked()
{
    if (!liked) {
        liked= new Liked(this);
        stackedWidget->addWidget(liked);
    }
    stackedWidget->setCurrentWidget(liked);
}

