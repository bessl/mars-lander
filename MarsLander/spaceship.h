#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <QObject>
#include <QGraphicsRectItem>

class Spaceship: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Spaceship();

    int fuel() const;
    void setFuel(int fuel);

    int altitude() const;
    void setAltitude(int altitude);

    int x() const;
    void setX(int x);

    int y() const;
    void setY(int y);

private:
    int m_fuel;
    int m_altitude;
    int m_x;
    int m_y;

signals:

public slots:
};

#endif // SPACESHIP_H
