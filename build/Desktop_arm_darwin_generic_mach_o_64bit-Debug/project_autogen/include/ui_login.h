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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_18;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_13;
    QLabel *usernameLabel;
    QLineEdit *usernameLine;
    QLabel *passwordLabel;
    QLineEdit *passwordLine;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *signupButton;
    QPushButton *loginButton;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *CheBu;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1396, 756);
        Login->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #404040, stop:1 #000000);"));
        verticalLayout_7 = new QVBoxLayout(Login);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalSpacer_3 = new QSpacerItem(20, 204, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalSpacer_18 = new QSpacerItem(500, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_14->addItem(horizontalSpacer_18);

        widget_3 = new QWidget(Login);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(350, 0));
        widget_3->setMaximumSize(QSize(350, 16777215));
        widget_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: rgba(16, 16, 16, 150);"));
        horizontalLayout_15 = new QHBoxLayout(widget_3);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(-1, -1, -1, 25);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_15 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_5);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_11->addItem(horizontalSpacer_13);


        verticalLayout_5->addLayout(horizontalLayout_11);

        usernameLabel = new QLabel(widget_3);
        usernameLabel->setObjectName("usernameLabel");
        QFont font1;
        font1.setPointSize(11);
        usernameLabel->setFont(font1);
        usernameLabel->setStyleSheet(QString::fromUtf8("background: transparent;"));

        verticalLayout_5->addWidget(usernameLabel);

        usernameLine = new QLineEdit(widget_3);
        usernameLine->setObjectName("usernameLine");
        usernameLine->setMaximumSize(QSize(250, 16777215));
        usernameLine->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: none;\n"
"color: #717072;\n"
"border-bottom: 1px solid #717072;\n"
""));

        verticalLayout_5->addWidget(usernameLine);

        passwordLabel = new QLabel(widget_3);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font1);
        passwordLabel->setStyleSheet(QString::fromUtf8("background: transparent;\n"
""));

        verticalLayout_5->addWidget(passwordLabel);

        passwordLine = new QLineEdit(widget_3);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setMaximumSize(QSize(250, 16777215));
        passwordLine->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: none;\n"
"color: #717072;\n"
"border-bottom: 1px solid #717072;\n"
""));
        passwordLine->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(passwordLine);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        signupButton = new QPushButton(widget_3);
        signupButton->setObjectName("signupButton");
        signupButton->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
"background-color: #717072;\n"
""));

        horizontalLayout_12->addWidget(signupButton);

        loginButton = new QPushButton(widget_3);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
"background-color: #717072;\n"
""));

        horizontalLayout_12->addWidget(loginButton);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalSpacer_20 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_17->addItem(horizontalSpacer_20);

        CheBu = new QPushButton(widget_3);
        CheBu->setObjectName("CheBu");
        CheBu->setMaximumSize(QSize(20, 20));
        CheBu->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_17->addWidget(CheBu);

        horizontalSpacer_19 = new QSpacerItem(51, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_17->addItem(horizontalSpacer_19);

        label = new QLabel(widget_3);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(9);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"color: #717072;"));

        horizontalLayout_17->addWidget(label);

        horizontalSpacer_21 = new QSpacerItem(35, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_17->addItem(horizontalSpacer_21);


        verticalLayout_5->addLayout(horizontalLayout_17);


        horizontalLayout_13->addLayout(verticalLayout_5);

        horizontalSpacer_16 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_13->addItem(horizontalSpacer_16);


        verticalLayout_6->addLayout(horizontalLayout_13);


        horizontalLayout_15->addLayout(verticalLayout_6);


        horizontalLayout_14->addWidget(widget_3);

        horizontalSpacer_17 = new QSpacerItem(500, 17, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_14->addItem(horizontalSpacer_17);


        verticalLayout_7->addLayout(horizontalLayout_14);

        verticalSpacer_6 = new QSpacerItem(20, 203, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_6);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "Welcome", nullptr));
        usernameLabel->setText(QCoreApplication::translate("Login", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "Password", nullptr));
        signupButton->setText(QCoreApplication::translate("Login", "Sign up", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Log in", nullptr));
        CheBu->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
