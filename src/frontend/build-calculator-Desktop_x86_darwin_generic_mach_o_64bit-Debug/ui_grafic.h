/********************************************************************************
** Form generated from reading UI file 'grafic.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFIC_H
#define UI_GRAFIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_grafic
{
public:

    void setupUi(QDialog *grafic)
    {
        if (grafic->objectName().isEmpty())
            grafic->setObjectName(QString::fromUtf8("grafic"));
        grafic->resize(570, 388);

        retranslateUi(grafic);

        QMetaObject::connectSlotsByName(grafic);
    } // setupUi

    void retranslateUi(QDialog *grafic)
    {
        grafic->setWindowTitle(QCoreApplication::translate("grafic", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafic: public Ui_grafic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFIC_H
