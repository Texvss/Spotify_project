/********************************************************************************
** Form generated from reading UI file 'authdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHDIALOG_H
#define UI_AUTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AuthDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *emailLine;
    QLineEdit *passwordLine;
    QPushButton *registerButton;
    QPushButton *loginButton;

    void setupUi(QDialog *AuthDialog)
    {
        if (AuthDialog->objectName().isEmpty())
            AuthDialog->setObjectName("AuthDialog");
        AuthDialog->resize(816, 432);
        buttonBox = new QDialogButtonBox(AuthDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(510, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        emailLine = new QLineEdit(AuthDialog);
        emailLine->setObjectName("emailLine");
        emailLine->setGeometry(QRect(330, 210, 291, 61));
        passwordLine = new QLineEdit(AuthDialog);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setGeometry(QRect(330, 280, 291, 61));
        registerButton = new QPushButton(AuthDialog);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(330, 350, 100, 32));
        loginButton = new QPushButton(AuthDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(520, 350, 100, 32));

        retranslateUi(AuthDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AuthDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AuthDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AuthDialog);
    } // setupUi

    void retranslateUi(QDialog *AuthDialog)
    {
        AuthDialog->setWindowTitle(QCoreApplication::translate("AuthDialog", "Dialog", nullptr));
        registerButton->setText(QCoreApplication::translate("AuthDialog", "Register", nullptr));
        loginButton->setText(QCoreApplication::translate("AuthDialog", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthDialog: public Ui_AuthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHDIALOG_H
