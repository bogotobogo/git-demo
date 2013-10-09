#ifndef HELLOGITHUB_H
#define HELLOGITHUB_H

#include <QtWidgets/QMainWindow>
#include "ui_hellogithub.h"

class HelloGitHub : public QMainWindow
{
	Q_OBJECT

public:
	HelloGitHub(QWidget *parent = 0);
	~HelloGitHub();

private:
	Ui::HelloGitHubClass ui;
};

#endif // HELLOGITHUB_H
