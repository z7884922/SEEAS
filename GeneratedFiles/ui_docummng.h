/********************************************************************************
** Form generated from reading UI file 'docummng.ui'
**
** Created: Sun Apr 7 19:43:57 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMMNG_H
#define UI_DOCUMMNG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DocumMng
{
public:

    void setupUi(QWidget *DocumMng)
    {
        if (DocumMng->objectName().isEmpty())
            DocumMng->setObjectName(QString::fromUtf8("DocumMng"));
        DocumMng->resize(400, 300);

        retranslateUi(DocumMng);

        QMetaObject::connectSlotsByName(DocumMng);
    } // setupUi

    void retranslateUi(QWidget *DocumMng)
    {
        DocumMng->setWindowTitle(QApplication::translate("DocumMng", "DocumMng", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DocumMng: public Ui_DocumMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMMNG_H
