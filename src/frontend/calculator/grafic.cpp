#include "grafic.h"
#include "ui_grafic.h"
#include "mainwindow.h"

grafic::grafic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grafic)
{
    ui->setupUi(this);

    h = 0.5;
    xBegin = 0;
    xEnd = 10;

    ui->widget->xAxis->setRange(0,10);
    ui->widget->yAxis->setRange(0, 10);

    N = (xEnd - xBegin) / h + 2;

    for(X = xBegin; X <= xEnd; X += h)
    {
        x.push_back(X);
        y.push_back(X+X);
    }


    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));
    ui->widget->clearGraphs();
    time = 0;
    timer->start(20);
    X = xBegin;
    x.clear();
    y.clear();
}

grafic::~grafic()
{
    delete ui;
}

void grafic::TimerSlot() {
if(time <= 20 * N)
{
    if(X <= xEnd)
    {
        x.push_back(X);
        y.push_back(X*X);
        X += h;
    }
    time += 20;
} else
{
    time = 0;
    timer->stop();
}

ui->widget->addGraph();
ui->widget->graph(0)->addData(x,y);
ui->widget->replot();
}

int grafic::CalcYxis()
{
    for (int i = 0; i < 10; i++) {

    }
}
