#include "messagebus.h"
#include <QDebug>

MessageBus::MessageBus(QObject *parent) : QObject(parent)
{

}

void MessageBus::postMessage(QString msg)
{
    qDebug() << msg;
}
