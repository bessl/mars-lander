#include "spaceship.h"

Spaceship::Spaceship(QObject *parent) : QObject(parent)
{
    m_fuel = 99;
    m_altitude = 100;
    m_x = 200;
    m_y = 10;
}

int Spaceship::fuel() const
{
    return m_fuel;
}

void Spaceship::setFuel(int fuel)
{
    m_fuel = fuel;
}

int Spaceship::altitude() const
{
    return m_altitude;
}

void Spaceship::setAltitude(int altitude)
{
    m_altitude = altitude;
}

int Spaceship::x() const
{
    return m_x;
}

void Spaceship::setX(int x)
{
    m_x = x;
}

int Spaceship::y() const
{
    return m_y;
}

void Spaceship::setY(int y)
{
    m_y = y;
}
