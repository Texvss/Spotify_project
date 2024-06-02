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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lyrics
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *lyricsBack;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *trackInfo;
    QTextEdit *lyricsList;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Lyrics)
    {
        if (Lyrics->objectName().isEmpty())
            Lyrics->setObjectName("Lyrics");
        Lyrics->resize(1231, 609);
        Lyrics->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #404040, stop:1 #000000);"));
        horizontalLayout_3 = new QHBoxLayout(Lyrics);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lyricsBack = new QPushButton(Lyrics);
        lyricsBack->setObjectName("lyricsBack");
        lyricsBack->setMinimumSize(QSize(50, 30));
        lyricsBack->setMaximumSize(QSize(50, 30));

        verticalLayout->addWidget(lyricsBack);

        verticalSpacer = new QSpacerItem(20, 600, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, 0, 80);
        trackInfo = new QLabel(Lyrics);
        trackInfo->setObjectName("trackInfo");
        trackInfo->setMinimumSize(QSize(600, 30));
        trackInfo->setMaximumSize(QSize(600, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        trackInfo->setFont(font);
        trackInfo->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));

        verticalLayout_2->addWidget(trackInfo);

        lyricsList = new QTextEdit(Lyrics);
        lyricsList->setObjectName("lyricsList");
        lyricsList->setMinimumSize(QSize(600, 503));
        lyricsList->setMaximumSize(QSize(600, 503));
        lyricsList->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: #101010;"));
        lyricsList->setReadOnly(true);

        verticalLayout_2->addWidget(lyricsList);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(470, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


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
