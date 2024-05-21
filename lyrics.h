#ifndef LYRICS_H
#define LYRICS_H

#include <QWidget>

namespace Ui {
class lyrics;
}

class lyrics : public QWidget
{
    Q_OBJECT

public:
    explicit lyrics(QWidget *parent = nullptr);
    ~lyrics();
    void lyricsText(const QString &text);

private:
    Ui::lyrics *ui;
};

#endif // LYRICS_H
