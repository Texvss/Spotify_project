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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Liked
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *backLiked;
    QSpacerItem *verticalSpacer;
    QTableWidget *likedTracks;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Liked)
    {
        if (Liked->objectName().isEmpty())
            Liked->setObjectName("Liked");
        Liked->resize(783, 480);
        verticalLayout_3 = new QVBoxLayout(Liked);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 91, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        backLiked = new QPushButton(Liked);
        backLiked->setObjectName("backLiked");
        backLiked->setMinimumSize(QSize(50, 30));
        backLiked->setMaximumSize(QSize(50, 30));

        verticalLayout->addWidget(backLiked);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        likedTracks = new QTableWidget(Liked);
        likedTracks->setObjectName("likedTracks");
        likedTracks->setMinimumSize(QSize(430, 600));
        likedTracks->setMaximumSize(QSize(430, 600));
        likedTracks->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background: #101010;"));

        horizontalLayout->addWidget(likedTracks);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(11, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(266, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Liked);

        QMetaObject::connectSlotsByName(Liked);
    } // setupUi

    void retranslateUi(QWidget *Liked)
    {
        Liked->setWindowTitle(QCoreApplication::translate("Liked", "Form", nullptr));
        backLiked->setText(QCoreApplication::translate("Liked", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Liked: public Ui_Liked {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKED_H
