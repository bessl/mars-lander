#include "scene.h"
#include <QGraphicsTextItem>
#include <QKeyEvent>
#include <QDebug>
#include <iostream>
#include "game.h"

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
    generateWorld();

    vessel = new Vessel;
    addItem(vessel);

    audio = new Audio;

    QObject::connect(this, SIGNAL(playThrusterSound()), audio, SLOT(playThruster()));
    QObject::connect(this, SIGNAL(moveVesselUp(int)), vessel, SLOT(moveUp(int)));
    QObject::connect(vessel, SIGNAL(updateDisplayAltitude(int)), this, SLOT(updateDisplayAltitude(int)));
    QObject::connect(vessel, SIGNAL(gameOver()), this, SLOT(gameOver()));
}


void Scene::displaySetup() {
    displayFuel->setPlainText("Fuel ");
    displayFuelValue->setPlainText("100");
    displayAltitude->setPlainText("Altitude ");
    displayAltitudeValue->setPlainText("23");
}

void Scene::generateWorld()
{
    double rad = 1;
    for (int i=0; i<=Game::randInt(50, 300); i++) {
        this->addEllipse(Game::randInt(10, 790)-rad, Game::randInt(10, 300)-rad, rad*2.0, rad*2.0, QPen(), QBrush(Qt::white));
    }
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
        //emit playThrusterSound();
    }
    else if (event->key() == Qt::Key_Right || event->key() == 68){
        qDebug() << "right";
        //emit playThrusterSound();
    }
    else if (event->key() == Qt::Key_Up || event->key() == 87){
        qDebug() << "up";
        emit moveVesselUp(10);
        //emit playThrusterSound();
    }
}
