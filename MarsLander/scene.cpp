#include "scene.h"
#include <QGraphicsTextItem>
#include <QKeyEvent>
#include <QDebug>

Scene::Scene()
{
    setBackgroundBrush(Qt::black);
    setSceneRect(0, 0, 800, 600);
    QGraphicsView *view = new QGraphicsView(this); // FIXME: add this in header
    view->setWindowTitle("Mars Lander");
    view->setScene(this);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800, 600);
    view->show();

    displayFuel = new QGraphicsTextItem;
    displayFuel->setPos(10,10);
    displayFuel->setPlainText("Fuel 100");
    displayFuel->setDefaultTextColor(QColor(255, 255, 255));
    addItem(displayFuel);

  //  Vessel vessel;
}


void Scene::keyPressEvent(QKeyEvent *event){
    qDebug() << "keypressed";
//    if (event->key() == Qt::Key_Left || event->key() == 65){
//        qDebug() << "left";
//    }
//    else if (event->key() == Qt::Key_Right || event->key() == 68){
//        qDebug() << "right";
//    }
//    else if (event->key() == Qt::Key_Up || event->key() == 87){
//        qDebug() << "up";
//    }
//    else if (event->key() == Qt::Key_Down || event->key() == 83){
//        qDebug() << "down";;
//    }
}
