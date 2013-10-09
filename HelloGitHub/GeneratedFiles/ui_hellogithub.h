/********************************************************************************
** Form generated from reading UI file 'hellogithub.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOGITHUB_H
#define UI_HELLOGITHUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloGitHubClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloGitHubClass)
    {
        if (HelloGitHubClass->objectName().isEmpty())
            HelloGitHubClass->setObjectName(QStringLiteral("HelloGitHubClass"));
        HelloGitHubClass->resize(266, 153);
        centralWidget = new QWidget(HelloGitHubClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        HelloGitHubClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloGitHubClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 266, 21));
        HelloGitHubClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloGitHubClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloGitHubClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloGitHubClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloGitHubClass->setStatusBar(statusBar);

        retranslateUi(HelloGitHubClass);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(HelloGitHubClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloGitHubClass)
    {
        HelloGitHubClass->setWindowTitle(QApplication::translate("HelloGitHubClass", "HelloGitHub", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloGitHubClass: public Ui_HelloGitHubClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOGITHUB_H
