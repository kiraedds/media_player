#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QSlider>
#include <QLabel>
#include <QSoundEffect>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_actionOpen_triggered();
    void on_actionPlay_triggered();
    void on_actionPause_triggered();
    void positionChanged(qint64 position);
    void on_actionMute_toggled(bool arg1);

private:
    QMediaPlayer* mediaPlayer;
    QSlider* currentContentSlider;
    QSlider* currentVolumeSlider;
    QLabel* currentContentDuration;
    QSoundEffect *sound ;
    QVideoWidget* videoWidget;

    Ui::MainWindow *ui;

    void init();
    void initLayout();
    void initSignalsAndSlots();
    void updateDurationInfo();
};

#endif // MAINWINDOW_H
