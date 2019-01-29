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


private slots:
    void positionChanged(qint64 position);


private:
    QMediaPlayer* mediaPlayer;
    QSlider* currentContentSlider;
    QLabel* currentContentDuration;

    QVideoWidget* videoWidget;

    Ui::MainWindow *ui;

    void init();
    void initLayout();
    void initSignalsAndSlots();
    void updateDurationInfo();
};

#endif // MAINWINDOW_H
