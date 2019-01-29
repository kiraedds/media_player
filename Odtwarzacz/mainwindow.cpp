#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTime>
#include <QBoxLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   this->init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    ui->setupUi(this);
    this->mediaPlayer = new QMediaPlayer();
    this->currentContentSlider = new QSlider();
    this->currentContentDuration = new QLabel("00:00/00:00");
}

