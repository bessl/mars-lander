#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPolygon>


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


    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    QVector<QPointF> points;
    points << QPoint(0, 590) << QPoint(800, 590);
    QGraphicsPolygonItem * polygon;
    polygon = new QGraphicsPolygonItem(QPolygonF(points));
    polygon->setPen(QColor(255, 255, 255));
    scene->addItem(polygon);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setFixedSize(800, 600);
    ui->graphicsView->show();

    game = new Game();
    updateDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateDisplay()
{
    ui->label_input_fuel->setText(QString::number(game->spaceship->fuel()));
    ui->label_input_alt->setText(QString::number(game->spaceship->altitude()));
    ui->label_input_x ->setText(QString::number(game->spaceship->x()));
    ui->label_input_y->setText(QString::number(game->spaceship->y()));
}
