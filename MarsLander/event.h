#ifndef EVENT_H
#define EVENT_H

#include <QObject>
#include <QKeyEvent>

class Event : public MessageBus
{
    Q_OBJECT
public:
    Event();
    void keyPressEvent(QKeyEvent * event);

private:
    MessageBus *msgBus;
};

#endif // EVENT_H
