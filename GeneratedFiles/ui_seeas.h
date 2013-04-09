/********************************************************************************
** Form generated from reading UI file 'seeas.ui'
**
** Created: Sun Apr 7 19:43:55 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEAS_H
#define UI_SEEAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SEEASClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SEEASClass)
    {
        if (SEEASClass->objectName().isEmpty())
            SEEASClass->setObjectName(QString::fromUtf8("SEEASClass"));
        SEEASClass->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SEEASClass->sizePolicy().hasHeightForWidth());
        SEEASClass->setSizePolicy(sizePolicy);
        SEEASClass->setMinimumSize(QSize(800, 600));
        SEEASClass->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(SEEASClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SEEASClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SEEASClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SEEASClass->setStatusBar(statusBar);

        retranslateUi(SEEASClass);

        QMetaObject::connectSlotsByName(SEEASClass);
    } // setupUi

    void retranslateUi(QMainWindow *SEEASClass)
    {
        SEEASClass->setWindowTitle(QApplication::translate("SEEASClass", "SEEAS", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SEEASClass: public Ui_SEEASClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEAS_H
