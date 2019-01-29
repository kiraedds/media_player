#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
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

    QVideoWidget* videoWidget;

    Ui::MainWindow *ui;

    void init();
    void initLayout();

};

#endif // MAINWINDOW_H
