#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFontDatabase::addApplicationFont(":/res/Px437_IBM_ISO9.ttf");
    QFont font("PX437 IBM ISO9", 11, 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}
