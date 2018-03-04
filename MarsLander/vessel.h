#ifndef VESSEL_H
#define VESSEL_H

#include <QObject>
#include <QGraphicsRectItem>

class Vessel : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit Vessel(QObject *parent = nullptr);

private:
    int my_fuel;
    int my_altitude;
    int my_y_speed;

signals:
    void updateDisplayAltitude(int value);
    void gameOver();

public slots:
    void move();
    void moveUp(int speed);
};

#endif // VESSEL_H
