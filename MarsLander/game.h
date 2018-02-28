#ifndef GAME_H
#define GAME_H

#include <QObject>
#include "spaceship.h"

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = nullptr);

    Spaceship * spaceship;
    void updateDisplay();

signals:

public slots:
};

#endif // GAME_H
