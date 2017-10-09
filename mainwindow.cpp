#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_Compute_clicked()
{
    EulersMethod    euMethod;
    euMethod.setBeginConditions(ui->startSpeed->value(),
                                ui->startTime->value(),
                                ui->endTime->value(),
                                ui->step->value());
    euMethod.setModelParameters(ui->radius->value(),
                                ui->mass->value());
    euMethod.differentiation();
    ui->Plot->draw(euMethod.getSolve());
}
