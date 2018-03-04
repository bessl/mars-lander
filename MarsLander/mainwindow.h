#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "audio.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateDisplay();
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::MainWindow *ui;
    Game *game;
    Audio *audio;

signals:
    void playThruster();
};

#endif // MAINWINDOW_H
