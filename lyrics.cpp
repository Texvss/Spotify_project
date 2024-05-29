#include "lyrics.h"
#include "ui_lyrics.h"

Lyrics::Lyrics(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Lyrics)
{
    ui->setupUi(this);
}

Lyrics::~Lyrics()
{
    delete ui;
}


void Lyrics::setLyrics(const QString &text)
{
    ui->lyricsList->setPlainText(text);
}

void Lyrics::on_lyricsBack_clicked()
{
    emit backLyricsClicked();
    this->hide();
}

