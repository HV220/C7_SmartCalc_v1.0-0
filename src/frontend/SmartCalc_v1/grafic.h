#ifndef GRAFIC_H
#define GRAFIC_H

#include <QDialog>
#include <QVector>

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

private:
    Ui::grafic *ui;
    double xBegin,xEnd, h, X;
    int N;

    QVector<double> x,y;
};

#endif // GRAFIC_H
