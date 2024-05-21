/********************************************************************************
** Form generated from reading UI file 'tracklist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKLIST_H
#define UI_TRACKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tracklist
{
public:
    QTableView *tableView;

    void setupUi(QWidget *Tracklist)
    {
        if (Tracklist->objectName().isEmpty())
            Tracklist->setObjectName("Tracklist");
        Tracklist->resize(801, 466);
        tableView = new QTableView(Tracklist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(100, 50, 256, 192));

        retranslateUi(Tracklist);

        QMetaObject::connectSlotsByName(Tracklist);
    } // setupUi

    void retranslateUi(QWidget *Tracklist)
    {
        Tracklist->setWindowTitle(QCoreApplication::translate("Tracklist", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tracklist: public Ui_Tracklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKLIST_H
