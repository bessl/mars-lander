#ifndef MESSAGEBUS_H
#define MESSAGEBUS_H

#include <QObject>
#include <QString>

class MessageBus : public QObject
{
    Q_OBJECT
public:
    explicit MessageBus(QObject *parent = nullptr);
    void postMessage(QString);
};

#endif // MESSAGEBUS_H
