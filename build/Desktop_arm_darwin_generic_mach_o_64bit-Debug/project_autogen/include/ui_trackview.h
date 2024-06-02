/********************************************************************************
** Form generated from reading UI file 'trackview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKVIEW_H
#define UI_TRACKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackView
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *backButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *AlbumLabel;
    QListView *trackView;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TrackView)
    {
        if (TrackView->objectName().isEmpty())
            TrackView->setObjectName("TrackView");
        TrackView->resize(1184, 542);
        TrackView->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #404040, stop:1 #000000);"));
        horizontalLayout_3 = new QHBoxLayout(TrackView);
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
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        backButton = new QPushButton(TrackView);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(50, 30));
        backButton->setMaximumSize(QSize(50, 30));

        verticalLayout_2->addWidget(backButton);

        verticalSpacer = new QSpacerItem(20, 700, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        AlbumLabel = new QLabel(TrackView);
        AlbumLabel->setObjectName("AlbumLabel");
        AlbumLabel->setMinimumSize(QSize(600, 30));
        AlbumLabel->setMaximumSize(QSize(600, 30));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        AlbumLabel->setFont(font);
        AlbumLabel->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));

        verticalLayout->addWidget(AlbumLabel);

        trackView = new QListView(TrackView);
        trackView->setObjectName("trackView");
        trackView->setMinimumSize(QSize(600, 0));
        trackView->setMaximumSize(QSize(600, 16777215));
        trackView->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: #101010;"));
        trackView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trackView->setDragEnabled(true);
        trackView->setDragDropOverwriteMode(true);
        trackView->setAlternatingRowColors(true);
        trackView->setProperty("isWrapping", QVariant(false));
        trackView->setUniformItemSizes(false);
        trackView->setWordWrap(false);
        trackView->setSelectionRectVisible(false);

        verticalLayout->addWidget(trackView);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(470, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TrackView);

        QMetaObject::connectSlotsByName(TrackView);
    } // setupUi

    void retranslateUi(QWidget *TrackView)
    {
        TrackView->setWindowTitle(QCoreApplication::translate("TrackView", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TrackView", "Back", nullptr));
        AlbumLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TrackView: public Ui_TrackView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKVIEW_H
