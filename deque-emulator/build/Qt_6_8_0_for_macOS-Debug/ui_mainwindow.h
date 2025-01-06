/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *list_widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btn_insert;
    QLineEdit *le_count;
    QPushButton *btn_end;
    QPushButton *btn_days_week;
    QLabel *label_2;
    QPushButton *btn_edit;
    QPushButton *btn_pop_back;
    QPushButton *btn_resize;
    QPushButton *btn_min;
    QPushButton *btn_shuffle;
    QPushButton *btn_min_element;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *btn_sort;
    QPushButton *btn_count;
    QPushButton *btn_plus;
    QLabel *label_4;
    QPushButton *btn_months;
    QPushButton *btn_clear;
    QPushButton *btn_begin;
    QPushButton *btn_push_back;
    QPushButton *btn_max_element;
    QPushButton *btn_unique;
    QPushButton *btn_erase;
    QLabel *lbl_count;
    QLineEdit *txt_size;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_reverse;
    QLineEdit *txt_elem_content;
    QPushButton *btn_find;
    QPushButton *btn_sOrT;
    QPushButton *btn_pop_front;
    QPushButton *btn_push_front;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(768, 641);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        list_widget = new QListWidget(centralwidget);
        list_widget->setObjectName("list_widget");
        list_widget->setGeometry(QRect(10, 10, 256, 501));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(290, 0, 335, 617));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 2);

        btn_insert = new QPushButton(layoutWidget);
        btn_insert->setObjectName("btn_insert");

        gridLayout->addWidget(btn_insert, 5, 3, 1, 2);

        le_count = new QLineEdit(layoutWidget);
        le_count->setObjectName("le_count");

        gridLayout->addWidget(le_count, 1, 0, 1, 3);

        btn_end = new QPushButton(layoutWidget);
        btn_end->setObjectName("btn_end");

        gridLayout->addWidget(btn_end, 12, 3, 1, 2);

        btn_days_week = new QPushButton(layoutWidget);
        btn_days_week->setObjectName("btn_days_week");

        gridLayout->addWidget(btn_days_week, 16, 0, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 15, 0, 1, 2);

        btn_edit = new QPushButton(layoutWidget);
        btn_edit->setObjectName("btn_edit");

        gridLayout->addWidget(btn_edit, 0, 3, 1, 1);

        btn_pop_back = new QPushButton(layoutWidget);
        btn_pop_back->setObjectName("btn_pop_back");

        gridLayout->addWidget(btn_pop_back, 3, 0, 1, 2);

        btn_resize = new QPushButton(layoutWidget);
        btn_resize->setObjectName("btn_resize");

        gridLayout->addWidget(btn_resize, 18, 3, 1, 2);

        btn_min = new QPushButton(layoutWidget);
        btn_min->setObjectName("btn_min");

        gridLayout->addWidget(btn_min, 11, 0, 1, 2);

        btn_shuffle = new QPushButton(layoutWidget);
        btn_shuffle->setObjectName("btn_shuffle");

        gridLayout->addWidget(btn_shuffle, 14, 0, 1, 2);

        btn_min_element = new QPushButton(layoutWidget);
        btn_min_element->setObjectName("btn_min_element");

        gridLayout->addWidget(btn_min_element, 8, 0, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 18, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 7, 0, 1, 2);

        btn_sort = new QPushButton(layoutWidget);
        btn_sort->setObjectName("btn_sort");

        gridLayout->addWidget(btn_sort, 9, 0, 1, 2);

        btn_count = new QPushButton(layoutWidget);
        btn_count->setObjectName("btn_count");

        gridLayout->addWidget(btn_count, 1, 3, 1, 1);

        btn_plus = new QPushButton(layoutWidget);
        btn_plus->setObjectName("btn_plus");

        gridLayout->addWidget(btn_plus, 11, 3, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 10, 0, 1, 2);

        btn_months = new QPushButton(layoutWidget);
        btn_months->setObjectName("btn_months");

        gridLayout->addWidget(btn_months, 16, 3, 1, 2);

        btn_clear = new QPushButton(layoutWidget);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 6, 0, 1, 2);

        btn_begin = new QPushButton(layoutWidget);
        btn_begin->setObjectName("btn_begin");

        gridLayout->addWidget(btn_begin, 12, 0, 1, 2);

        btn_push_back = new QPushButton(layoutWidget);
        btn_push_back->setObjectName("btn_push_back");

        gridLayout->addWidget(btn_push_back, 3, 3, 1, 2);

        btn_max_element = new QPushButton(layoutWidget);
        btn_max_element->setObjectName("btn_max_element");

        gridLayout->addWidget(btn_max_element, 8, 3, 1, 2);

        btn_unique = new QPushButton(layoutWidget);
        btn_unique->setObjectName("btn_unique");

        gridLayout->addWidget(btn_unique, 13, 0, 1, 2);

        btn_erase = new QPushButton(layoutWidget);
        btn_erase->setObjectName("btn_erase");

        gridLayout->addWidget(btn_erase, 5, 0, 1, 2);

        lbl_count = new QLabel(layoutWidget);
        lbl_count->setObjectName("lbl_count");

        gridLayout->addWidget(lbl_count, 1, 4, 1, 1);

        txt_size = new QLineEdit(layoutWidget);
        txt_size->setObjectName("txt_size");

        gridLayout->addWidget(txt_size, 18, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 17, 1, 1, 1);

        btn_reverse = new QPushButton(layoutWidget);
        btn_reverse->setObjectName("btn_reverse");

        gridLayout->addWidget(btn_reverse, 13, 3, 1, 2);

        txt_elem_content = new QLineEdit(layoutWidget);
        txt_elem_content->setObjectName("txt_elem_content");

        gridLayout->addWidget(txt_elem_content, 0, 0, 1, 3);

        btn_find = new QPushButton(layoutWidget);
        btn_find->setObjectName("btn_find");

        gridLayout->addWidget(btn_find, 0, 4, 1, 1);

        btn_sOrT = new QPushButton(layoutWidget);
        btn_sOrT->setObjectName("btn_sOrT");

        gridLayout->addWidget(btn_sOrT, 9, 3, 1, 2);

        btn_pop_front = new QPushButton(layoutWidget);
        btn_pop_front->setObjectName("btn_pop_front");

        gridLayout->addWidget(btn_pop_front, 4, 0, 1, 2);

        btn_push_front = new QPushButton(layoutWidget);
        btn_push_front->setObjectName("btn_push_front");

        gridLayout->addWidget(btn_push_front, 4, 3, 1, 2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\274\320\276\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264\321\213", nullptr));
        btn_insert->setText(QCoreApplication::translate("MainWindow", "insert", nullptr));
        btn_end->setText(QCoreApplication::translate("MainWindow", "end", nullptr));
        btn_days_week->setText(QCoreApplication::translate("MainWindow", "= \320\264\320\275\320\270 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\320\276\321\202\320\276\320\262\320\272\320\270", nullptr));
        btn_edit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        btn_pop_back->setText(QCoreApplication::translate("MainWindow", "pop_back", nullptr));
        btn_resize->setText(QCoreApplication::translate("MainWindow", "resize", nullptr));
        btn_min->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        btn_shuffle->setText(QCoreApplication::translate("MainWindow", "shuffle", nullptr));
        btn_min_element->setText(QCoreApplication::translate("MainWindow", "min_element", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "size():", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        btn_sort->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        btn_count->setText(QCoreApplication::translate("MainWindow", "count", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\265\321\200\320\260\321\202\320\276\321\200", nullptr));
        btn_months->setText(QCoreApplication::translate("MainWindow", "= \320\274\320\265\321\201\321\217\321\206\321\213", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btn_begin->setText(QCoreApplication::translate("MainWindow", "begin", nullptr));
        btn_push_back->setText(QCoreApplication::translate("MainWindow", "push_back", nullptr));
        btn_max_element->setText(QCoreApplication::translate("MainWindow", "max_element", nullptr));
        btn_unique->setText(QCoreApplication::translate("MainWindow", "unique", nullptr));
        btn_erase->setText(QCoreApplication::translate("MainWindow", "erase", nullptr));
        lbl_count->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_reverse->setText(QCoreApplication::translate("MainWindow", "reverse", nullptr));
        btn_find->setText(QCoreApplication::translate("MainWindow", "find", nullptr));
        btn_sOrT->setText(QCoreApplication::translate("MainWindow", "sOrT", nullptr));
        btn_pop_front->setText(QCoreApplication::translate("MainWindow", "pop_front", nullptr));
        btn_push_front->setText(QCoreApplication::translate("MainWindow", "push_front", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
