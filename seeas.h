#ifndef SEEAS_H
#define SEEAS_H

#include <QtGui/QMainWindow>
#include "ui_seeas.h"
#include "stackeddlg.h"
#include <QTextCodec>
#include <QPixmap>
#include <QSplashScreen>
#include <QListWidget>
#include <QStackedWidget>
#include <QtGui/QAction> 
#include <QtGui/QMenu> 
#include <QtGui/QMenuBar> 
#include <QtGui/QKeySequence> 
#include <QtGui/QToolBar>
#include <QtGui/QMessageBox>
#include <QtGui/QLabel>
#include <QtGui/QStatusBar>
#include <QIcon>
#include <QHBoxLayout>

class QLabel;
class QAction;
class QListWidget;
class QStackedWidget;

class SEEAS : public QMainWindow
{
	Q_OBJECT

public:
	SEEAS(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SEEAS();

private:
	Ui::SEEASClass ui;
	
	QAction *openAction;
	QAction *saveAction;
	QAction *defaultAction;
	QAction *generateAction;
	QAction *previewAction;
	QAction *exploreAction;
	QAction *calculateAction;

	QLabel *statulLabel;
};

#endif // SEEAS_H
