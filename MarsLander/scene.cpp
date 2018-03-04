#include "scene.h"
#include <QGraphicsTextItem>
#include <QKeyEvent>
#include <QDebug>

Scene::Scene()
{
    setBackgroundBrush(Qt::black);
    setSceneRect(0, 0, 800, 600);
    view = new QGraphicsView(this);
    view->setWindowTitle("Mars Lander");
    view->setScene(this);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800, 600);
    view->show();

    displayFuel = new QGraphicsTextItem;
    displayFuel->setPos(10, 10);
    displayFuel->setDefaultTextColor(QColor(255, 255, 255));
    addItem(displayFuel);

    displayFuelValue = new QGraphicsTextItem;
    displayFuelValue->setPos(70, 10);
    displayFuelValue->setDefaultTextColor(QColor(255, 255, 255));
    addItem(displayFuelValue);

    displayAltitude = new QGraphicsTextItem;
    displayAltitude->setPos(10, 30);
    displayAltitude->setDefaultTextColor(QColor(255, 255, 255));
    addItem(displayAltitude);

    displayAltitudeValue = new QGraphicsTextItem;
    displayAltitudeValue->setPos(70, 30);
    displayAltitudeValue->setDefaultTextColor(QColor(255, 255, 255));
    addItem(displayAltitudeValue);

    displaySetup();

    vessel = new Vessel;
    addItem(vessel);

    QObject::connect(vessel, SIGNAL(updateDisplayAltitude(int)), this, SLOT(updateDisplayAltitude(int)));
    QObject::connect(vessel, SIGNAL(gameOver()), this, SLOT(gameOver()));
}


void Scene::displaySetup() {
    displayFuel->setPlainText("Fuel ");
    displayFuelValue->setPlainText("100");
    displayAltitude->setPlainText("Altitude ");
    displayAltitudeValue->setPlainText("23");
}


void Scene::updateDisplayAltitude(int value)
{
    displayAltitudeValue->setPlainText(QString::number(value));
}

void Scene::gameOver()
{
    // TODO: Game over screen.
    qDebug() << "game over";
}

void Scene::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left || event->key() == 65){
        qDebug() << "left";
        emit playThrusterSound();
    }
    else if (event->key() == Qt::Key_Right || event->key() == 68){
        qDebug() << "right";
        emit playThrusterSound();
    }
    else if (event->key() == Qt::Key_Up || event->key() == 87){
        qDebug() << "up";
        emit playThrusterSound();
    }
    else if (event->key() == Qt::Key_Down || event->key() == 83){
        qDebug() << "down";
        emit playThrusterSound();
    }
}
