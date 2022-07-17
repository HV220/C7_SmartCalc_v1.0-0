#include "grafic.h"
#include "ui_grafic.h"
#include "mainwindow.h"

grafic::grafic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grafic)
{
    ui->setupUi(this);

    h = 0.1;
    xBegin = -3;
    xEnd = 3 + h;

    ui->widget->xAxis->setRange(-4,4);
    ui->widget->yAxis->setRange(0,9);

    N = (xEnd - xBegin) / h + 2;

    for (X = xBegin; X <= xEnd; X += h) {
        x.push_back(X);
        y.push_back(X*X);
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}

grafic::~grafic()
{
    delete ui;
}
