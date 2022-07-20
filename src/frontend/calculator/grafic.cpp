#include "grafic.h"
#include "ui_grafic.h"
#include "mainwindow.h"

grafic::grafic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::grafic)
{
    ui->setupUi(this);


}

grafic::~grafic()
{
    delete ui;
}

void grafic::MakeGraf(QString str_test) {
    QString str_buf = str_test;
    h = 0.1;
    xBegin = 0;
    xEnd = 10;
    double yaxis_minus = 0;
    double yaxis_plus = 0;
    for(X = xBegin; X <= xEnd; X += h)
    {
        str_buf.replace("x", QString::number(X));
        QByteArray test = str_buf.toLocal8Bit();
        const char *str = test.data();
        lexems_t *buf = NULL;
        lexems_t *res_str  = parcer(str);
        transpose_struct(&buf, res_str);
        res_str = OPN(buf);
        if(!res_str)
        {
            EXIT_FAILURE;
        }
        else
        {
            x.push_back(X);
            y.push_back(res_str->value);
            if (res_str->value < 0) {
                if(res_str->value < yaxis_minus)
                yaxis_minus = res_str->value;
            } else {
                if(res_str->value > yaxis_plus)
                yaxis_plus = res_str->value;
            }
        }
        str_buf = str_test;
    }

    ui->widget->xAxis->setRange(0,10);
    ui->widget->yAxis->setRange(round(yaxis_minus), round(yaxis_plus));

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}
