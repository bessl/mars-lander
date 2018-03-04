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

signals:
    void updateDisplayAltitude(int value);

public slots:
    void move();
};

#endif // VESSEL_H
