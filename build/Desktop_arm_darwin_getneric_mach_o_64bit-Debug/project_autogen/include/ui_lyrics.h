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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lyrics
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *lyricsBack;
    QHBoxLayout *horizontalLayout;
    QTextEdit *lyricsList;
    QPushButton *artistInfo;

    void setupUi(QWidget *Lyrics)
    {
        if (Lyrics->objectName().isEmpty())
            Lyrics->setObjectName("Lyrics");
        Lyrics->resize(785, 577);
        widget = new QWidget(Lyrics);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 541, 531));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lyricsBack = new QPushButton(widget);
        lyricsBack->setObjectName("lyricsBack");

        verticalLayout->addWidget(lyricsBack);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lyricsList = new QTextEdit(widget);
        lyricsList->setObjectName("lyricsList");
        lyricsList->setReadOnly(true);

        horizontalLayout->addWidget(lyricsList);

        artistInfo = new QPushButton(widget);
        artistInfo->setObjectName("artistInfo");

        horizontalLayout->addWidget(artistInfo);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Lyrics);

        QMetaObject::connectSlotsByName(Lyrics);
    } // setupUi

    void retranslateUi(QWidget *Lyrics)
    {
        Lyrics->setWindowTitle(QCoreApplication::translate("Lyrics", "Form", nullptr));
        lyricsBack->setText(QCoreApplication::translate("Lyrics", "Back", nullptr));
        artistInfo->setText(QCoreApplication::translate("Lyrics", "Artist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lyrics: public Ui_Lyrics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICS_H
