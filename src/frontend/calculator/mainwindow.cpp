#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "grafic.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     connect(ui->Button_0,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_1,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_2,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_3,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_4,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_5,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_6,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_7,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_8,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_9,SIGNAL(clicked()), this, SLOT(digits_numbers()));
     connect(ui->Button_mod,SIGNAL(clicked()), this, SLOT(operations()));
     connect(ui->Button_sqrt,SIGNAL(clicked()), this, SLOT(operations()));
     connect(ui->Button_pow,SIGNAL(clicked()), this, SLOT(operations()));
     connect(ui->Button_l_parenthese,SIGNAL(clicked()), this, SLOT(operations()));
     connect(ui->Button_r_parenthese,SIGNAL(clicked()), this, SLOT(operations()));
     connect(ui->Button_sum,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_sub,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_div,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_mul,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_sin,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_asin,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_cos,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_acos,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_tan,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_atan,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_ln,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_log,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_x,SIGNAL(clicked()), this, SLOT(math_operations()));
     connect(ui->Button_res,SIGNAL(clicked()), this, SLOT(on_Button_res_clicked()));
     connect(ui->Button_AC,SIGNAL(clicked()), this, SLOT(on_Button_AC_clicked()));
     ui->Button_res->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    ui->text_view->setText(ui->text_view->text() + button->text());
}

void MainWindow::on_Button_point_clicked()
{
        ui->text_view->setText(ui->text_view->text() + ".");
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    if(button->text() == "mod") {
        ui->text_view->setText(ui->text_view->text() + "mod");
    } else if(button->text() == "√") {
        ui->text_view->setText(ui->text_view->text() + "sqrt");
    } else if(button->text() == "^") {
        ui->text_view->setText(ui->text_view->text() + "^");
    } else if(button->text() == "(") {
        ui->text_view->setText(ui->text_view->text() + "(");
    } else if(button->text() == ")") {
        ui->text_view->setText(ui->text_view->text() + ")");
    }
}

void MainWindow::on_Button_AC_clicked()
{
    ui->text_view->clear();
}

void MainWindow::on_Button_res_clicked()
{
     QPushButton *button = (QPushButton *)sender();
        if(ui->Button_res->isChecked()) {
            if(ui->text_view->text().contains("x")) {
            graf = new grafic(this);
            graf->show();
            graf->MakeGraf(ui->text_view->text());
            } else {
                    QByteArray test = ui->text_view->text().toLocal8Bit();
                    const char *str = test.data();
                    lexems_t *buf = NULL;
                    lexems_t *res_str  = parcer(str);
                    transpose_struct(&buf, res_str);
                    res_str = OPN(buf);
                    if(!res_str)ui->text_view->setText("INVALID ERROR");
                    else ui->text_view->setText(QString::number(res_str->value, 'g', 15));
            }
        button->setChecked(false);
        }
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    if(button->text() == "+") {
        ui->text_view->setText(ui->text_view->text() + "+");
    } else if(button->text() == "-") {
        ui->text_view->setText(ui->text_view->text() + "-");
    } else if(button->text() == "*") {
        ui->text_view->setText(ui->text_view->text() + "*");
    } else if(button->text() == "÷") {
        ui->text_view->setText(ui->text_view->text() + "/");
    } else if(button->text() == "x") {
        ui->text_view->setText(ui->text_view->text() + "x");
    } else if(button->text() == "sin") {
            ui->text_view->setText(ui->text_view->text() + "sin(");
    } else if(button->text() == "asin") {
        ui->text_view->setText(ui->text_view->text() + "asin(");
    } else if(button->text() == "cos") {
        ui->text_view->setText(ui->text_view->text() + "cos(");
    } else if(button->text() == "acos") {
        ui->text_view->setText(ui->text_view->text() + "acos(");
    } else if(button->text() == "tan") {
        ui->text_view->setText(ui->text_view->text() + "tan(");
    } else if(button->text() == "atan") {
        ui->text_view->setText(ui->text_view->text() + "atan(");
    } else if(button->text() == "ln") {
        ui->text_view->setText(ui->text_view->text() + "ln(");
    } else if(button->text() == "log") {
        ui->text_view->setText(ui->text_view->text() + "log(");
    }
}

void MainWindow::on_Button_unar_clicked()
{

}
