#ifndef INDENTITY_H
#define INDENTITY_H

#include <QWidget>
#include "ui_indentity.h"
#include "seeas.h"

class Indentity : public QWidget
{
	Q_OBJECT

public:
	Indentity(QWidget *parent = 0);
	~Indentity();
	
	SEEAS w;

	private slots:
		void open_system();

private:
	Ui::Indentity ui;
};

#endif // INDENTITY_H
