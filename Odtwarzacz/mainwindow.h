#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
//#include <QVideoWidget>
#include <QSlider>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QMediaPlayer* mediaPlayer;
    QSlider* currentContentSlider;
    QLabel* currentContentDuration;

    Ui::MainWindow *ui;

    void init();

};

#endif // MAINWINDOW_H
