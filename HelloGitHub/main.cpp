#include "hellogithub.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HelloGitHub w;
	w.show();
	return a.exec();
}
