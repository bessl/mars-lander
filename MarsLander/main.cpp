#include "mainwindow.h"
#include "audio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();    

    Audio audio;

    QObject::connect(&w, SIGNAL(playThruster()), &audio, SLOT(playThruster()));

    return a.exec();
}
