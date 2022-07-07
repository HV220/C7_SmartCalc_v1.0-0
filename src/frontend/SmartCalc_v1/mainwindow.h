#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

   public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   private:
    Ui::MainWindow *ui;
   private slots:
    void digits_numbers();
    void on_Button_point_clicked();
    void operations();
    void on_Button_AC_clicked();
    void on_Button_res_clicked();
    void math_operations();
};
#endif  // MAINWINDOW_H
