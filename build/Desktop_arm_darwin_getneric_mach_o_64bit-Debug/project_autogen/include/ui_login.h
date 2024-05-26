/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *loginButton;
    QPushButton *signupButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLine;
    QLabel *picrure;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(558, 374);
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 230, 381, 41));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(260, 40, 271, 181));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(120, 140, 100, 32));
        signupButton = new QPushButton(groupBox);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(0, 140, 100, 32));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 40, 202, 58));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        usernameLabel = new QLabel(widget);
        usernameLabel->setObjectName("usernameLabel");

        horizontalLayout->addWidget(usernameLabel);

        usernameLine = new QLineEdit(widget);
        usernameLine->setObjectName("usernameLine");

        horizontalLayout->addWidget(usernameLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLine = new QLineEdit(widget);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLine);


        verticalLayout->addLayout(horizontalLayout_2);

        picrure = new QLabel(Login);
        picrure->setObjectName("picrure");
        picrure->setGeometry(QRect(10, 30, 201, 191));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "[+] Status", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Login", "Sign in:", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Log in", nullptr));
        signupButton->setText(QCoreApplication::translate("Login", "Sign up", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        picrure->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
