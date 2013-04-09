#include "welcome.h"

Welcome::Welcome(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(slot1()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(slot2()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(slot3()));
}

void Welcome::slot1()
{
	QMessageBox::about(NULL,"about system","操还没想好！");
}

void Welcome::slot2()
{
	QMessageBox::about(NULL,"about us","熊神欢迎你！");
}

void Welcome::slot3()
{
	QMessageBox::aboutQt(NULL,"About QT");
}

Welcome::~Welcome()
{

}
