#include "seeas.h"
#include "indentity.h"
#include <QtGui/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//中文编码
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    //载入界面
	QPixmap pixmap(":/Resources/splash1.jpg");
	QSplashScreen splash(pixmap);
	splash.show();
	
	Qt::Alignment bottomRight = Qt::AlignRight | Qt::AlignBottom;		//设置开始界面显示文字的对齐
	splash.showMessage(QObject::tr("载入主窗口..."), bottomRight, Qt::black);

	//SEEAS w;
	Indentity h;
	//载入画面悬停
	for (int i=0; i<1000; i++){
		splash.repaint();
	}
	
	splash.showMessage(QObject::tr("载入模块..."), bottomRight, Qt::black);
	//载入画面悬停
	for (int i=0; i<1000; i++){
	splash.repaint();
	}

	h.show();
	//w.show();

	splash.finish(&h);
	return a.exec();
}
