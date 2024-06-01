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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrackView
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QListView *trackView;
    QPushButton *backButton;

    void setupUi(QWidget *TrackView)
    {
        if (TrackView->objectName().isEmpty())
            TrackView->setObjectName("TrackView");
        TrackView->resize(840, 483);
        layoutWidget = new QWidget(TrackView);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(330, 20, 491, 481));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        trackView = new QListView(layoutWidget);
        trackView->setObjectName("trackView");
        trackView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        trackView->setDragEnabled(true);
        trackView->setDragDropOverwriteMode(true);
        trackView->setAlternatingRowColors(true);
        trackView->setProperty("isWrapping", QVariant(false));
        trackView->setUniformItemSizes(false);
        trackView->setWordWrap(false);
        trackView->setSelectionRectVisible(false);

        horizontalLayout->addWidget(trackView);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);


        retranslateUi(TrackView);

        QMetaObject::connectSlotsByName(TrackView);
    } // setupUi

    void retranslateUi(QWidget *TrackView)
    {
        TrackView->setWindowTitle(QCoreApplication::translate("TrackView", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("TrackView", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrackView: public Ui_TrackView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKVIEW_H
