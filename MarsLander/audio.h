#ifndef AUDIO_H
#define AUDIO_H

#include <QObject>

class Audio : public QObject
{
    Q_OBJECT
public:
    explicit Audio(QObject *parent = nullptr);

signals:

public slots:
    static void playThruster();
    static void playExplosion();
};

#endif // AUDIO_H
