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

signals:

public slots:
};

#endif // VESSEL_H
