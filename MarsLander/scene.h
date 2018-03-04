#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>
#include "vessel.h"
#include "audio.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    Scene();
    void keyPressEvent(QKeyEvent * event);
    void displaySetup();

private:
    Vessel *vessel;
    Audio *audio;
    QGraphicsView *view;
    QGraphicsTextItem *displayFuel;
    QGraphicsTextItem *displayFuelValue;
    QGraphicsTextItem *displayAltitude;
    QGraphicsTextItem *displayAltitudeValue;

signals:
    void playThrusterSound();
    void moveVesselUp(int speed);

public slots:
    void updateDisplayAltitude(int value);
    void gameOver();
};

#endif // SCENE_H
