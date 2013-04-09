#ifndef GROUPMNG_H
#define GROUPMNG_H

#include <QWidget>
#include "ui_groupmng.h"
#include <QMessageBox>

class GroupMng : public QWidget
{
	Q_OBJECT

public:
	GroupMng(QWidget *parent = 0);
	~GroupMng();

	private slots:
		void getOut();
private:
	Ui::GroupMng ui;

};

#endif // GROUPMNG_H
