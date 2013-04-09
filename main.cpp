#include "seeas.h"
#include "indentity.h"
#include <QtGui/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//���ı���
	QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    //�������
	QPixmap pixmap(":/Resources/splash1.jpg");
	QSplashScreen splash(pixmap);
	splash.show();
	
	Qt::Alignment bottomRight = Qt::AlignRight | Qt::AlignBottom;		//���ÿ�ʼ������ʾ���ֵĶ���
	splash.showMessage(QObject::tr("����������..."), bottomRight, Qt::black);

	//SEEAS w;
	Indentity h;
	//���뻭����ͣ
	for (int i=0; i<1000; i++){
		splash.repaint();
	}
	
	splash.showMessage(QObject::tr("����ģ��..."), bottomRight, Qt::black);
	//���뻭����ͣ
	for (int i=0; i<1000; i++){
	splash.repaint();
	}

	h.show();
	//w.show();

	splash.finish(&h);
	return a.exec();
}
