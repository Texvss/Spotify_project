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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchLine;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *likedButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *userLabel;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QListView *searchList;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *rockButton;
    QPushButton *postgrungeButton;
    QPushButton *neoMellowButton;
    QPushButton *hiphopButton;
    QPushButton *randbButton;
    QPushButton *trapButton;
    QPushButton *popButton;
    QPushButton *edmButton;
    QPushButton *hippopButton;
    QPushButton *modernrockButton;
    QPushButton *rapButton;
    QPushButton *urbanconbutton;
    QPushButton *dancepopButton;
    QPushButton *southernhiphopButton;
    QPushButton *poprapbutton;
    QPushButton *canadianpopButton;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1054, 937);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #404040, stop:1 #000000);"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(-1);
#endif
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        searchLine = new QLineEdit(centralwidget);
        searchLine->setObjectName("searchLine");
        searchLine->setMinimumSize(QSize(230, 30));
        searchLine->setMaximumSize(QSize(250, 50));
        QFont font;
        font.setPointSize(13);
        searchLine->setFont(font);
        searchLine->setMouseTracking(true);
        searchLine->setTabletTracking(false);
        searchLine->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"border-radius: 5px;\n"
"background-color: #717072;"));
        searchLine->setCursorPosition(0);
        searchLine->setDragEnabled(false);
        searchLine->setReadOnly(false);

        horizontalLayout_2->addWidget(searchLine);

        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        likedButton = new QPushButton(centralwidget);
        likedButton->setObjectName("likedButton");
        likedButton->setMinimumSize(QSize(70, 30));
        likedButton->setMaximumSize(QSize(150, 30));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        likedButton->setFont(font1);

        horizontalLayout_2->addWidget(likedButton);

        horizontalSpacer_4 = new QSpacerItem(217, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        userLabel = new QLabel(centralwidget);
        userLabel->setObjectName("userLabel");
        userLabel->setMinimumSize(QSize(150, 30));
        userLabel->setMaximumSize(QSize(200, 30));
        userLabel->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-bottom: 1px solid #717072;\n"
"color:#717072;\n"
""));
        userLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2->addWidget(userLabel);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(-1);
#endif
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        searchList = new QListView(centralwidget);
        searchList->setObjectName("searchList");
        searchList->setMinimumSize(QSize(410, 100));
        searchList->setMaximumSize(QSize(410, 100));
        searchList->setMouseTracking(true);
        searchList->setTabletTracking(true);
        searchList->setAutoFillBackground(true);
        searchList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        searchList->setTabKeyNavigation(true);
        searchList->setDragEnabled(true);
        searchList->setDragDropOverwriteMode(true);
        searchList->setAlternatingRowColors(true);
        searchList->setUniformItemSizes(true);

        horizontalLayout_3->addWidget(searchList);

        horizontalSpacer_5 = new QSpacerItem(600, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(35);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(-1, 10, 0, 130);
        rockButton = new QPushButton(centralwidget);
        rockButton->setObjectName("rockButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rockButton->sizePolicy().hasHeightForWidth());
        rockButton->setSizePolicy(sizePolicy);
        rockButton->setMinimumSize(QSize(125, 125));
        rockButton->setMaximumSize(QSize(125, 125));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8(":/pictures/rock_button.png")));
        rockButton->setIcon(icon);
        rockButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(rockButton, 0, 1, 1, 1);

        postgrungeButton = new QPushButton(centralwidget);
        postgrungeButton->setObjectName("postgrungeButton");
        sizePolicy.setHeightForWidth(postgrungeButton->sizePolicy().hasHeightForWidth());
        postgrungeButton->setSizePolicy(sizePolicy);
        postgrungeButton->setMinimumSize(QSize(125, 125));
        postgrungeButton->setMaximumSize(QSize(125, 125));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8(":/pictures/post_grunge_button.png")));
        postgrungeButton->setIcon(icon1);
        postgrungeButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(postgrungeButton, 0, 2, 1, 1);

        neoMellowButton = new QPushButton(centralwidget);
        neoMellowButton->setObjectName("neoMellowButton");
        sizePolicy.setHeightForWidth(neoMellowButton->sizePolicy().hasHeightForWidth());
        neoMellowButton->setSizePolicy(sizePolicy);
        neoMellowButton->setMinimumSize(QSize(125, 125));
        neoMellowButton->setMaximumSize(QSize(125, 125));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8(":/pictures/neo_mellow_button.png")));
        neoMellowButton->setIcon(icon2);
        neoMellowButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(neoMellowButton, 2, 3, 1, 1);

        hiphopButton = new QPushButton(centralwidget);
        hiphopButton->setObjectName("hiphopButton");
        sizePolicy.setHeightForWidth(hiphopButton->sizePolicy().hasHeightForWidth());
        hiphopButton->setSizePolicy(sizePolicy);
        hiphopButton->setMinimumSize(QSize(125, 125));
        hiphopButton->setMaximumSize(QSize(125, 125));
        hiphopButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8(":/pictures/new_hip_hop_button.png")));
        hiphopButton->setIcon(icon3);
        hiphopButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(hiphopButton, 0, 0, 1, 1);

        randbButton = new QPushButton(centralwidget);
        randbButton->setObjectName("randbButton");
        sizePolicy.setHeightForWidth(randbButton->sizePolicy().hasHeightForWidth());
        randbButton->setSizePolicy(sizePolicy);
        randbButton->setMinimumSize(QSize(125, 125));
        randbButton->setMaximumSize(QSize(125, 125));
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8(":/pictures/RnB_button.png")));
        randbButton->setIcon(icon4);
        randbButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(randbButton, 3, 1, 1, 1);

        trapButton = new QPushButton(centralwidget);
        trapButton->setObjectName("trapButton");
        sizePolicy.setHeightForWidth(trapButton->sizePolicy().hasHeightForWidth());
        trapButton->setSizePolicy(sizePolicy);
        trapButton->setMinimumSize(QSize(125, 125));
        trapButton->setMaximumSize(QSize(125, 125));
        QIcon icon5(QIcon::fromTheme(QString::fromUtf8(":/pictures/trap_button.png")));
        trapButton->setIcon(icon5);
        trapButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(trapButton, 2, 2, 1, 1);

        popButton = new QPushButton(centralwidget);
        popButton->setObjectName("popButton");
        sizePolicy.setHeightForWidth(popButton->sizePolicy().hasHeightForWidth());
        popButton->setSizePolicy(sizePolicy);
        popButton->setMinimumSize(QSize(125, 125));
        popButton->setMaximumSize(QSize(125, 125));
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8(":/pictures/pop_button.png")));
        popButton->setIcon(icon6);
        popButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(popButton, 1, 0, 1, 1);

        edmButton = new QPushButton(centralwidget);
        edmButton->setObjectName("edmButton");
        sizePolicy.setHeightForWidth(edmButton->sizePolicy().hasHeightForWidth());
        edmButton->setSizePolicy(sizePolicy);
        edmButton->setMinimumSize(QSize(125, 125));
        edmButton->setMaximumSize(QSize(125, 125));
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8(":/pictures/EDM_button.png")));
        edmButton->setIcon(icon7);
        edmButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(edmButton, 3, 2, 1, 1);

        hippopButton = new QPushButton(centralwidget);
        hippopButton->setObjectName("hippopButton");
        sizePolicy.setHeightForWidth(hippopButton->sizePolicy().hasHeightForWidth());
        hippopButton->setSizePolicy(sizePolicy);
        hippopButton->setMinimumSize(QSize(125, 125));
        hippopButton->setMaximumSize(QSize(125, 125));
        QIcon icon8(QIcon::fromTheme(QString::fromUtf8(":/pictures/hip_pop_button.png")));
        hippopButton->setIcon(icon8);
        hippopButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(hippopButton, 0, 3, 1, 1);

        modernrockButton = new QPushButton(centralwidget);
        modernrockButton->setObjectName("modernrockButton");
        sizePolicy.setHeightForWidth(modernrockButton->sizePolicy().hasHeightForWidth());
        modernrockButton->setSizePolicy(sizePolicy);
        modernrockButton->setMinimumSize(QSize(125, 125));
        modernrockButton->setMaximumSize(QSize(125, 125));
        QIcon icon9(QIcon::fromTheme(QString::fromUtf8(":/pictures/modern_rock_button.png")));
        modernrockButton->setIcon(icon9);
        modernrockButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(modernrockButton, 1, 2, 1, 1);

        rapButton = new QPushButton(centralwidget);
        rapButton->setObjectName("rapButton");
        sizePolicy.setHeightForWidth(rapButton->sizePolicy().hasHeightForWidth());
        rapButton->setSizePolicy(sizePolicy);
        rapButton->setMinimumSize(QSize(125, 125));
        rapButton->setMaximumSize(QSize(125, 125));
        QIcon icon10(QIcon::fromTheme(QString::fromUtf8(":/pictures/rap_button.png")));
        rapButton->setIcon(icon10);
        rapButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(rapButton, 2, 0, 1, 1);

        urbanconbutton = new QPushButton(centralwidget);
        urbanconbutton->setObjectName("urbanconbutton");
        sizePolicy.setHeightForWidth(urbanconbutton->sizePolicy().hasHeightForWidth());
        urbanconbutton->setSizePolicy(sizePolicy);
        urbanconbutton->setMinimumSize(QSize(100, 100));
        urbanconbutton->setMaximumSize(QSize(125, 125));
        QIcon icon11(QIcon::fromTheme(QString::fromUtf8(":/pictures/Urban_button.png")));
        urbanconbutton->setIcon(icon11);
        urbanconbutton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(urbanconbutton, 2, 1, 1, 1);

        dancepopButton = new QPushButton(centralwidget);
        dancepopButton->setObjectName("dancepopButton");
        sizePolicy.setHeightForWidth(dancepopButton->sizePolicy().hasHeightForWidth());
        dancepopButton->setSizePolicy(sizePolicy);
        dancepopButton->setMinimumSize(QSize(125, 125));
        dancepopButton->setMaximumSize(QSize(125, 125));
        QIcon icon12(QIcon::fromTheme(QString::fromUtf8(":/pictures/dance_pop_button.png")));
        dancepopButton->setIcon(icon12);
        dancepopButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(dancepopButton, 3, 0, 1, 1);

        southernhiphopButton = new QPushButton(centralwidget);
        southernhiphopButton->setObjectName("southernhiphopButton");
        sizePolicy.setHeightForWidth(southernhiphopButton->sizePolicy().hasHeightForWidth());
        southernhiphopButton->setSizePolicy(sizePolicy);
        southernhiphopButton->setMinimumSize(QSize(125, 100));
        southernhiphopButton->setMaximumSize(QSize(125, 125));
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8(":/pictures/south_hip_hop_button.png")));
        southernhiphopButton->setIcon(icon13);
        southernhiphopButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(southernhiphopButton, 1, 3, 1, 1);

        poprapbutton = new QPushButton(centralwidget);
        poprapbutton->setObjectName("poprapbutton");
        sizePolicy.setHeightForWidth(poprapbutton->sizePolicy().hasHeightForWidth());
        poprapbutton->setSizePolicy(sizePolicy);
        poprapbutton->setMinimumSize(QSize(125, 125));
        poprapbutton->setMaximumSize(QSize(125, 125));
        QIcon icon14(QIcon::fromTheme(QString::fromUtf8(":/pictures/pop_rap_button.png")));
        poprapbutton->setIcon(icon14);
        poprapbutton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(poprapbutton, 1, 1, 1, 1);

        canadianpopButton = new QPushButton(centralwidget);
        canadianpopButton->setObjectName("canadianpopButton");
        sizePolicy.setHeightForWidth(canadianpopButton->sizePolicy().hasHeightForWidth());
        canadianpopButton->setSizePolicy(sizePolicy);
        canadianpopButton->setMinimumSize(QSize(125, 125));
        canadianpopButton->setMaximumSize(QSize(125, 125));
        QIcon icon15(QIcon::fromTheme(QString::fromUtf8(":/pictures/can_pop_button.png")));
        canadianpopButton->setIcon(icon15);
        canadianpopButton->setIconSize(QSize(200, 200));

        gridLayout_2->addWidget(canadianpopButton, 3, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1054, 37));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        searchLine->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        likedButton->setText(QCoreApplication::translate("MainWindow", "Favourite", nullptr));
        userLabel->setText(QString());
        rockButton->setText(QString());
        postgrungeButton->setText(QString());
        neoMellowButton->setText(QString());
        hiphopButton->setText(QString());
        randbButton->setText(QString());
        trapButton->setText(QString());
        popButton->setText(QString());
        edmButton->setText(QString());
        hippopButton->setText(QString());
        modernrockButton->setText(QString());
        rapButton->setText(QString());
        urbanconbutton->setText(QString());
        dancepopButton->setText(QString());
        southernhiphopButton->setText(QString());
        poprapbutton->setText(QString());
        canadianpopButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
