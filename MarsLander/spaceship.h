#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <QObject>

class Spaceship : public QObject
{
    Q_OBJECT
public:
    explicit Spaceship(QObject *parent = nullptr);

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
