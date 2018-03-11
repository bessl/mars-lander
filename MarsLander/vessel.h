#ifndef VESSEL_H
#define VESSEL_H

#include <QObject>
#include <QGraphicsRectItem>

class Vessel : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit Vessel(QObject *parent = nullptr);
    int get_fuel();

private:
    int my_fuel;
    int my_altitude;
    int my_y_speed;
    unsigned const int thrust_boost_qty = 4;

signals:
    void updateDisplayAltitude(int value);
    void updateDisplayFuel(int value);
    void gameOver();

public slots:
    void move();
    void moveUp();
};

#endif // VESSEL_H
