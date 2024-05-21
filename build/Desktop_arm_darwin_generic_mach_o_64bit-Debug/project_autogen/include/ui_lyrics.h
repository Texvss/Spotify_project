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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lyrics
{
public:
    QTextEdit *lyricsList;

    void setupUi(QWidget *lyrics)
    {
        if (lyrics->objectName().isEmpty())
            lyrics->setObjectName("lyrics");
        lyrics->resize(456, 388);
        lyricsList = new QTextEdit(lyrics);
        lyricsList->setObjectName("lyricsList");
        lyricsList->setGeometry(QRect(33, 63, 351, 291));

        retranslateUi(lyrics);

        QMetaObject::connectSlotsByName(lyrics);
    } // setupUi

    void retranslateUi(QWidget *lyrics)
    {
        lyrics->setWindowTitle(QCoreApplication::translate("lyrics", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lyrics: public Ui_lyrics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICS_H
