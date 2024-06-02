#include "lyrics.h"
#include "ui_lyrics.h"

Lyrics::Lyrics(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Lyrics)
{
    ui->setupUi(this);
    ui->lyricsBack->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: "
                                  "5px;background-color: #b83030;color:white;}"
                                  "QPushButton:hover{border: 1px solid black;border-radius: "
                                  "5px;background-color: #3d010e;color:#c0c0c0;}");
}

Lyrics::~Lyrics()
{
    delete ui;
}

void Lyrics::setLyrics(const QString &text)
{
    ui->lyricsList->setPlainText(text);
}

void Lyrics::setHeaderAndLyrics(const QString &header, const QString &text)
{
    ui->trackInfo->setText(header);
    ui->lyricsList->setPlainText(text);
}

void Lyrics::on_lyricsBack_clicked()
{
    emit backLyricsClicked();
}
