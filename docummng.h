#ifndef DOCUMMNG_H
#define DOCUMMNG_H

#include <QWidget>
#include "ui_docummng.h"

class DocumMng : public QWidget
{
	Q_OBJECT

public:
	DocumMng(QWidget *parent = 0);
	~DocumMng();

private:
	Ui::DocumMng ui;
};

#endif // DOCUMMNG_H
