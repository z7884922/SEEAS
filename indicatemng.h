#ifndef INDICATEMNG_H
#define INDICATEMNG_H

#include <QWidget>
#include "ui_indicatemng.h"

class IndicateMng : public QWidget
{
	Q_OBJECT

public:
	IndicateMng(QWidget *parent = 0);
	~IndicateMng();

private:
	Ui::IndicateMng ui;
};

#endif // INDICATEMNG_H
