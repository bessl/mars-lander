#include "vessel.h"
#include <QPen>

Vessel::Vessel(QObject *parent) : QObject(parent), my_fuel {100}
{
    setPos(400, 40);
    setRect(0, 0, 10, 30);
    setPen(QColor(255, 255, 255));
}
