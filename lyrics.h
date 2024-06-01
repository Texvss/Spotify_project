#ifndef LYRICS_H
#define LYRICS_H

#include <QWidget>

namespace Ui {
class Lyrics;
}

class Lyrics : public QWidget
{
    Q_OBJECT

public:
    explicit Lyrics(QWidget *parent = nullptr);
    ~Lyrics();
    void setLyrics(const QString &text);
    void setHeaderAndLyrics(const QString &header, const QString &text);  // Новый метод

signals:
    void backLyricsClicked();

private slots:
    void on_lyricsBack_clicked();

private:
    Ui::Lyrics *ui;
};

#endif // LYRICS_H
