/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *popButton;
    QPushButton *rapButton;
    QPushButton *rockButton;
    QPushButton *randbButton;
    QListView *searchList;
    QLineEdit *searchLine;
    QPushButton *hiphopButton;
    QPushButton *dancepopButton;
    QPushButton *poprapbutton;
    QPushButton *urbanconbutton;
    QPushButton *southernhiphopButton;
    QPushButton *hippopButton;
    QPushButton *modernrockButton;
    QPushButton *canadianpopButton;
    QPushButton *edmButton;
    QPushButton *trapButton;
    QPushButton *postgrungeButton;
    QPushButton *neoMellowButton;
    QLabel *userLabel;
    QPushButton *likedButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1053, 897);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        popButton = new QPushButton(centralwidget);
        popButton->setObjectName("popButton");
        popButton->setGeometry(QRect(90, 170, 160, 160));
        rapButton = new QPushButton(centralwidget);
        rapButton->setObjectName("rapButton");
        rapButton->setGeometry(QRect(290, 170, 160, 160));
        rockButton = new QPushButton(centralwidget);
        rockButton->setObjectName("rockButton");
        rockButton->setGeometry(QRect(90, 340, 160, 160));
        randbButton = new QPushButton(centralwidget);
        randbButton->setObjectName("randbButton");
        randbButton->setGeometry(QRect(290, 340, 160, 160));
        searchList = new QListView(centralwidget);
        searchList->setObjectName("searchList");
        searchList->setGeometry(QRect(10, 60, 401, 111));
        searchList->setMouseTracking(true);
        searchList->setTabletTracking(true);
        searchList->setAutoFillBackground(true);
        searchList->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        searchList->setTabKeyNavigation(true);
        searchList->setDragEnabled(true);
        searchList->setDragDropOverwriteMode(true);
        searchList->setAlternatingRowColors(true);
        searchList->setUniformItemSizes(true);
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName("searchLine");
        searchLine->setGeometry(QRect(10, 20, 400, 40));
        searchLine->setDragEnabled(false);
        searchLine->setReadOnly(false);
        hiphopButton = new QPushButton(centralwidget);
        hiphopButton->setObjectName("hiphopButton");
        hiphopButton->setGeometry(QRect(490, 170, 160, 160));
        dancepopButton = new QPushButton(centralwidget);
        dancepopButton->setObjectName("dancepopButton");
        dancepopButton->setGeometry(QRect(690, 170, 160, 160));
        poprapbutton = new QPushButton(centralwidget);
        poprapbutton->setObjectName("poprapbutton");
        poprapbutton->setGeometry(QRect(490, 340, 160, 160));
        urbanconbutton = new QPushButton(centralwidget);
        urbanconbutton->setObjectName("urbanconbutton");
        urbanconbutton->setGeometry(QRect(690, 340, 160, 160));
        southernhiphopButton = new QPushButton(centralwidget);
        southernhiphopButton->setObjectName("southernhiphopButton");
        southernhiphopButton->setGeometry(QRect(290, 510, 160, 160));
        hippopButton = new QPushButton(centralwidget);
        hippopButton->setObjectName("hippopButton");
        hippopButton->setGeometry(QRect(90, 680, 160, 160));
        modernrockButton = new QPushButton(centralwidget);
        modernrockButton->setObjectName("modernrockButton");
        modernrockButton->setGeometry(QRect(490, 510, 160, 160));
        canadianpopButton = new QPushButton(centralwidget);
        canadianpopButton->setObjectName("canadianpopButton");
        canadianpopButton->setGeometry(QRect(690, 510, 160, 160));
        edmButton = new QPushButton(centralwidget);
        edmButton->setObjectName("edmButton");
        edmButton->setGeometry(QRect(690, 680, 160, 160));
        trapButton = new QPushButton(centralwidget);
        trapButton->setObjectName("trapButton");
        trapButton->setGeometry(QRect(90, 510, 160, 160));
        postgrungeButton = new QPushButton(centralwidget);
        postgrungeButton->setObjectName("postgrungeButton");
        postgrungeButton->setGeometry(QRect(490, 680, 160, 160));
        neoMellowButton = new QPushButton(centralwidget);
        neoMellowButton->setObjectName("neoMellowButton");
        neoMellowButton->setGeometry(QRect(290, 680, 160, 160));
        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName("userLabel");
        userLabel->setGeometry(QRect(650, 10, 221, 31));
        userLabel->setTextFormat(Qt::TextFormat::RichText);
        likedButton = new QPushButton(centralwidget);
        likedButton->setObjectName("likedButton");
        likedButton->setGeometry(QRect(560, 70, 100, 32));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(840, 20, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        rockButton->raise();
        randbButton->raise();
        searchList->raise();
        searchLine->raise();
        hiphopButton->raise();
        dancepopButton->raise();
        poprapbutton->raise();
        urbanconbutton->raise();
        southernhiphopButton->raise();
        hippopButton->raise();
        modernrockButton->raise();
        canadianpopButton->raise();
        edmButton->raise();
        trapButton->raise();
        postgrungeButton->raise();
        neoMellowButton->raise();
        userLabel->raise();
        likedButton->raise();
        rapButton->raise();
        popButton->raise();
        horizontalLayoutWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1053, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        popButton->setText(QCoreApplication::translate("MainWindow", "Pop", nullptr));
        rapButton->setText(QCoreApplication::translate("MainWindow", "Rap", nullptr));
        rockButton->setText(QCoreApplication::translate("MainWindow", "Rock", nullptr));
        randbButton->setText(QCoreApplication::translate("MainWindow", "RandB", nullptr));
        hiphopButton->setText(QCoreApplication::translate("MainWindow", "Hip Hop", nullptr));
        dancepopButton->setText(QCoreApplication::translate("MainWindow", "Dance Pop", nullptr));
        poprapbutton->setText(QCoreApplication::translate("MainWindow", "Pop Rap", nullptr));
        urbanconbutton->setText(QCoreApplication::translate("MainWindow", "Urban Contemporary", nullptr));
        southernhiphopButton->setText(QCoreApplication::translate("MainWindow", "Southern Hip Hop", nullptr));
        hippopButton->setText(QCoreApplication::translate("MainWindow", "Hip Pop", nullptr));
        modernrockButton->setText(QCoreApplication::translate("MainWindow", "Modern Rock", nullptr));
        canadianpopButton->setText(QCoreApplication::translate("MainWindow", "Canadian Pop", nullptr));
        edmButton->setText(QCoreApplication::translate("MainWindow", "Edm", nullptr));
        trapButton->setText(QCoreApplication::translate("MainWindow", "Trap", nullptr));
        postgrungeButton->setText(QCoreApplication::translate("MainWindow", "Post-Grunge", nullptr));
        neoMellowButton->setText(QCoreApplication::translate("MainWindow", "Neo Mellow", nullptr));
        userLabel->setText(QString());
        likedButton->setText(QCoreApplication::translate("MainWindow", "Liked", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
