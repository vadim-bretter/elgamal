/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 1. Nov 14:28:09 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLineEdit *lineEdit_M;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *lineEdit_p;
    QLabel *label_4;
    QLineEdit *lineEdit_k;
    QLineEdit *lineEdit_r;
    QLabel *label_8;
    QLineEdit *lineEdit_y;
    QPushButton *pushButton_Verify;
    QPushButton *pushButton_M;
    QPushButton *pushButton_r;
    QPushButton *pushButton_y;
    QPushButton *pushButton_p;
    QPushButton *pushButton_k;
    QPushButton *pushButton_Subscribe;
    QLabel *label_6;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *pushButton_m;
    QLineEdit *lineEdit_m;
    QLabel *label_2;
    QPushButton *pushButton_g;
    QLineEdit *lineEdit_g;
    QLabel *label_5;
    QPushButton *pushButton_x;
    QLineEdit *lineEdit_x;
    QFormLayout *formLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QLineEdit *lineEdit_s;
    QPushButton *pushButton_s;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(653, 598);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 331, 531));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        lineEdit_M = new QLineEdit(gridLayoutWidget);
        lineEdit_M->setObjectName(QString::fromUtf8("lineEdit_M"));

        gridLayout->addWidget(lineEdit_M, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 25, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 2, 1, 1);

        lineEdit_p = new QLineEdit(gridLayoutWidget);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));

        gridLayout->addWidget(lineEdit_p, 6, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 9, 2, 1, 1);

        lineEdit_k = new QLineEdit(gridLayoutWidget);
        lineEdit_k->setObjectName(QString::fromUtf8("lineEdit_k"));

        gridLayout->addWidget(lineEdit_k, 10, 2, 1, 1);

        lineEdit_r = new QLineEdit(gridLayoutWidget);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));

        gridLayout->addWidget(lineEdit_r, 17, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 21, 2, 1, 1);

        lineEdit_y = new QLineEdit(gridLayoutWidget);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));

        gridLayout->addWidget(lineEdit_y, 22, 2, 1, 1);

        pushButton_Verify = new QPushButton(gridLayoutWidget);
        pushButton_Verify->setObjectName(QString::fromUtf8("pushButton_Verify"));

        gridLayout->addWidget(pushButton_Verify, 23, 2, 1, 1);

        pushButton_M = new QPushButton(gridLayoutWidget);
        pushButton_M->setObjectName(QString::fromUtf8("pushButton_M"));

        gridLayout->addWidget(pushButton_M, 2, 1, 1, 1);

        pushButton_r = new QPushButton(gridLayoutWidget);
        pushButton_r->setObjectName(QString::fromUtf8("pushButton_r"));

        gridLayout->addWidget(pushButton_r, 17, 1, 1, 1);

        pushButton_y = new QPushButton(gridLayoutWidget);
        pushButton_y->setObjectName(QString::fromUtf8("pushButton_y"));

        gridLayout->addWidget(pushButton_y, 22, 1, 1, 1);

        pushButton_p = new QPushButton(gridLayoutWidget);
        pushButton_p->setObjectName(QString::fromUtf8("pushButton_p"));

        gridLayout->addWidget(pushButton_p, 6, 1, 1, 1);

        pushButton_k = new QPushButton(gridLayoutWidget);
        pushButton_k->setObjectName(QString::fromUtf8("pushButton_k"));

        gridLayout->addWidget(pushButton_k, 10, 1, 1, 1);

        pushButton_Subscribe = new QPushButton(gridLayoutWidget);
        pushButton_Subscribe->setObjectName(QString::fromUtf8("pushButton_Subscribe"));

        gridLayout->addWidget(pushButton_Subscribe, 15, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 16, 2, 1, 1);

        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(339, 9, 301, 531));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        pushButton_m = new QPushButton(formLayoutWidget);
        pushButton_m->setObjectName(QString::fromUtf8("pushButton_m"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_m);

        lineEdit_m = new QLineEdit(formLayoutWidget);
        lineEdit_m->setObjectName(QString::fromUtf8("lineEdit_m"));
        lineEdit_m->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_m);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_2);

        pushButton_g = new QPushButton(formLayoutWidget);
        pushButton_g->setObjectName(QString::fromUtf8("pushButton_g"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_g);

        lineEdit_g = new QLineEdit(formLayoutWidget);
        lineEdit_g->setObjectName(QString::fromUtf8("lineEdit_g"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_g);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_5);

        pushButton_x = new QPushButton(formLayoutWidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setEnabled(true);

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton_x);

        lineEdit_x = new QLineEdit(formLayoutWidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_x);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));

        formLayout->setLayout(6, QFormLayout::LabelRole, formLayout_2);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::FieldRole, label_7);

        lineEdit_s = new QLineEdit(formLayoutWidget);
        lineEdit_s->setObjectName(QString::fromUtf8("lineEdit_s"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_s);

        pushButton_s = new QPushButton(formLayoutWidget);
        pushButton_s->setObjectName(QString::fromUtf8("pushButton_s"));

        formLayout->setWidget(8, QFormLayout::LabelRole, pushButton_s);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEdit);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::FieldRole, verticalSpacer_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 653, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\276\321\203\320\264\320\273\321\214 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 0 \320\264\320\276 p-1", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207", 0, QApplication::UnicodeUTF8));
        pushButton_Verify->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        pushButton_M->setText(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        pushButton_r->setText(QApplication::translate("MainWindow", "r", 0, QApplication::UnicodeUTF8));
        pushButton_y->setText(QApplication::translate("MainWindow", "y", 0, QApplication::UnicodeUTF8));
        pushButton_p->setText(QApplication::translate("MainWindow", "p", 0, QApplication::UnicodeUTF8));
        pushButton_k->setText(QApplication::translate("MainWindow", "k", 0, QApplication::UnicodeUTF8));
        pushButton_Subscribe->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\260\320\261\320\276\321\202\320\260\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\260\321\217 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\320\272\320\260 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\245\321\215\321\210 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", 0, QApplication::UnicodeUTF8));
        pushButton_m->setText(QApplication::translate("MainWindow", "m", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276", 0, QApplication::UnicodeUTF8));
        pushButton_g->setText(QApplication::translate("MainWindow", "g", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "C\320\265\320\272\321\200\320\265\321\202\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", 0, QApplication::UnicodeUTF8));
        pushButton_x->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\260\321\217 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\320\272\320\260 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        pushButton_s->setText(QApplication::translate("MainWindow", "s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
