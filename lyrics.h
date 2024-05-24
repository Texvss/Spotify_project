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

private:
    Ui::Lyrics *ui;
};

#endif // LYRICS_H
