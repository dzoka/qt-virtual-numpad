// 2016 Dzoka

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keyemitter.h"

extern KeyEmitter keyEmitter;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonKey0_clicked()
{
    keyEmitter.emitKey(Qt::Key_0);
}

void MainWindow::on_pushButtonKey1_clicked()
{
    keyEmitter.emitKey(Qt::Key_1);
}

void MainWindow::on_pushButtonKey2_clicked()
{
    keyEmitter.emitKey(Qt::Key_2);
}

void MainWindow::on_pushButtonKey3_clicked()
{
    keyEmitter.emitKey(Qt::Key_3);
}

void MainWindow::on_pushButtonKey4_clicked()
{
    keyEmitter.emitKey(Qt::Key_4);
}

void MainWindow::on_pushButtonKey5_clicked()
{
    keyEmitter.emitKey(Qt::Key_5);
}

void MainWindow::on_pushButtonKey6_clicked()
{
    keyEmitter.emitKey(Qt::Key_6);
}

void MainWindow::on_pushButtonKey7_clicked()
{
    keyEmitter.emitKey(Qt::Key_7);
}

void MainWindow::on_pushButtonKey8_clicked()
{
    keyEmitter.emitKey(Qt::Key_8);
}

void MainWindow::on_pushButtonKey9_clicked()
{
    keyEmitter.emitKey(Qt::Key_9);
}

void MainWindow::on_pushButtonKeyDot_clicked()
{
    keyEmitter.emitKey(Qt::Key_Comma);
}

void MainWindow::on_pushButtonKeyEnter_clicked()
{
    keyEmitter.emitKey(Qt::Key_Tab);
}

void MainWindow::on_pushButtonKeyBack_clicked()
{
    keyEmitter.emitKey(Qt::Key_Backspace);
}
