/********************************************************************************
** Form generated from reading UI file 'tracklists.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKLISTS_H
#define UI_TRACKLISTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tracklists
{
public:
    QTableView *tableView;

    void setupUi(QWidget *tracklists)
    {
        if (tracklists->objectName().isEmpty())
            tracklists->setObjectName("tracklists");
        tracklists->resize(801, 457);
        tableView = new QTableView(tracklists);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(155, 101, 311, 301));

        retranslateUi(tracklists);

        QMetaObject::connectSlotsByName(tracklists);
    } // setupUi

    void retranslateUi(QWidget *tracklists)
    {
        tracklists->setWindowTitle(QCoreApplication::translate("tracklists", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tracklists: public Ui_tracklists {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKLISTS_H
