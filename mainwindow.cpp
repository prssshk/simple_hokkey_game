#include "mainwindow.h"
#include <QApplication>
QMenu *file;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

w=new Breakout(this);
w->flag=0;
setCentralWidget(w);
w->setFocus();
setStyleSheet("background-color:darkcyan");
}

MainWindow::~MainWindow()
{
}

