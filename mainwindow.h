#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <breakout.h>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Breakout *w;

};
#endif // MAINWINDOW_H
