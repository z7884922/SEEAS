#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include <QMessageBox>
#include "ui_welcome.h"

class Welcome : public QWidget
{
	Q_OBJECT

public:
	Welcome(QWidget *parent = 0);
	~Welcome();

	private slots:
		void slot1();
		void slot2();
		void slot3();

private:
	Ui::Welcome ui;
};

#endif // WELCOME_H
