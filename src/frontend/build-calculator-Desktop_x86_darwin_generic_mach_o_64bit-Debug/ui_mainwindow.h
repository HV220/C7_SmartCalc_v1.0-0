/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_6;
    QLabel *text_view;
    QGridLayout *gridLayout_9;
    QPushButton *Button_5;
    QPushButton *Button_res;
    QPushButton *Button_tan;
    QPushButton *Button_r_parenthese;
    QPushButton *Button_7;
    QPushButton *Button_2;
    QPushButton *Button_l_parenthese;
    QPushButton *Button_3;
    QPushButton *Button_log;
    QPushButton *Button_point;
    QPushButton *Button_x;
    QPushButton *Button_1;
    QPushButton *Button_6;
    QPushButton *Button_cos;
    QPushButton *Button_mod;
    QPushButton *Button_4;
    QPushButton *Button_sqrt;
    QPushButton *Button_asin;
    QPushButton *Button_8;
    QPushButton *Button_sub;
    QPushButton *Button_sin;
    QPushButton *Button_atan;
    QPushButton *Button_sum;
    QPushButton *Button_0;
    QPushButton *Button_AC;
    QPushButton *Button_acos;
    QPushButton *Button_9;
    QPushButton *Button_mul;
    QPushButton *Button_ln;
    QPushButton *Button_div;
    QPushButton *Button_pow;
    QPushButton *Button_unar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(360, 400));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(0, 0));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 5, 5, 5);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_6->setContentsMargins(0, 0, -1, -1);
        text_view = new QLabel(centralwidget);
        text_view->setObjectName(QString::fromUtf8("text_view"));
        sizePolicy1.setHeightForWidth(text_view->sizePolicy().hasHeightForWidth());
        text_view->setSizePolicy(sizePolicy1);
        text_view->setMinimumSize(QSize(0, 0));
        text_view->setLayoutDirection(Qt::LeftToRight);
        text_view->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));

        verticalLayout_6->addWidget(text_view);


        verticalLayout_11->addLayout(verticalLayout_6);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_9->setContentsMargins(5, 5, 5, 5);
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        sizePolicy1.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy1);
        Button_5->setMinimumSize(QSize(0, 40));
        Button_5->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        Button_5->setFont(font);
        Button_5->setLayoutDirection(Qt::LeftToRight);
        Button_5->setAutoFillBackground(false);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_5, 2, 3, 1, 1);

        Button_res = new QPushButton(centralwidget);
        Button_res->setObjectName(QString::fromUtf8("Button_res"));
        sizePolicy1.setHeightForWidth(Button_res->sizePolicy().hasHeightForWidth());
        Button_res->setSizePolicy(sizePolicy1);
        Button_res->setMinimumSize(QSize(0, 40));
        Button_res->setMaximumSize(QSize(150, 16777215));
        Button_res->setFont(font);
        Button_res->setLayoutDirection(Qt::LeftToRight);
        Button_res->setAutoFillBackground(false);
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

        gridLayout_9->addWidget(Button_res, 5, 5, 1, 1);

        Button_tan = new QPushButton(centralwidget);
        Button_tan->setObjectName(QString::fromUtf8("Button_tan"));
        sizePolicy1.setHeightForWidth(Button_tan->sizePolicy().hasHeightForWidth());
        Button_tan->setSizePolicy(sizePolicy1);
        Button_tan->setMinimumSize(QSize(0, 40));
        Button_tan->setFont(font);
        Button_tan->setLayoutDirection(Qt::LeftToRight);
        Button_tan->setAutoFillBackground(false);
        Button_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_tan, 3, 0, 1, 1);

        Button_r_parenthese = new QPushButton(centralwidget);
        Button_r_parenthese->setObjectName(QString::fromUtf8("Button_r_parenthese"));
        sizePolicy1.setHeightForWidth(Button_r_parenthese->sizePolicy().hasHeightForWidth());
        Button_r_parenthese->setSizePolicy(sizePolicy1);
        Button_r_parenthese->setMinimumSize(QSize(0, 40));
        Button_r_parenthese->setFont(font);
        Button_r_parenthese->setLayoutDirection(Qt::LeftToRight);
        Button_r_parenthese->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_r_parenthese, 5, 1, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        sizePolicy1.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy1);
        Button_7->setMinimumSize(QSize(0, 40));
        Button_7->setMaximumSize(QSize(150, 16777215));
        Button_7->setBaseSize(QSize(0, 0));
        Button_7->setFont(font);
        Button_7->setLayoutDirection(Qt::LeftToRight);
        Button_7->setAutoFillBackground(false);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_7, 3, 2, 1, 1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy1.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy1);
        Button_2->setMinimumSize(QSize(0, 40));
        Button_2->setMaximumSize(QSize(150, 16777215));
        Button_2->setFont(font);
        Button_2->setLayoutDirection(Qt::LeftToRight);
        Button_2->setAutoFillBackground(false);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_2, 1, 3, 1, 1);

        Button_l_parenthese = new QPushButton(centralwidget);
        Button_l_parenthese->setObjectName(QString::fromUtf8("Button_l_parenthese"));
        sizePolicy1.setHeightForWidth(Button_l_parenthese->sizePolicy().hasHeightForWidth());
        Button_l_parenthese->setSizePolicy(sizePolicy1);
        Button_l_parenthese->setMinimumSize(QSize(0, 40));
        Button_l_parenthese->setFont(font);
        Button_l_parenthese->setLayoutDirection(Qt::LeftToRight);
        Button_l_parenthese->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_l_parenthese, 5, 0, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        sizePolicy1.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy1);
        Button_3->setMinimumSize(QSize(0, 40));
        Button_3->setMaximumSize(QSize(150, 16777215));
        Button_3->setFont(font);
        Button_3->setLayoutDirection(Qt::LeftToRight);
        Button_3->setAutoFillBackground(false);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_3, 1, 4, 1, 1);

        Button_log = new QPushButton(centralwidget);
        Button_log->setObjectName(QString::fromUtf8("Button_log"));
        sizePolicy1.setHeightForWidth(Button_log->sizePolicy().hasHeightForWidth());
        Button_log->setSizePolicy(sizePolicy1);
        Button_log->setMinimumSize(QSize(0, 40));
        Button_log->setFont(font);
        Button_log->setLayoutDirection(Qt::LeftToRight);
        Button_log->setAutoFillBackground(false);
        Button_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_log, 4, 1, 1, 1);

        Button_point = new QPushButton(centralwidget);
        Button_point->setObjectName(QString::fromUtf8("Button_point"));
        sizePolicy1.setHeightForWidth(Button_point->sizePolicy().hasHeightForWidth());
        Button_point->setSizePolicy(sizePolicy1);
        Button_point->setMinimumSize(QSize(0, 40));
        Button_point->setMaximumSize(QSize(150, 16777215));
        Button_point->setFont(font);
        Button_point->setLayoutDirection(Qt::LeftToRight);
        Button_point->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_point, 4, 5, 1, 1);

        Button_x = new QPushButton(centralwidget);
        Button_x->setObjectName(QString::fromUtf8("Button_x"));
        sizePolicy1.setHeightForWidth(Button_x->sizePolicy().hasHeightForWidth());
        Button_x->setSizePolicy(sizePolicy1);
        Button_x->setMinimumSize(QSize(0, 40));
        Button_x->setMaximumSize(QSize(150, 16777215));
        Button_x->setFont(font);
        Button_x->setLayoutDirection(Qt::LeftToRight);
        Button_x->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_x, 1, 5, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        sizePolicy1.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy1);
        Button_1->setMinimumSize(QSize(0, 40));
        Button_1->setMaximumSize(QSize(150, 16777215));
        Button_1->setFont(font);
        Button_1->setLayoutDirection(Qt::LeftToRight);
        Button_1->setAutoFillBackground(false);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_1, 1, 2, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        sizePolicy1.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy1);
        Button_6->setMinimumSize(QSize(0, 40));
        Button_6->setMaximumSize(QSize(150, 16777215));
        Button_6->setFont(font);
        Button_6->setLayoutDirection(Qt::LeftToRight);
        Button_6->setAutoFillBackground(false);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_6, 2, 4, 1, 1);

        Button_cos = new QPushButton(centralwidget);
        Button_cos->setObjectName(QString::fromUtf8("Button_cos"));
        sizePolicy1.setHeightForWidth(Button_cos->sizePolicy().hasHeightForWidth());
        Button_cos->setSizePolicy(sizePolicy1);
        Button_cos->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        Button_cos->setFont(font1);
        Button_cos->setLayoutDirection(Qt::LeftToRight);
        Button_cos->setAutoFillBackground(false);
        Button_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_cos, 2, 0, 1, 1);

        Button_mod = new QPushButton(centralwidget);
        Button_mod->setObjectName(QString::fromUtf8("Button_mod"));
        sizePolicy1.setHeightForWidth(Button_mod->sizePolicy().hasHeightForWidth());
        Button_mod->setSizePolicy(sizePolicy1);
        Button_mod->setMinimumSize(QSize(0, 40));
        Button_mod->setFont(font);
        Button_mod->setLayoutDirection(Qt::LeftToRight);
        Button_mod->setAutoFillBackground(false);
        Button_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_mod, 0, 1, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        sizePolicy1.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy1);
        Button_4->setMinimumSize(QSize(0, 40));
        Button_4->setMaximumSize(QSize(150, 16777215));
        Button_4->setFont(font);
        Button_4->setLayoutDirection(Qt::LeftToRight);
        Button_4->setAutoFillBackground(false);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_4, 2, 2, 1, 1);

        Button_sqrt = new QPushButton(centralwidget);
        Button_sqrt->setObjectName(QString::fromUtf8("Button_sqrt"));
        sizePolicy1.setHeightForWidth(Button_sqrt->sizePolicy().hasHeightForWidth());
        Button_sqrt->setSizePolicy(sizePolicy1);
        Button_sqrt->setMinimumSize(QSize(0, 40));
        Button_sqrt->setMaximumSize(QSize(150, 16777215));
        Button_sqrt->setFont(font);
        Button_sqrt->setLayoutDirection(Qt::LeftToRight);
        Button_sqrt->setAutoFillBackground(false);
        Button_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_sqrt, 0, 2, 1, 1);

        Button_asin = new QPushButton(centralwidget);
        Button_asin->setObjectName(QString::fromUtf8("Button_asin"));
        sizePolicy1.setHeightForWidth(Button_asin->sizePolicy().hasHeightForWidth());
        Button_asin->setSizePolicy(sizePolicy1);
        Button_asin->setMinimumSize(QSize(0, 40));
        Button_asin->setFont(font);
        Button_asin->setLayoutDirection(Qt::LeftToRight);
        Button_asin->setAutoFillBackground(false);
        Button_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_asin, 2, 1, 1, 1);

        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setEnabled(true);
        sizePolicy1.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy1);
        Button_8->setMinimumSize(QSize(0, 40));
        Button_8->setMaximumSize(QSize(150, 16777215));
        Button_8->setFont(font);
        Button_8->setLayoutDirection(Qt::LeftToRight);
        Button_8->setAutoFillBackground(false);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_8, 3, 3, 1, 1);

        Button_sub = new QPushButton(centralwidget);
        Button_sub->setObjectName(QString::fromUtf8("Button_sub"));
        sizePolicy1.setHeightForWidth(Button_sub->sizePolicy().hasHeightForWidth());
        Button_sub->setSizePolicy(sizePolicy1);
        Button_sub->setMinimumSize(QSize(0, 40));
        Button_sub->setMaximumSize(QSize(150, 16777215));
        Button_sub->setFont(font);
        Button_sub->setLayoutDirection(Qt::LeftToRight);
        Button_sub->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_sub, 2, 5, 1, 1);

        Button_sin = new QPushButton(centralwidget);
        Button_sin->setObjectName(QString::fromUtf8("Button_sin"));
        sizePolicy1.setHeightForWidth(Button_sin->sizePolicy().hasHeightForWidth());
        Button_sin->setSizePolicy(sizePolicy1);
        Button_sin->setMinimumSize(QSize(0, 40));
        Button_sin->setFont(font);
        Button_sin->setLayoutDirection(Qt::LeftToRight);
        Button_sin->setAutoFillBackground(false);
        Button_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_sin, 1, 1, 1, 1);

        Button_atan = new QPushButton(centralwidget);
        Button_atan->setObjectName(QString::fromUtf8("Button_atan"));
        sizePolicy1.setHeightForWidth(Button_atan->sizePolicy().hasHeightForWidth());
        Button_atan->setSizePolicy(sizePolicy1);
        Button_atan->setMinimumSize(QSize(0, 40));
        Button_atan->setFont(font);
        Button_atan->setLayoutDirection(Qt::LeftToRight);
        Button_atan->setAutoFillBackground(false);
        Button_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_atan, 4, 0, 1, 1);

        Button_sum = new QPushButton(centralwidget);
        Button_sum->setObjectName(QString::fromUtf8("Button_sum"));
        sizePolicy1.setHeightForWidth(Button_sum->sizePolicy().hasHeightForWidth());
        Button_sum->setSizePolicy(sizePolicy1);
        Button_sum->setMinimumSize(QSize(0, 40));
        Button_sum->setMaximumSize(QSize(150, 16777215));
        Button_sum->setFont(font);
        Button_sum->setLayoutDirection(Qt::LeftToRight);
        Button_sum->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_sum, 3, 5, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        sizePolicy1.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy1);
        Button_0->setMinimumSize(QSize(0, 0));
        Button_0->setMaximumSize(QSize(600, 16777215));
        Button_0->setFont(font);
        Button_0->setLayoutDirection(Qt::LeftToRight);
        Button_0->setAutoFillBackground(false);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_0, 4, 2, 1, 3);

        Button_AC = new QPushButton(centralwidget);
        Button_AC->setObjectName(QString::fromUtf8("Button_AC"));
        sizePolicy1.setHeightForWidth(Button_AC->sizePolicy().hasHeightForWidth());
        Button_AC->setSizePolicy(sizePolicy1);
        Button_AC->setMinimumSize(QSize(0, 40));
        Button_AC->setFont(font);
        Button_AC->setLayoutDirection(Qt::LeftToRight);
        Button_AC->setAutoFillBackground(false);
        Button_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_AC, 0, 0, 1, 1);

        Button_acos = new QPushButton(centralwidget);
        Button_acos->setObjectName(QString::fromUtf8("Button_acos"));
        sizePolicy1.setHeightForWidth(Button_acos->sizePolicy().hasHeightForWidth());
        Button_acos->setSizePolicy(sizePolicy1);
        Button_acos->setMinimumSize(QSize(0, 40));
        Button_acos->setFont(font);
        Button_acos->setLayoutDirection(Qt::LeftToRight);
        Button_acos->setAutoFillBackground(false);
        Button_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_acos, 1, 0, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        sizePolicy1.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy1);
        Button_9->setMinimumSize(QSize(0, 40));
        Button_9->setMaximumSize(QSize(150, 16777215));
        Button_9->setFont(font);
        Button_9->setLayoutDirection(Qt::LeftToRight);
        Button_9->setAutoFillBackground(false);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_9, 3, 4, 1, 1);

        Button_mul = new QPushButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        sizePolicy1.setHeightForWidth(Button_mul->sizePolicy().hasHeightForWidth());
        Button_mul->setSizePolicy(sizePolicy1);
        Button_mul->setMinimumSize(QSize(0, 40));
        Button_mul->setMaximumSize(QSize(150, 16777215));
        Button_mul->setFont(font);
        Button_mul->setLayoutDirection(Qt::LeftToRight);
        Button_mul->setAutoFillBackground(false);
        Button_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_mul, 0, 4, 1, 1);

        Button_ln = new QPushButton(centralwidget);
        Button_ln->setObjectName(QString::fromUtf8("Button_ln"));
        sizePolicy1.setHeightForWidth(Button_ln->sizePolicy().hasHeightForWidth());
        Button_ln->setSizePolicy(sizePolicy1);
        Button_ln->setMinimumSize(QSize(0, 40));
        Button_ln->setFont(font);
        Button_ln->setLayoutDirection(Qt::LeftToRight);
        Button_ln->setAutoFillBackground(false);
        Button_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_ln, 3, 1, 1, 1);

        Button_div = new QPushButton(centralwidget);
        Button_div->setObjectName(QString::fromUtf8("Button_div"));
        sizePolicy1.setHeightForWidth(Button_div->sizePolicy().hasHeightForWidth());
        Button_div->setSizePolicy(sizePolicy1);
        Button_div->setMinimumSize(QSize(0, 40));
        Button_div->setMaximumSize(QSize(150, 16777215));
        Button_div->setFont(font);
        Button_div->setLayoutDirection(Qt::LeftToRight);
        Button_div->setAutoFillBackground(false);

        gridLayout_9->addWidget(Button_div, 0, 5, 1, 1);

        Button_pow = new QPushButton(centralwidget);
        Button_pow->setObjectName(QString::fromUtf8("Button_pow"));
        sizePolicy1.setHeightForWidth(Button_pow->sizePolicy().hasHeightForWidth());
        Button_pow->setSizePolicy(sizePolicy1);
        Button_pow->setMinimumSize(QSize(0, 40));
        Button_pow->setMaximumSize(QSize(150, 16777215));
        Button_pow->setFont(font);
        Button_pow->setLayoutDirection(Qt::LeftToRight);
        Button_pow->setAutoFillBackground(false);
        Button_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout_9->addWidget(Button_pow, 0, 3, 1, 1);

        Button_unar = new QPushButton(centralwidget);
        Button_unar->setObjectName(QString::fromUtf8("Button_unar"));
        sizePolicy1.setHeightForWidth(Button_unar->sizePolicy().hasHeightForWidth());
        Button_unar->setSizePolicy(sizePolicy1);
        Button_unar->setMinimumSize(QSize(0, 0));
        Button_unar->setMaximumSize(QSize(600, 16777215));
        Button_unar->setFont(font);
        Button_unar->setLayoutDirection(Qt::LeftToRight);
        Button_unar->setAutoFillBackground(false);
        Button_unar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));

        gridLayout_9->addWidget(Button_unar, 5, 2, 1, 3);


        verticalLayout_11->addLayout(gridLayout_9);

        verticalLayout_11->setStretch(0, 20000);
        verticalLayout_11->setStretch(1, 7000);

        verticalLayout_5->addLayout(verticalLayout_11);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        text_view->setText(QString());
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        Button_r_parenthese->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}", nullptr));
        Button_r_parenthese->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_l_parenthese->setStyleSheet(QCoreApplication::translate("MainWindow", "QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}", nullptr));
        Button_l_parenthese->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
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
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        Button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        Button_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
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
        Button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        Button_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
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
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
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
        Button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        Button_unar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
