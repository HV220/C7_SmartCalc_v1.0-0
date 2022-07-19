#ifndef GRAFIC_H
#define GRAFIC_H

#include <QDialog>
#include <QVector>
#include <QTimer>

extern "C" {
#include "../../backend/s21_smart_calc.h"
}

namespace Ui {
class grafic;
}

class grafic : public QDialog
{
    Q_OBJECT

public:
    explicit grafic(QWidget *parent = nullptr);
    ~grafic();

private slots:
    void TimerSlot();
    int CalcYxis();

private:
    Ui::grafic *ui;
    double xBegin, xEnd, h, X;
    int N;

    QVector<double> x, y;
    QTimer *timer;
    int time;
};

#endif // GRAFIC_H
