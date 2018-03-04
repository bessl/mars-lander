#include "audio.h"
#include <QSound>

Audio::Audio(QObject *parent) : QObject(parent)
{

}

void Audio::playThruster()
{
    QSound::play(":/res/thruster.wav");
}
