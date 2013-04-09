#include "groupmng.h"

GroupMng::GroupMng(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.groupBox1_2->hide();
	ui.groupBox1_3->hide();
	ui.groupBox1_4->hide();
	ui.groupBox1_5->hide();
	ui.groupBox1_6->hide();
	connect(ui.addButton_8,SIGNAL(clicked()),this,SLOT(getOut()));
}

void GroupMng::getOut()
{
	QMessageBox::information(NULL,"No members","不能再添加成员",QMessageBox::Ok,QMessageBox::Ok);
}

GroupMng::~GroupMng()
{

}
