#include "spaceship.h"

Spaceship::Spaceship(QObject *parent) : QObject(parent)
{
    m_fuel = 99;
    m_altitude = 0;
    m_x = 0;
    m_y = 0;
}
