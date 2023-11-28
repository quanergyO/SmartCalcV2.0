/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_step;
    QLineEdit *lineEdit_f_x;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_max_y;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_start_x;
    QDoubleSpinBox *doubleSpinBox_min_y;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_end_x;
    QPushButton *pushButton_draw;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName(QString::fromUtf8("GraphWindow"));
        GraphWindow->resize(800, 600);
        centralwidget = new QWidget(GraphWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        doubleSpinBox_step = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_step->setObjectName(QString::fromUtf8("doubleSpinBox_step"));
        doubleSpinBox_step->setDecimals(7);
        doubleSpinBox_step->setMinimum(0.000000000000000);
        doubleSpinBox_step->setMaximum(100.000000000000000);
        doubleSpinBox_step->setValue(0.100000000000000);

        gridLayout_2->addWidget(doubleSpinBox_step, 5, 2, 1, 1);

        lineEdit_f_x = new QLineEdit(centralwidget);
        lineEdit_f_x->setObjectName(QString::fromUtf8("lineEdit_f_x"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_f_x->sizePolicy().hasHeightForWidth());
        lineEdit_f_x->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_f_x, 0, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        doubleSpinBox_max_y = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_max_y->setObjectName(QString::fromUtf8("doubleSpinBox_max_y"));
        doubleSpinBox_max_y->setDecimals(7);
        doubleSpinBox_max_y->setMinimum(-1000000.000000000000000);
        doubleSpinBox_max_y->setMaximum(1000000.000000000000000);
        doubleSpinBox_max_y->setValue(1.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_max_y, 3, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        doubleSpinBox_start_x = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_start_x->setObjectName(QString::fromUtf8("doubleSpinBox_start_x"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doubleSpinBox_start_x->sizePolicy().hasHeightForWidth());
        doubleSpinBox_start_x->setSizePolicy(sizePolicy1);
        doubleSpinBox_start_x->setMinimum(-1000000.000000000000000);
        doubleSpinBox_start_x->setMaximum(1000000.000000000000000);
        doubleSpinBox_start_x->setValue(-10.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_start_x, 1, 2, 1, 1);

        doubleSpinBox_min_y = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_min_y->setObjectName(QString::fromUtf8("doubleSpinBox_min_y"));
        doubleSpinBox_min_y->setDecimals(7);
        doubleSpinBox_min_y->setMinimum(-1000000.000000000000000);
        doubleSpinBox_min_y->setMaximum(1000000.000000000000000);
        doubleSpinBox_min_y->setValue(-1.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_min_y, 4, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox_end_x = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_end_x->setObjectName(QString::fromUtf8("doubleSpinBox_end_x"));
        doubleSpinBox_end_x->setMinimum(-1000000.000000000000000);
        doubleSpinBox_end_x->setMaximum(1000000.000000000000000);
        doubleSpinBox_end_x->setValue(10.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_end_x, 2, 2, 1, 1);

        pushButton_draw = new QPushButton(centralwidget);
        pushButton_draw->setObjectName(QString::fromUtf8("pushButton_draw"));

        gridLayout_2->addWidget(pushButton_draw, 6, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(widget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        GraphWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraphWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        GraphWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GraphWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraphWindow->setStatusBar(statusbar);

        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("GraphWindow", "Start X", nullptr));
        label_5->setText(QCoreApplication::translate("GraphWindow", "Min Y", nullptr));
        label_6->setText(QCoreApplication::translate("GraphWindow", "Step", nullptr));
        lineEdit_f_x->setText(QString());
        label_3->setText(QCoreApplication::translate("GraphWindow", "End X", nullptr));
        label_4->setText(QCoreApplication::translate("GraphWindow", "Max Y", nullptr));
        label->setText(QCoreApplication::translate("GraphWindow", "f(x)", nullptr));
        pushButton_draw->setText(QCoreApplication::translate("GraphWindow", "Draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
