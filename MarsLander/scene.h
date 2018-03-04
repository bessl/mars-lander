#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QKeyEvent>
#include "vessel.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    Scene();
    void keyPressEvent(QKeyEvent * event);
    void displaySetup();

private:
    QGraphicsView *view;
    QGraphicsTextItem *displayFuel;
    QGraphicsTextItem *displayFuelValue;
    QGraphicsTextItem *displayAltitude;
    QGraphicsTextItem *displayAltitudeValue;

signals:

public slots:
};

#endif // SCENE_H
