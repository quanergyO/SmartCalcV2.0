/********************************************************************************
** Form generated from reading UI file 'creditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITWINDOW_H
#define UI_CREDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_deposit_amount;
    QLabel *label_2;
    QSpinBox *spinBox_term;
    QLabel *label_3;
    QSpinBox *spinBox_insert_rate;
    QLabel *label_4;
    QPushButton *pushButton_calc_credit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_monthly_payment;
    QLabel *label_loan_overpayment;
    QLabel *label_total_repayment;
    QComboBox *comboBox_credit_type;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreditWindow)
    {
        if (CreditWindow->objectName().isEmpty())
            CreditWindow->setObjectName(QString::fromUtf8("CreditWindow"));
        CreditWindow->resize(634, 289);
        centralwidget = new QWidget(CreditWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 101, 16));
        doubleSpinBox_deposit_amount = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_deposit_amount->setObjectName(QString::fromUtf8("doubleSpinBox_deposit_amount"));
        doubleSpinBox_deposit_amount->setGeometry(QRect(140, 30, 111, 22));
        doubleSpinBox_deposit_amount->setMaximum(999999999.000000000000000);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 91, 16));
        spinBox_term = new QSpinBox(centralwidget);
        spinBox_term->setObjectName(QString::fromUtf8("spinBox_term"));
        spinBox_term->setGeometry(QRect(140, 60, 111, 22));
        spinBox_term->setMinimum(1);
        spinBox_term->setMaximum(50);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 121, 16));
        spinBox_insert_rate = new QSpinBox(centralwidget);
        spinBox_insert_rate->setObjectName(QString::fromUtf8("spinBox_insert_rate"));
        spinBox_insert_rate->setGeometry(QRect(140, 90, 111, 22));
        spinBox_insert_rate->setMinimum(0);
        spinBox_insert_rate->setMaximum(100);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 91, 16));
        pushButton_calc_credit = new QPushButton(centralwidget);
        pushButton_calc_credit->setObjectName(QString::fromUtf8("pushButton_calc_credit"));
        pushButton_calc_credit->setGeometry(QRect(250, 170, 100, 32));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 30, 151, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 60, 151, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 90, 151, 16));
        label_monthly_payment = new QLabel(centralwidget);
        label_monthly_payment->setObjectName(QString::fromUtf8("label_monthly_payment"));
        label_monthly_payment->setGeometry(QRect(430, 30, 151, 16));
        label_loan_overpayment = new QLabel(centralwidget);
        label_loan_overpayment->setObjectName(QString::fromUtf8("label_loan_overpayment"));
        label_loan_overpayment->setGeometry(QRect(430, 60, 151, 16));
        label_total_repayment = new QLabel(centralwidget);
        label_total_repayment->setObjectName(QString::fromUtf8("label_total_repayment"));
        label_total_repayment->setGeometry(QRect(430, 90, 151, 16));
        comboBox_credit_type = new QComboBox(centralwidget);
        comboBox_credit_type->addItem(QString());
        comboBox_credit_type->addItem(QString());
        comboBox_credit_type->setObjectName(QString::fromUtf8("comboBox_credit_type"));
        comboBox_credit_type->setGeometry(QRect(130, 121, 131, 21));
        CreditWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreditWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 634, 24));
        CreditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CreditWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreditWindow->setStatusBar(statusbar);

        retranslateUi(CreditWindow);

        QMetaObject::connectSlotsByName(CreditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CreditWindow)
    {
        CreditWindow->setWindowTitle(QCoreApplication::translate("CreditWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CreditWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("CreditWindow", "\320\241\321\200\320\276\320\272 / \320\263\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("CreditWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CreditWindow", "\320\242\320\270\320\277 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        pushButton_calc_credit->setText(QCoreApplication::translate("CreditWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("CreditWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:", nullptr));
        label_6->setText(QCoreApplication::translate("CreditWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        label_7->setText(QCoreApplication::translate("CreditWindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        label_monthly_payment->setText(QString());
        label_loan_overpayment->setText(QString());
        label_total_repayment->setText(QString());
        comboBox_credit_type->setItemText(0, QCoreApplication::translate("CreditWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        comboBox_credit_type->setItemText(1, QCoreApplication::translate("CreditWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));

    } // retranslateUi

};

namespace Ui {
    class CreditWindow: public Ui_CreditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITWINDOW_H
