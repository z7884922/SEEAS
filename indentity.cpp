#include "indentity.h"

Indentity::Indentity(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.enterButton,SIGNAL(clicked()),this,SLOT(open_system()));
}

void Indentity::open_system()
{
	w.show();
}


Indentity::~Indentity()
{

}
