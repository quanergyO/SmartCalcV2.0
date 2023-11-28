/********************************************************************************
** Form generated from reading UI file 'debitwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBITWINDOW_H
#define UI_DEBITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_debitWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_amount;
    QLabel *label_2;
    QSpinBox *spinBox_period;
    QLabel *label_3;
    QSpinBox *spinBox_interest;
    QLabel *label_4;
    QSpinBox *spinBox_tax;
    QLabel *label_5;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QLabel *label_6;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_totalInterest;
    QLabel *label_finalSavings;
    QLabel *label_totalTax;
    QTableWidget *tableWidget_replenishment;
    QPushButton *pushButton_replenishment;
    QLabel *label_10;
    QLabel *label_11;
    QTableWidget *tableWidget_withdrawal;
    QPushButton *pushButton_withdrawal;
    QPushButton *pushButton_calculate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *debitWindow)
    {
        if (debitWindow->objectName().isEmpty())
            debitWindow->setObjectName(QString::fromUtf8("debitWindow"));
        debitWindow->resize(673, 556);
        centralwidget = new QWidget(debitWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 361, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox_amount = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_amount->setObjectName(QString::fromUtf8("doubleSpinBox_amount"));
        doubleSpinBox_amount->setMaximum(1000000000.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_amount);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBox_period = new QSpinBox(formLayoutWidget);
        spinBox_period->setObjectName(QString::fromUtf8("spinBox_period"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_period->sizePolicy().hasHeightForWidth());
        spinBox_period->setSizePolicy(sizePolicy);
        spinBox_period->setMinimum(1);
        spinBox_period->setMaximum(600);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_period);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBox_interest = new QSpinBox(formLayoutWidget);
        spinBox_interest->setObjectName(QString::fromUtf8("spinBox_interest"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBox_interest->sizePolicy().hasHeightForWidth());
        spinBox_interest->setSizePolicy(sizePolicy1);
        spinBox_interest->setMinimum(1);
        spinBox_interest->setMaximum(100);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_interest);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        spinBox_tax = new QSpinBox(formLayoutWidget);
        spinBox_tax->setObjectName(QString::fromUtf8("spinBox_tax"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox_tax->sizePolicy().hasHeightForWidth());
        spinBox_tax->setSizePolicy(sizePolicy2);
        spinBox_tax->setMinimum(0);
        spinBox_tax->setMaximum(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_tax);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox);

        checkBox = new QCheckBox(formLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, checkBox);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 20, 121, 16));
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(300, 10, 361, 191));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        label_totalInterest = new QLabel(formLayoutWidget_2);
        label_totalInterest->setObjectName(QString::fromUtf8("label_totalInterest"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_totalInterest);

        label_finalSavings = new QLabel(formLayoutWidget_2);
        label_finalSavings->setObjectName(QString::fromUtf8("label_finalSavings"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, label_finalSavings);

        label_totalTax = new QLabel(formLayoutWidget_2);
        label_totalTax->setObjectName(QString::fromUtf8("label_totalTax"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, label_totalTax);

        tableWidget_replenishment = new QTableWidget(centralwidget);
        if (tableWidget_replenishment->columnCount() < 2)
            tableWidget_replenishment->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_replenishment->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_replenishment->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_replenishment->setObjectName(QString::fromUtf8("tableWidget_replenishment"));
        tableWidget_replenishment->setGeometry(QRect(10, 230, 281, 161));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget_replenishment->sizePolicy().hasHeightForWidth());
        tableWidget_replenishment->setSizePolicy(sizePolicy3);
        pushButton_replenishment = new QPushButton(centralwidget);
        pushButton_replenishment->setObjectName(QString::fromUtf8("pushButton_replenishment"));
        pushButton_replenishment->setGeometry(QRect(100, 400, 100, 32));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 210, 91, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(430, 210, 61, 16));
        tableWidget_withdrawal = new QTableWidget(centralwidget);
        if (tableWidget_withdrawal->columnCount() < 2)
            tableWidget_withdrawal->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_withdrawal->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_withdrawal->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableWidget_withdrawal->setObjectName(QString::fromUtf8("tableWidget_withdrawal"));
        tableWidget_withdrawal->setGeometry(QRect(320, 230, 281, 161));
        sizePolicy3.setHeightForWidth(tableWidget_withdrawal->sizePolicy().hasHeightForWidth());
        tableWidget_withdrawal->setSizePolicy(sizePolicy3);
        pushButton_withdrawal = new QPushButton(centralwidget);
        pushButton_withdrawal->setObjectName(QString::fromUtf8("pushButton_withdrawal"));
        pushButton_withdrawal->setGeometry(QRect(410, 400, 100, 32));
        pushButton_calculate = new QPushButton(centralwidget);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        pushButton_calculate->setGeometry(QRect(230, 460, 155, 32));
        debitWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(debitWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 24));
        debitWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(debitWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        debitWindow->setStatusBar(statusbar);

        retranslateUi(debitWindow);

        QMetaObject::connectSlotsByName(debitWindow);
    } // setupUi

    void retranslateUi(QMainWindow *debitWindow)
    {
        debitWindow->setWindowTitle(QCoreApplication::translate("debitWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("debitWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("debitWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217 / \320\263\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("debitWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("debitWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("debitWindow", "\320\237\320\265\321\200\320\265\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\264\320\265\320\275\321\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273 \320\263\320\276\320\264\320\260", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("debitWindow", "\320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("debitWindow", "\320\222 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        checkBox->setText(QCoreApplication::translate("debitWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("debitWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213: ", nullptr));
        label_8->setText(QCoreApplication::translate("debitWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260:", nullptr));
        label_9->setText(QCoreApplication::translate("debitWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_totalInterest->setText(QString());
        label_finalSavings->setText(QString());
        label_totalTax->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_replenishment->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("debitWindow", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_replenishment->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("debitWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        pushButton_replenishment->setText(QCoreApplication::translate("debitWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("debitWindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("debitWindow", "\320\241\320\275\321\217\321\202\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_withdrawal->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("debitWindow", "\320\224\320\260\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_withdrawal->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("debitWindow", "\320\241\321\203\320\274\320\274\320\260", nullptr));
        pushButton_withdrawal->setText(QCoreApplication::translate("debitWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_calculate->setText(QCoreApplication::translate("debitWindow", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debitWindow: public Ui_debitWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBITWINDOW_H
