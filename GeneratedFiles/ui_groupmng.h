/********************************************************************************
** Form generated from reading UI file 'groupmng.ui'
**
** Created: Sun Apr 7 19:43:57 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPMNG_H
#define UI_GROUPMNG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupMng
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *groupLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *projectLabel;
    QLineEdit *projectLineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *stuNumLabel;
    QLineEdit *stuNumLine;
    QLabel *nameLabel;
    QLineEdit *nameLine;
    QLabel *workLabel;
    QComboBox *comboBox;
    QLabel *phoneLabel;
    QLineEdit *phoneLine;
    QLabel *e_mailLabel;
    QPushButton *addButton_1;
    QLineEdit *e_mailLine;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox1_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *stuNumLabel_3;
    QLineEdit *stuNumLine_3;
    QLabel *nameLabel_3;
    QLineEdit *nameLine_3;
    QLabel *workLabel_3;
    QComboBox *comboBox_3;
    QLabel *phoneLabel_3;
    QLineEdit *phoneLine_3;
    QLabel *e_mailLabel_3;
    QPushButton *addButton_3;
    QLineEdit *e_mailLine_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox1_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *stuNumLabel_4;
    QLineEdit *stuNumLine_4;
    QLabel *nameLabel_4;
    QLineEdit *nameLine_4;
    QLabel *workLabel_4;
    QComboBox *comboBox_4;
    QLabel *phoneLabel_4;
    QLineEdit *phoneLine_4;
    QLabel *e_mailLabel_4;
    QPushButton *addButton_4;
    QLineEdit *e_mailLine_4;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox1_4;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_6;
    QLabel *stuNumLabel_6;
    QLineEdit *stuNumLine_6;
    QLabel *nameLabel_6;
    QLineEdit *nameLine_6;
    QLabel *workLabel_6;
    QComboBox *comboBox_6;
    QLabel *phoneLabel_6;
    QLineEdit *phoneLine_6;
    QLabel *e_mailLabel_6;
    QPushButton *addButton_6;
    QLineEdit *e_mailLine_6;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox1_5;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_7;
    QLabel *stuNumLabel_7;
    QLineEdit *stuNumLine_7;
    QLabel *nameLabel_7;
    QLineEdit *nameLine_7;
    QLabel *workLabel_7;
    QComboBox *comboBox_7;
    QLabel *phoneLabel_7;
    QLineEdit *phoneLine_7;
    QLabel *e_mailLabel_7;
    QPushButton *addButton_7;
    QLineEdit *e_mailLine_7;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox1_6;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_8;
    QLabel *stuNumLabel_8;
    QLineEdit *stuNumLine_8;
    QLabel *nameLabel_8;
    QLineEdit *nameLine_8;
    QLabel *workLabel_8;
    QComboBox *comboBox_8;
    QLabel *phoneLabel_8;
    QLineEdit *phoneLine_8;
    QLabel *e_mailLabel_8;
    QPushButton *addButton_8;
    QLineEdit *e_mailLine_8;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *GroupMng)
    {
        if (GroupMng->objectName().isEmpty())
            GroupMng->setObjectName(QString::fromUtf8("GroupMng"));
        GroupMng->resize(801, 470);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupMng->sizePolicy().hasHeightForWidth());
        GroupMng->setSizePolicy(sizePolicy);
        GroupMng->setAutoFillBackground(true);
        verticalLayout_7 = new QVBoxLayout(GroupMng);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupLabel = new QLabel(GroupMng);
        groupLabel->setObjectName(QString::fromUtf8("groupLabel"));

        horizontalLayout->addWidget(groupLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        projectLabel = new QLabel(GroupMng);
        projectLabel->setObjectName(QString::fromUtf8("projectLabel"));

        horizontalLayout->addWidget(projectLabel);

        projectLineEdit = new QLineEdit(GroupMng);
        projectLineEdit->setObjectName(QString::fromUtf8("projectLineEdit"));
        projectLineEdit->setStyleSheet(QString::fromUtf8("border:2px solid black;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"selection-background-color:darkgray;\n"
"border-style:outset;"));

        horizontalLayout->addWidget(projectLineEdit);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalSpacer_5 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox1 = new QGroupBox(GroupMng);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        verticalLayout = new QVBoxLayout(groupBox1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stuNumLabel = new QLabel(groupBox1);
        stuNumLabel->setObjectName(QString::fromUtf8("stuNumLabel"));

        gridLayout->addWidget(stuNumLabel, 0, 0, 1, 1);

        stuNumLine = new QLineEdit(groupBox1);
        stuNumLine->setObjectName(QString::fromUtf8("stuNumLine"));

        gridLayout->addWidget(stuNumLine, 0, 1, 1, 1);

        nameLabel = new QLabel(groupBox1);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 2, 1, 1);

        nameLine = new QLineEdit(groupBox1);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout->addWidget(nameLine, 0, 3, 1, 1);

        workLabel = new QLabel(groupBox1);
        workLabel->setObjectName(QString::fromUtf8("workLabel"));

        gridLayout->addWidget(workLabel, 1, 0, 1, 1);

        comboBox = new QComboBox(groupBox1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        phoneLabel = new QLabel(groupBox1);
        phoneLabel->setObjectName(QString::fromUtf8("phoneLabel"));

        gridLayout->addWidget(phoneLabel, 1, 2, 1, 1);

        phoneLine = new QLineEdit(groupBox1);
        phoneLine->setObjectName(QString::fromUtf8("phoneLine"));

        gridLayout->addWidget(phoneLine, 1, 3, 1, 1);

        e_mailLabel = new QLabel(groupBox1);
        e_mailLabel->setObjectName(QString::fromUtf8("e_mailLabel"));

        gridLayout->addWidget(e_mailLabel, 2, 0, 1, 1);

        addButton_1 = new QPushButton(groupBox1);
        addButton_1->setObjectName(QString::fromUtf8("addButton_1"));
        addButton_1->setCheckable(true);
        addButton_1->setAutoDefault(false);
        addButton_1->setDefault(false);
        addButton_1->setFlat(false);

        gridLayout->addWidget(addButton_1, 2, 3, 1, 1);

        e_mailLine = new QLineEdit(groupBox1);
        e_mailLine->setObjectName(QString::fromUtf8("e_mailLine"));
        e_mailLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout->addWidget(e_mailLine, 2, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_2->addWidget(groupBox1);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBox1_2 = new QGroupBox(GroupMng);
        groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox1_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stuNumLabel_3 = new QLabel(groupBox1_2);
        stuNumLabel_3->setObjectName(QString::fromUtf8("stuNumLabel_3"));

        gridLayout_3->addWidget(stuNumLabel_3, 0, 0, 1, 1);

        stuNumLine_3 = new QLineEdit(groupBox1_2);
        stuNumLine_3->setObjectName(QString::fromUtf8("stuNumLine_3"));

        gridLayout_3->addWidget(stuNumLine_3, 0, 1, 1, 1);

        nameLabel_3 = new QLabel(groupBox1_2);
        nameLabel_3->setObjectName(QString::fromUtf8("nameLabel_3"));

        gridLayout_3->addWidget(nameLabel_3, 0, 2, 1, 1);

        nameLine_3 = new QLineEdit(groupBox1_2);
        nameLine_3->setObjectName(QString::fromUtf8("nameLine_3"));

        gridLayout_3->addWidget(nameLine_3, 0, 3, 1, 1);

        workLabel_3 = new QLabel(groupBox1_2);
        workLabel_3->setObjectName(QString::fromUtf8("workLabel_3"));

        gridLayout_3->addWidget(workLabel_3, 1, 0, 1, 1);

        comboBox_3 = new QComboBox(groupBox1_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_3->addWidget(comboBox_3, 1, 1, 1, 1);

        phoneLabel_3 = new QLabel(groupBox1_2);
        phoneLabel_3->setObjectName(QString::fromUtf8("phoneLabel_3"));

        gridLayout_3->addWidget(phoneLabel_3, 1, 2, 1, 1);

        phoneLine_3 = new QLineEdit(groupBox1_2);
        phoneLine_3->setObjectName(QString::fromUtf8("phoneLine_3"));

        gridLayout_3->addWidget(phoneLine_3, 1, 3, 1, 1);

        e_mailLabel_3 = new QLabel(groupBox1_2);
        e_mailLabel_3->setObjectName(QString::fromUtf8("e_mailLabel_3"));

        gridLayout_3->addWidget(e_mailLabel_3, 2, 0, 1, 1);

        addButton_3 = new QPushButton(groupBox1_2);
        addButton_3->setObjectName(QString::fromUtf8("addButton_3"));
        addButton_3->setCheckable(true);
        addButton_3->setAutoDefault(true);
        addButton_3->setDefault(true);

        gridLayout_3->addWidget(addButton_3, 2, 3, 1, 1);

        e_mailLine_3 = new QLineEdit(groupBox1_2);
        e_mailLine_3->setObjectName(QString::fromUtf8("e_mailLine_3"));
        e_mailLine_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout_3->addWidget(e_mailLine_3, 2, 1, 1, 2);


        verticalLayout_2->addLayout(gridLayout_3);


        horizontalLayout_2->addWidget(groupBox1_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox1_3 = new QGroupBox(GroupMng);
        groupBox1_3->setObjectName(QString::fromUtf8("groupBox1_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox1_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stuNumLabel_4 = new QLabel(groupBox1_3);
        stuNumLabel_4->setObjectName(QString::fromUtf8("stuNumLabel_4"));

        gridLayout_4->addWidget(stuNumLabel_4, 0, 0, 1, 1);

        stuNumLine_4 = new QLineEdit(groupBox1_3);
        stuNumLine_4->setObjectName(QString::fromUtf8("stuNumLine_4"));

        gridLayout_4->addWidget(stuNumLine_4, 0, 1, 1, 1);

        nameLabel_4 = new QLabel(groupBox1_3);
        nameLabel_4->setObjectName(QString::fromUtf8("nameLabel_4"));

        gridLayout_4->addWidget(nameLabel_4, 0, 2, 1, 1);

        nameLine_4 = new QLineEdit(groupBox1_3);
        nameLine_4->setObjectName(QString::fromUtf8("nameLine_4"));

        gridLayout_4->addWidget(nameLine_4, 0, 3, 1, 1);

        workLabel_4 = new QLabel(groupBox1_3);
        workLabel_4->setObjectName(QString::fromUtf8("workLabel_4"));

        gridLayout_4->addWidget(workLabel_4, 1, 0, 1, 1);

        comboBox_4 = new QComboBox(groupBox1_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_4->addWidget(comboBox_4, 1, 1, 1, 1);

        phoneLabel_4 = new QLabel(groupBox1_3);
        phoneLabel_4->setObjectName(QString::fromUtf8("phoneLabel_4"));

        gridLayout_4->addWidget(phoneLabel_4, 1, 2, 1, 1);

        phoneLine_4 = new QLineEdit(groupBox1_3);
        phoneLine_4->setObjectName(QString::fromUtf8("phoneLine_4"));

        gridLayout_4->addWidget(phoneLine_4, 1, 3, 1, 1);

        e_mailLabel_4 = new QLabel(groupBox1_3);
        e_mailLabel_4->setObjectName(QString::fromUtf8("e_mailLabel_4"));

        gridLayout_4->addWidget(e_mailLabel_4, 2, 0, 1, 1);

        addButton_4 = new QPushButton(groupBox1_3);
        addButton_4->setObjectName(QString::fromUtf8("addButton_4"));
        addButton_4->setCheckable(true);
        addButton_4->setAutoDefault(true);
        addButton_4->setDefault(true);

        gridLayout_4->addWidget(addButton_4, 2, 3, 1, 1);

        e_mailLine_4 = new QLineEdit(groupBox1_3);
        e_mailLine_4->setObjectName(QString::fromUtf8("e_mailLine_4"));
        e_mailLine_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout_4->addWidget(e_mailLine_4, 2, 1, 1, 2);


        verticalLayout_3->addLayout(gridLayout_4);


        horizontalLayout_3->addWidget(groupBox1_3);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        groupBox1_4 = new QGroupBox(GroupMng);
        groupBox1_4->setObjectName(QString::fromUtf8("groupBox1_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox1_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        stuNumLabel_6 = new QLabel(groupBox1_4);
        stuNumLabel_6->setObjectName(QString::fromUtf8("stuNumLabel_6"));

        gridLayout_6->addWidget(stuNumLabel_6, 0, 0, 1, 1);

        stuNumLine_6 = new QLineEdit(groupBox1_4);
        stuNumLine_6->setObjectName(QString::fromUtf8("stuNumLine_6"));

        gridLayout_6->addWidget(stuNumLine_6, 0, 1, 1, 1);

        nameLabel_6 = new QLabel(groupBox1_4);
        nameLabel_6->setObjectName(QString::fromUtf8("nameLabel_6"));

        gridLayout_6->addWidget(nameLabel_6, 0, 2, 1, 1);

        nameLine_6 = new QLineEdit(groupBox1_4);
        nameLine_6->setObjectName(QString::fromUtf8("nameLine_6"));

        gridLayout_6->addWidget(nameLine_6, 0, 3, 1, 1);

        workLabel_6 = new QLabel(groupBox1_4);
        workLabel_6->setObjectName(QString::fromUtf8("workLabel_6"));

        gridLayout_6->addWidget(workLabel_6, 1, 0, 1, 1);

        comboBox_6 = new QComboBox(groupBox1_4);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_6->addWidget(comboBox_6, 1, 1, 1, 1);

        phoneLabel_6 = new QLabel(groupBox1_4);
        phoneLabel_6->setObjectName(QString::fromUtf8("phoneLabel_6"));

        gridLayout_6->addWidget(phoneLabel_6, 1, 2, 1, 1);

        phoneLine_6 = new QLineEdit(groupBox1_4);
        phoneLine_6->setObjectName(QString::fromUtf8("phoneLine_6"));

        gridLayout_6->addWidget(phoneLine_6, 1, 3, 1, 1);

        e_mailLabel_6 = new QLabel(groupBox1_4);
        e_mailLabel_6->setObjectName(QString::fromUtf8("e_mailLabel_6"));

        gridLayout_6->addWidget(e_mailLabel_6, 2, 0, 1, 1);

        addButton_6 = new QPushButton(groupBox1_4);
        addButton_6->setObjectName(QString::fromUtf8("addButton_6"));
        addButton_6->setCheckable(true);
        addButton_6->setAutoDefault(true);
        addButton_6->setDefault(true);

        gridLayout_6->addWidget(addButton_6, 2, 3, 1, 1);

        e_mailLine_6 = new QLineEdit(groupBox1_4);
        e_mailLine_6->setObjectName(QString::fromUtf8("e_mailLine_6"));
        e_mailLine_6->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout_6->addWidget(e_mailLine_6, 2, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout_6);


        horizontalLayout_3->addWidget(groupBox1_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox1_5 = new QGroupBox(GroupMng);
        groupBox1_5->setObjectName(QString::fromUtf8("groupBox1_5"));
        verticalLayout_5 = new QVBoxLayout(groupBox1_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        stuNumLabel_7 = new QLabel(groupBox1_5);
        stuNumLabel_7->setObjectName(QString::fromUtf8("stuNumLabel_7"));

        gridLayout_7->addWidget(stuNumLabel_7, 0, 0, 1, 1);

        stuNumLine_7 = new QLineEdit(groupBox1_5);
        stuNumLine_7->setObjectName(QString::fromUtf8("stuNumLine_7"));

        gridLayout_7->addWidget(stuNumLine_7, 0, 1, 1, 1);

        nameLabel_7 = new QLabel(groupBox1_5);
        nameLabel_7->setObjectName(QString::fromUtf8("nameLabel_7"));

        gridLayout_7->addWidget(nameLabel_7, 0, 2, 1, 1);

        nameLine_7 = new QLineEdit(groupBox1_5);
        nameLine_7->setObjectName(QString::fromUtf8("nameLine_7"));

        gridLayout_7->addWidget(nameLine_7, 0, 3, 1, 1);

        workLabel_7 = new QLabel(groupBox1_5);
        workLabel_7->setObjectName(QString::fromUtf8("workLabel_7"));

        gridLayout_7->addWidget(workLabel_7, 1, 0, 1, 1);

        comboBox_7 = new QComboBox(groupBox1_5);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_7->addWidget(comboBox_7, 1, 1, 1, 1);

        phoneLabel_7 = new QLabel(groupBox1_5);
        phoneLabel_7->setObjectName(QString::fromUtf8("phoneLabel_7"));

        gridLayout_7->addWidget(phoneLabel_7, 1, 2, 1, 1);

        phoneLine_7 = new QLineEdit(groupBox1_5);
        phoneLine_7->setObjectName(QString::fromUtf8("phoneLine_7"));

        gridLayout_7->addWidget(phoneLine_7, 1, 3, 1, 1);

        e_mailLabel_7 = new QLabel(groupBox1_5);
        e_mailLabel_7->setObjectName(QString::fromUtf8("e_mailLabel_7"));

        gridLayout_7->addWidget(e_mailLabel_7, 2, 0, 1, 1);

        addButton_7 = new QPushButton(groupBox1_5);
        addButton_7->setObjectName(QString::fromUtf8("addButton_7"));
        addButton_7->setCheckable(true);
        addButton_7->setAutoDefault(true);
        addButton_7->setDefault(true);

        gridLayout_7->addWidget(addButton_7, 2, 3, 1, 1);

        e_mailLine_7 = new QLineEdit(groupBox1_5);
        e_mailLine_7->setObjectName(QString::fromUtf8("e_mailLine_7"));
        e_mailLine_7->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout_7->addWidget(e_mailLine_7, 2, 1, 1, 2);


        verticalLayout_5->addLayout(gridLayout_7);


        horizontalLayout_4->addWidget(groupBox1_5);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        groupBox1_6 = new QGroupBox(GroupMng);
        groupBox1_6->setObjectName(QString::fromUtf8("groupBox1_6"));
        verticalLayout_6 = new QVBoxLayout(groupBox1_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        stuNumLabel_8 = new QLabel(groupBox1_6);
        stuNumLabel_8->setObjectName(QString::fromUtf8("stuNumLabel_8"));

        gridLayout_8->addWidget(stuNumLabel_8, 0, 0, 1, 1);

        stuNumLine_8 = new QLineEdit(groupBox1_6);
        stuNumLine_8->setObjectName(QString::fromUtf8("stuNumLine_8"));

        gridLayout_8->addWidget(stuNumLine_8, 0, 1, 1, 1);

        nameLabel_8 = new QLabel(groupBox1_6);
        nameLabel_8->setObjectName(QString::fromUtf8("nameLabel_8"));

        gridLayout_8->addWidget(nameLabel_8, 0, 2, 1, 1);

        nameLine_8 = new QLineEdit(groupBox1_6);
        nameLine_8->setObjectName(QString::fromUtf8("nameLine_8"));

        gridLayout_8->addWidget(nameLine_8, 0, 3, 1, 1);

        workLabel_8 = new QLabel(groupBox1_6);
        workLabel_8->setObjectName(QString::fromUtf8("workLabel_8"));

        gridLayout_8->addWidget(workLabel_8, 1, 0, 1, 1);

        comboBox_8 = new QComboBox(groupBox1_6);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_8->addWidget(comboBox_8, 1, 1, 1, 1);

        phoneLabel_8 = new QLabel(groupBox1_6);
        phoneLabel_8->setObjectName(QString::fromUtf8("phoneLabel_8"));

        gridLayout_8->addWidget(phoneLabel_8, 1, 2, 1, 1);

        phoneLine_8 = new QLineEdit(groupBox1_6);
        phoneLine_8->setObjectName(QString::fromUtf8("phoneLine_8"));

        gridLayout_8->addWidget(phoneLine_8, 1, 3, 1, 1);

        e_mailLabel_8 = new QLabel(groupBox1_6);
        e_mailLabel_8->setObjectName(QString::fromUtf8("e_mailLabel_8"));

        gridLayout_8->addWidget(e_mailLabel_8, 2, 0, 1, 1);

        addButton_8 = new QPushButton(groupBox1_6);
        addButton_8->setObjectName(QString::fromUtf8("addButton_8"));
        addButton_8->setCheckable(true);
        addButton_8->setAutoDefault(true);
        addButton_8->setDefault(true);

        gridLayout_8->addWidget(addButton_8, 2, 3, 1, 1);

        e_mailLine_8 = new QLineEdit(groupBox1_6);
        e_mailLine_8->setObjectName(QString::fromUtf8("e_mailLine_8"));
        e_mailLine_8->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:2px solid gray;\n"
"border-radius:10px;\n"
"padding:0 8px;\n"
"border-style:outset;\n"
"}"));

        gridLayout_8->addWidget(e_mailLine_8, 2, 1, 1, 2);


        verticalLayout_6->addLayout(gridLayout_8);


        horizontalLayout_4->addWidget(groupBox1_6);


        verticalLayout_7->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

#ifndef QT_NO_SHORTCUT
        projectLabel->setBuddy(projectLineEdit);
        stuNumLabel->setBuddy(stuNumLine);
        nameLabel->setBuddy(nameLine);
        workLabel->setBuddy(comboBox);
        phoneLabel->setBuddy(phoneLine);
        e_mailLabel->setBuddy(e_mailLine);
        stuNumLabel_3->setBuddy(stuNumLine_3);
        nameLabel_3->setBuddy(nameLine_3);
        workLabel_3->setBuddy(comboBox_3);
        phoneLabel_3->setBuddy(phoneLine_3);
        e_mailLabel_3->setBuddy(e_mailLine_3);
        stuNumLabel_4->setBuddy(stuNumLine_4);
        nameLabel_4->setBuddy(nameLine_4);
        workLabel_4->setBuddy(comboBox_4);
        phoneLabel_4->setBuddy(phoneLine_4);
        e_mailLabel_4->setBuddy(e_mailLine_4);
        stuNumLabel_6->setBuddy(stuNumLine_6);
        nameLabel_6->setBuddy(nameLine_6);
        workLabel_6->setBuddy(comboBox_6);
        phoneLabel_6->setBuddy(phoneLine_6);
        e_mailLabel_6->setBuddy(e_mailLine_6);
        stuNumLabel_7->setBuddy(stuNumLine_7);
        nameLabel_7->setBuddy(nameLine_7);
        workLabel_7->setBuddy(comboBox_7);
        phoneLabel_7->setBuddy(phoneLine_7);
        e_mailLabel_7->setBuddy(e_mailLine_7);
        stuNumLabel_8->setBuddy(stuNumLine_8);
        nameLabel_8->setBuddy(nameLine_8);
        workLabel_8->setBuddy(comboBox_8);
        phoneLabel_8->setBuddy(phoneLine_8);
        e_mailLabel_8->setBuddy(e_mailLine_8);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(projectLineEdit, stuNumLine);
        QWidget::setTabOrder(stuNumLine, nameLine);
        QWidget::setTabOrder(nameLine, comboBox);
        QWidget::setTabOrder(comboBox, phoneLine);
        QWidget::setTabOrder(phoneLine, e_mailLine);
        QWidget::setTabOrder(e_mailLine, addButton_1);
        QWidget::setTabOrder(addButton_1, stuNumLine_3);
        QWidget::setTabOrder(stuNumLine_3, nameLine_3);
        QWidget::setTabOrder(nameLine_3, comboBox_3);
        QWidget::setTabOrder(comboBox_3, phoneLine_3);
        QWidget::setTabOrder(phoneLine_3, addButton_3);
        QWidget::setTabOrder(addButton_3, e_mailLine_3);
        QWidget::setTabOrder(e_mailLine_3, stuNumLine_4);
        QWidget::setTabOrder(stuNumLine_4, nameLine_4);
        QWidget::setTabOrder(nameLine_4, comboBox_4);
        QWidget::setTabOrder(comboBox_4, phoneLine_4);
        QWidget::setTabOrder(phoneLine_4, addButton_4);
        QWidget::setTabOrder(addButton_4, e_mailLine_4);
        QWidget::setTabOrder(e_mailLine_4, stuNumLine_6);
        QWidget::setTabOrder(stuNumLine_6, nameLine_6);
        QWidget::setTabOrder(nameLine_6, comboBox_6);
        QWidget::setTabOrder(comboBox_6, phoneLine_6);
        QWidget::setTabOrder(phoneLine_6, addButton_6);
        QWidget::setTabOrder(addButton_6, e_mailLine_6);
        QWidget::setTabOrder(e_mailLine_6, stuNumLine_7);
        QWidget::setTabOrder(stuNumLine_7, nameLine_7);
        QWidget::setTabOrder(nameLine_7, comboBox_7);
        QWidget::setTabOrder(comboBox_7, phoneLine_7);
        QWidget::setTabOrder(phoneLine_7, addButton_7);
        QWidget::setTabOrder(addButton_7, e_mailLine_7);
        QWidget::setTabOrder(e_mailLine_7, stuNumLine_8);
        QWidget::setTabOrder(stuNumLine_8, nameLine_8);
        QWidget::setTabOrder(nameLine_8, comboBox_8);
        QWidget::setTabOrder(comboBox_8, phoneLine_8);
        QWidget::setTabOrder(phoneLine_8, addButton_8);
        QWidget::setTabOrder(addButton_8, e_mailLine_8);

        retranslateUi(GroupMng);
        QObject::connect(addButton_1, SIGNAL(clicked()), groupBox1_2, SLOT(show()));
        QObject::connect(addButton_3, SIGNAL(clicked()), groupBox1_3, SLOT(show()));
        QObject::connect(addButton_4, SIGNAL(clicked()), groupBox1_4, SLOT(show()));
        QObject::connect(addButton_6, SIGNAL(clicked()), groupBox1_5, SLOT(show()));
        QObject::connect(addButton_7, SIGNAL(clicked()), groupBox1_6, SLOT(show()));

        QMetaObject::connectSlotsByName(GroupMng);
    } // setupUi

    void retranslateUi(QWidget *GroupMng)
    {
        GroupMng->setWindowTitle(QApplication::translate("GroupMng", "GroupMng", 0, QApplication::UnicodeUTF8));
        groupLabel->setText(QApplication::translate("GroupMng", "\345\210\206\347\273\204\345\217\267\357\274\232   001", 0, QApplication::UnicodeUTF8));
        projectLabel->setText(QApplication::translate("GroupMng", "\351\241\271\347\233\256\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2301", 0, QApplication::UnicodeUTF8));
        stuNumLabel->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_1->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        groupBox1_2->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2302", 0, QApplication::UnicodeUTF8));
        stuNumLabel_3->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel_3->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel_3->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel_3->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel_3->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_3->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        groupBox1_3->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2303", 0, QApplication::UnicodeUTF8));
        stuNumLabel_4->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel_4->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel_4->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel_4->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel_4->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_4->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        groupBox1_4->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2304", 0, QApplication::UnicodeUTF8));
        stuNumLabel_6->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel_6->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel_6->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel_6->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel_6->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_6->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        groupBox1_5->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2305", 0, QApplication::UnicodeUTF8));
        stuNumLabel_7->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel_7->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel_7->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel_7->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel_7->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_7->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        groupBox1_6->setTitle(QApplication::translate("GroupMng", "\346\210\220\345\221\2306", 0, QApplication::UnicodeUTF8));
        stuNumLabel_8->setText(QApplication::translate("GroupMng", "\345\255\246\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        nameLabel_8->setText(QApplication::translate("GroupMng", "\345\247\223\345\220\215:", 0, QApplication::UnicodeUTF8));
        workLabel_8->setText(QApplication::translate("GroupMng", "\345\210\206\345\267\245\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("GroupMng", "\357\274\210\344\270\213\346\213\211\351\200\211\346\213\251\357\274\211", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\241\271\347\233\256\347\273\204\351\225\277", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\351\234\200\346\261\202\345\210\206\346\236\220\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\350\256\276\350\256\241\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\274\226\347\240\201\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\346\265\213\350\257\225\350\264\237\350\264\243\344\272\272", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupMng", "\347\224\250\346\210\267\344\273\243\350\241\250", 0, QApplication::UnicodeUTF8)
        );
        phoneLabel_8->setText(QApplication::translate("GroupMng", "\347\224\265\350\257\235:", 0, QApplication::UnicodeUTF8));
        e_mailLabel_8->setText(QApplication::translate("GroupMng", "E-mail:", 0, QApplication::UnicodeUTF8));
        addButton_8->setText(QApplication::translate("GroupMng", "\346\267\273\345\212\240\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GroupMng: public Ui_GroupMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPMNG_H
