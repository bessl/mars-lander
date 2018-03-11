#include "vessel.h"
#include <QPen>
#include <QDebug>
#include <QTimer>

Vessel::Vessel(QObject *parent) : QObject(parent), my_fuel {100}, my_altitude {100}, my_y_speed {1}, my_thruster_up {0}
{
    setPos(400, 40);
    setRect(0, 0, 10, 30);
    setPen(QColor(255, 255, 255));

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(24);

}

void Vessel::move() {
    if (my_thruster_up > 0) {
        setPos(x(), y() - 10);
        my_thruster_up--;
        return;
    }

    int fake_altitude = 560 - y();
    if (fake_altitude <= 0) {
        gameOver();
        return;
    }

    emit updateDisplayAltitude(fake_altitude);
    emit updateDisplayFuel(my_fuel);
    setPos(x(), y() + my_y_speed);
}

void Vessel::moveUp()
{
    my_thruster_up = 2;
    my_fuel -= thrust_boost_qty;
}
