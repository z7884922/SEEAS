#ifndef STACKEDDLG_H
#define STACKEDDLG_H

#include <QWidget>
#include <QListWidget>
#include <QHBoxLayout>
#include <QStackedLayout>
#include "groupmng.h"
#include "welcome.h"
#include "indicatemng.h"
#include "docummng.h"


class QListWidget;
class QStackedWidget;
class QLabel;

class stackedDlg : public QWidget
{
	Q_OBJECT

public:
	stackedDlg(QWidget *parent=0);
	~stackedDlg();

private:
	QListWidget *leftlist;
	QStackedLayout *stack;

	Welcome *welcome;
	GroupMng *groupmng;
	DocumMng *documents;
	IndicateMng *indicate;

};

#endif // STACKEDDLG_H
