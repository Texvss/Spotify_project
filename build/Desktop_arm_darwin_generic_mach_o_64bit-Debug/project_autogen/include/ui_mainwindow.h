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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        popButton = new QPushButton(centralwidget);
        popButton->setObjectName("popButton");
        popButton->setGeometry(QRect(10, 130, 171, 171));
        rapButton = new QPushButton(centralwidget);
        rapButton->setObjectName("rapButton");
        rapButton->setGeometry(QRect(210, 130, 171, 171));
        rockButton = new QPushButton(centralwidget);
        rockButton->setObjectName("rockButton");
        rockButton->setGeometry(QRect(10, 310, 171, 171));
        randbButton = new QPushButton(centralwidget);
        randbButton->setObjectName("randbButton");
        randbButton->setGeometry(QRect(210, 310, 171, 171));
        searchList = new QListView(centralwidget);
        searchList->setObjectName("searchList");
        searchList->setGeometry(QRect(0, 60, 241, 111));
        searchList->setMouseTracking(true);
        searchList->setTabletTracking(true);
        searchList->setAutoFillBackground(true);
        searchList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        searchList->setTabKeyNavigation(true);
        searchList->setDragEnabled(true);
        searchList->setDragDropOverwriteMode(true);
        searchList->setAlternatingRowColors(true);
        searchList->setUniformItemSizes(true);
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName("searchLine");
        searchLine->setGeometry(QRect(2, 0, 241, 61));
        searchLine->setDragEnabled(false);
        searchLine->setReadOnly(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
