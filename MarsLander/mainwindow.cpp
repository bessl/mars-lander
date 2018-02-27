#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFontDatabase::addApplicationFont(":/res/Px437_IBM_ISO9.ttf");
    QFont font("PX437 IBM ISO9", 13, 1);

    ui->label_alt->setFont(font);
    ui->label_fuel->setFont(font);
    ui->label_x->setFont(font);
    ui->label_y->setFont(font);

    ui->label_input_alt->setFont(font);
    ui->label_input_fuel->setFont(font);
    ui->label_input_x->setFont(font);
    ui->label_input_y->setFont(font);

}

MainWindow::~MainWindow()
{
    delete ui;
}
