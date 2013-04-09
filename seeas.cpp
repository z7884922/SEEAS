#include "seeas.h"



SEEAS::SEEAS(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	stackedDlg *dlg = new stackedDlg;
	//设置窗口名称与图标
	this->setWindowTitle(tr("大软课程管理系统"));
	this->setWindowIcon(QIcon(":/system.png"));
	//设置系列动作
	openAction = new QAction(tr("打开"),this);
	openAction->setStatusTip(tr("打开之前的评分记录。"));
	openAction->setIcon(QIcon(":/Resources/open-file.png"));

	saveAction = new QAction(tr("保存"),this);
	saveAction->setStatusTip(tr("保存现在的修改。"));
	saveAction->setIcon(QIcon(":/Resources/save.png"));

	defaultAction = new QAction(tr("重置"),this);
	defaultAction->setStatusTip(tr("恢复默认。"));
	defaultAction->setIcon(QIcon(":/Resources/reset.png"));

	generateAction = new QAction(tr("生成表单"),this);
	generateAction->setStatusTip(tr("生成当前表单。"));
	generateAction->setIcon(QIcon(":/Resources/generate-tables.png"));

	previewAction = new QAction(tr("预览"),this);
	previewAction->setStatusTip(tr("预览将生成的表单。"));
	previewAction->setIcon(QIcon(":/Resources/preview-tabels.png"));

	exploreAction = new QAction(tr("查看数据库"),this);
	exploreAction->setStatusTip(tr("查看当前数据库中的数据。"));
	exploreAction->setIcon(QIcon(":/Resources/database.png"));

	calculateAction = new QAction(tr("计算"),this);
	calculateAction->setStatusTip(tr("计算出各项分值及总分。"));
	calculateAction->setIcon(QIcon(":/Resources/calculator.png"));
	//状态栏
	statulLabel = new QLabel;
	statulLabel->setMinimumSize(statulLabel->sizeHint());
	statulLabel->setAlignment(Qt::AlignHCenter); 
	statusBar()->addWidget(statulLabel);
	//动作栏
	QToolBar *toolBar = addToolBar(tr("操作")); 
	//toolBar->setWindowIcon(QIcon(":/toolbar.png"));
	toolBar->addAction(openAction);
	toolBar->addAction(saveAction);
	toolBar->addAction(defaultAction);
	toolBar->addAction(generateAction);
	toolBar->addAction(previewAction);
	toolBar->addAction(exploreAction);
	toolBar->addAction(calculateAction);
	//设置中间widget
	setCentralWidget(dlg);
}

SEEAS::~SEEAS()
{

}
