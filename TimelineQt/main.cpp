#include "TimelineQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TimelineQt w;
	w.show();
	return a.exec();
}
