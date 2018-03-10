#include <QApplication>
#include <QTime>
#include "scene.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    Scene scene;
    return app.exec();
}
