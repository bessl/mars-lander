#include <QApplication>
#include "audio.h"
#include "scene.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Scene scene;
    Audio audio;

    QObject::connect(&scene, SIGNAL(playThrusterSound()), &audio, SLOT(playThruster()));
    return app.exec();
}
