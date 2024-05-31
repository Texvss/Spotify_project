/********************************************************************************
** Form generated from reading UI file 'lyrics.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LYRICS_H
#define UI_LYRICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lyrics
{
public:
    QTextEdit *lyricsList;
    QPushButton *lyricsBack;

    void setupUi(QWidget *Lyrics)
    {
        if (Lyrics->objectName().isEmpty())
            Lyrics->setObjectName("Lyrics");
        Lyrics->resize(785, 577);
        lyricsList = new QTextEdit(Lyrics);
        lyricsList->setObjectName("lyricsList");
        lyricsList->setGeometry(QRect(0, 0, 491, 441));
        lyricsBack = new QPushButton(Lyrics);
        lyricsBack->setObjectName("lyricsBack");
        lyricsBack->setGeometry(QRect(530, 311, 121, 61));

        retranslateUi(Lyrics);

        QMetaObject::connectSlotsByName(Lyrics);
    } // setupUi

    void retranslateUi(QWidget *Lyrics)
    {
        Lyrics->setWindowTitle(QCoreApplication::translate("Lyrics", "Form", nullptr));
        lyricsBack->setText(QCoreApplication::translate("Lyrics", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lyrics: public Ui_Lyrics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICS_H
