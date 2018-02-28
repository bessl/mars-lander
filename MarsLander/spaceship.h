#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <QObject>

class Spaceship : public QObject
{
    Q_OBJECT
public:
    explicit Spaceship(QObject *parent = nullptr);
    Spaceship();

private:
    int m_fuel;
    int m_altitude;
    int m_x;
    int m_y;

signals:

public slots:
};

#endif // SPACESHIP_H
