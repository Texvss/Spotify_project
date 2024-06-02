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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lyrics
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTextEdit *lyricsList;
    QPushButton *lyricsBack;
    QLabel *trackInfo;

    void setupUi(QWidget *Lyrics)
    {
        if (Lyrics->objectName().isEmpty())
            Lyrics->setObjectName("Lyrics");
        Lyrics->resize(785, 577);
        layoutWidget = new QWidget(Lyrics);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 100, 541, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lyricsList = new QTextEdit(layoutWidget);
        lyricsList->setObjectName("lyricsList");
        lyricsList->setReadOnly(true);

        horizontalLayout->addWidget(lyricsList);

        lyricsBack = new QPushButton(layoutWidget);
        lyricsBack->setObjectName("lyricsBack");

        horizontalLayout->addWidget(lyricsBack);


        verticalLayout->addLayout(horizontalLayout);

        trackInfo = new QLabel(Lyrics);
        trackInfo->setObjectName("trackInfo");
        trackInfo->setGeometry(QRect(100, 60, 351, 20));

        retranslateUi(Lyrics);

        QMetaObject::connectSlotsByName(Lyrics);
    } // setupUi

    void retranslateUi(QWidget *Lyrics)
    {
        Lyrics->setWindowTitle(QCoreApplication::translate("Lyrics", "Form", nullptr));
        lyricsBack->setText(QCoreApplication::translate("Lyrics", "Back", nullptr));
        trackInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lyrics: public Ui_Lyrics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LYRICS_H
