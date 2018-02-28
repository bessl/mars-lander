#include "game.h"

Game::Game(QObject *parent) : QObject(parent)
{
    spaceship = new Spaceship();
}
