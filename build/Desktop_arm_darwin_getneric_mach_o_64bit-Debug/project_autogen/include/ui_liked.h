/********************************************************************************
** Form generated from reading UI file 'liked.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKED_H
#define UI_LIKED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Liked
{
public:

    void setupUi(QWidget *Liked)
    {
        if (Liked->objectName().isEmpty())
            Liked->setObjectName("Liked");
        Liked->resize(783, 480);

        retranslateUi(Liked);

        QMetaObject::connectSlotsByName(Liked);
    } // setupUi

    void retranslateUi(QWidget *Liked)
    {
        Liked->setWindowTitle(QCoreApplication::translate("Liked", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liked: public Ui_Liked {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKED_H
