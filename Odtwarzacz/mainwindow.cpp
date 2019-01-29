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
    this->ui->setupUi(this);
    this->videoWidget = new QVideoWidget();
    this->mediaPlayer = new QMediaPlayer();
    this->currentContentSlider = new QSlider();
    this->currentContentDuration = new QLabel("00:00/00:00");

    this->mediaPlayer->setVideoOutput(this->videoWidget);
    this->currentContentSlider->setOrientation(Qt::Horizontal);

    this->initLayout();

}

void MainWindow::initLayout()
{
    QBoxLayout* displayLayout = new QHBoxLayout;
    displayLayout->addWidget(videoWidget);

    QHBoxLayout* hLayout = new QHBoxLayout();
    hLayout->addWidget(this->currentContentSlider);
    hLayout->addWidget(this->currentContentDuration);

    QBoxLayout* boxLayout = new QVBoxLayout();
    boxLayout->addLayout(displayLayout);
    boxLayout->addLayout(hLayout);

    this->ui->centralWidget->setLayout(boxLayout);
}


