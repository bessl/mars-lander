#include "game.h"

Game::Game(QObject *parent) : QObject(parent)
{

}

unsigned int Game::randInt(unsigned int min, unsigned int max)
{
    return qrand() % ((max + 1) - min) + min;
}
