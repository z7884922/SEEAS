/********************************************************************************
** Form generated from reading UI file 'indentity.ui'
**
** Created: Sun Apr 7 19:43:57 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDENTITY_H
#define UI_INDENTITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Indentity
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *teacherButton;
    QSpacerItem *horizontalSpacer;
    QRadioButton *studentButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *enterButton;

    void setupUi(QWidget *Indentity)
    {
        if (Indentity->objectName().isEmpty())
            Indentity->setObjectName(QString::fromUtf8("Indentity"));
        Indentity->resize(250, 120);
        Indentity->setMinimumSize(QSize(250, 120));
        Indentity->setMaximumSize(QSize(250, 120));
        verticalLayout = new QVBoxLayout(Indentity);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Indentity);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        teacherButton = new QRadioButton(Indentity);
        teacherButton->setObjectName(QString::fromUtf8("teacherButton"));

        horizontalLayout->addWidget(teacherButton);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        studentButton = new QRadioButton(Indentity);
        studentButton->setObjectName(QString::fromUtf8("studentButton"));
        studentButton->setChecked(true);

        horizontalLayout->addWidget(studentButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(229, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        enterButton = new QPushButton(Indentity);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));

        horizontalLayout_3->addWidget(enterButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Indentity);
        QObject::connect(enterButton, SIGNAL(clicked()), Indentity, SLOT(close()));

        QMetaObject::connectSlotsByName(Indentity);
    } // setupUi

    void retranslateUi(QWidget *Indentity)
    {
        Indentity->setWindowTitle(QApplication::translate("Indentity", "\350\272\253\344\273\275\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Indentity", "\350\257\267\351\200\211\346\213\251\346\202\250\347\232\204\350\272\253\344\273\275\357\274\232", 0, QApplication::UnicodeUTF8));
        teacherButton->setText(QApplication::translate("Indentity", "\350\200\201\345\270\210", 0, QApplication::UnicodeUTF8));
        studentButton->setText(QApplication::translate("Indentity", "\345\255\246\347\224\237", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("Indentity", "\350\277\233\345\205\245\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Indentity: public Ui_Indentity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDENTITY_H
