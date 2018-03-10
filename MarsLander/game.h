#ifndef GAME_H
#define GAME_H

#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = nullptr); 
    static unsigned int randInt(unsigned int, unsigned int);
signals:

public slots:
};

#endif // GAME_H
