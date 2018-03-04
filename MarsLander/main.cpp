#include <QApplication>
#include "audio.h"
#include "scene.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Scene scene;
    Audio audio;

    //QObject::connect(&w, SIGNAL(playThruster()), &audio, SLOT(playThruster()));

    return app.exec();
}
