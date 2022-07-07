/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *text_view;
    QPushButton *Button_pow;
    QPushButton *Button_cos;
    QPushButton *Button_1;
    QPushButton *Button_sin;
    QPushButton *Button_asin;
    QPushButton *Button_acos;
    QPushButton *Button_4;
    QPushButton *Button_tan;
    QPushButton *Button_ln;
    QPushButton *Button_7;
    QPushButton *Button_atan;
    QPushButton *Button_0;
    QPushButton *Button_log;
    QPushButton *Button_div;
    QPushButton *Button_3;
    QPushButton *Button_x;
    QPushButton *Button_6;
    QPushButton *Button_sub;
    QPushButton *Button_9;
    QPushButton *Button_sum;
    QPushButton *Button_r_parenthese;
    QPushButton *Button_l_parenthese;
    QPushButton *Button_AC;
    QPushButton *Button_5;
    QPushButton *Button_8;
    QPushButton *Button_2;
    QPushButton *Button_sqrt;
    QPushButton *Button_point;
    QPushButton *Button_res;
    QPushButton *Button_unar;
    QPushButton *Button_mod;
    QPushButton *Button_mul;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(371, 469);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text_view = new QLabel(centralwidget);
        text_view->setObjectName(QString::fromUtf8("text_view"));
        text_view->setGeometry(QRect(0, 20, 361, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        text_view->setFont(font);
        text_view->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        Button_pow = new QPushButton(centralwidget);
        Button_pow->setObjectName(QString::fromUtf8("Button_pow"));
        Button_pow->setGeometry(QRect(185, 100, 61, 61));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setWeight(50);
        Button_pow->setFont(font1);
        Button_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_cos = new QPushButton(centralwidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        Button_cos->setGeometry(QRect(2, 161, 61, 61));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        Button_cos->setFont(font2);
        Button_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(124, 161, 61, 61));
        Button_1->setFont(font1);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_sin = new QPushButton(centralwidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        Button_sin->setGeometry(QRect(63, 161, 61, 61));
        Button_sin->setFont(font1);
        Button_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_asin = new QPushButton(centralwidget);
        Button_asin->setObjectName(QString::fromUtf8("Button_asin"));
        Button_asin->setGeometry(QRect(63, 222, 61, 61));
        Button_asin->setFont(font1);
        Button_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_acos = new QPushButton(centralwidget);
        Button_acos->setObjectName(QString::fromUtf8("Button_acos"));
        Button_acos->setGeometry(QRect(2, 222, 61, 61));
        Button_acos->setFont(font1);
        Button_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(124, 222, 61, 61));
        Button_4->setFont(font1);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_tan = new QPushButton(centralwidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        Button_tan->setGeometry(QRect(2, 283, 61, 61));
        Button_tan->setFont(font1);
        Button_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_ln = new QPushButton(centralwidget);
        Button_ln->setObjectName(QString::fromUtf8("Button_ln"));
        Button_ln->setGeometry(QRect(63, 283, 61, 61));
        Button_ln->setFont(font1);
        Button_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(124, 283, 61, 61));
        Button_7->setFont(font1);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_atan = new QPushButton(centralwidget);
        Button_atan->setObjectName(QString::fromUtf8("Button_atan"));
        Button_atan->setGeometry(QRect(2, 344, 61, 61));
        Button_atan->setFont(font1);
        Button_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(124, 344, 183, 61));
        Button_0->setFont(font1);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_log = new QPushButton(centralwidget);
        Button_log->setObjectName(QString::fromUtf8("Button_log"));
        Button_log->setGeometry(QRect(63, 344, 61, 61));
        Button_log->setFont(font1);
        Button_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_div = new QPushButton(centralwidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        Button_div->setGeometry(QRect(307, 100, 61, 61));
        Button_div->setFont(font1);
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(246, 161, 61, 61));
        Button_3->setFont(font1);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_x = new QPushButton(centralwidget);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        Button_x->setGeometry(QRect(307, 161, 61, 61));
        Button_x->setFont(font1);
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(246, 222, 61, 61));
        Button_6->setFont(font1);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_sub = new QPushButton(centralwidget);
        Button_sub->setObjectName(QString::fromUtf8("Button_sub"));
        Button_sub->setGeometry(QRect(307, 222, 61, 61));
        Button_sub->setFont(font1);
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(246, 283, 61, 61));
        Button_9->setFont(font1);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_sum = new QPushButton(centralwidget);
        Button_sum->setObjectName(QString::fromUtf8("Button_sum"));
        Button_sum->setGeometry(QRect(307, 283, 61, 61));
        Button_sum->setFont(font1);
        Button_r_parenthese = new QPushButton(centralwidget);
        Button_r_parenthese->setObjectName(QString::fromUtf8("Button_r_parenthese"));
        Button_r_parenthese->setGeometry(QRect(63, 405, 61, 61));
        Button_r_parenthese->setFont(font1);
        Button_l_parenthese = new QPushButton(centralwidget);
        Button_l_parenthese->setObjectName(QString::fromUtf8("Button_l_parenthese"));
        Button_l_parenthese->setGeometry(QRect(2, 405, 61, 61));
        Button_l_parenthese->setFont(font1);
        Button_AC = new QPushButton(centralwidget);
        Button_AC->setObjectName(QString::fromUtf8("Button_AC"));
        Button_AC->setGeometry(QRect(2, 100, 61, 61));
        Button_AC->setFont(font1);
        Button_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(185, 222, 61, 61));
        Button_5->setFont(font1);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(185, 283, 61, 61));
        Button_8->setFont(font1);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(185, 161, 61, 61));
        Button_2->setFont(font1);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_sqrt = new QPushButton(centralwidget);
        Button_sqrt->setObjectName(QString::fromUtf8("Button_sqrt"));
        Button_sqrt->setGeometry(QRect(124, 100, 61, 61));
        Button_sqrt->setFont(font1);
        Button_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_point = new QPushButton(centralwidget);
        Button_point->setObjectName(QString::fromUtf8("Button_point"));
        Button_point->setGeometry(QRect(307, 344, 61, 61));
        Button_point->setFont(font1);
        Button_res = new QPushButton(centralwidget);
        Button_res->setObjectName(QString::fromUtf8("Button_res"));
        Button_res->setGeometry(QRect(307, 405, 61, 61));
        Button_res->setFont(font1);
        Button_res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button_unar = new QPushButton(centralwidget);
        Button_unar->setObjectName(QString::fromUtf8("Button_unar"));
        Button_unar->setGeometry(QRect(124, 405, 183, 61));
        Button_unar->setFont(font1);
        Button_unar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        Button_mod = new QPushButton(centralwidget);
        Button_mod->setObjectName(QString::fromUtf8("Button_mod"));
        Button_mod->setGeometry(QRect(63, 100, 61, 61));
        Button_mod->setFont(font1);
        Button_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Button_mul = new QPushButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setGeometry(QRect(246, 100, 61, 61));
        Button_mul->setFont(font1);
        Button_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        text_view->setText(QString());
        Button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        Button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        Button_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        Button_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        Button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        Button_div->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}", nullptr));
        Button_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_x->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}", nullptr));
        Button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_sub->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}", nullptr));
        Button_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_sum->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}", nullptr));
        Button_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button_r_parenthese->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}", nullptr));
        Button_r_parenthese->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        Button_l_parenthese->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}", nullptr));
        Button_l_parenthese->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        Button_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        Button_point->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}", nullptr));
        Button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_unar->setText(QString());
        Button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        Button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
