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
