/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <scene.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    Scene *viewOpenGL;
    QWidget *layoutWidget;
    QVBoxLayout *vlaoRotation;
    QLabel *label_4;
    QVBoxLayout *vlaoRotationX;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSlider *hsldRotateX;
    QVBoxLayout *vlaoRotationY;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSlider *hsldRotateY;
    QVBoxLayout *vlaoRotationZ;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSlider *hsldRotateZ;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(808, 600);
        viewOpenGL = new Scene(Widget);
        viewOpenGL->setObjectName(QString::fromUtf8("viewOpenGL"));
        viewOpenGL->setGeometry(QRect(40, 40, 500, 500));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 80, 171, 201));
        vlaoRotation = new QVBoxLayout(layoutWidget);
        vlaoRotation->setObjectName(QString::fromUtf8("vlaoRotation"));
        vlaoRotation->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        vlaoRotation->addWidget(label_4);

        vlaoRotationX = new QVBoxLayout();
        vlaoRotationX->setObjectName(QString::fromUtf8("vlaoRotationX"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        vlaoRotationX->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(9);
        label_5->setFont(font2);

        horizontalLayout->addWidget(label_5);

        hsldRotateX = new QSlider(layoutWidget);
        hsldRotateX->setObjectName(QString::fromUtf8("hsldRotateX"));
        hsldRotateX->setMinimum(-359);
        hsldRotateX->setMaximum(359);
        hsldRotateX->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(hsldRotateX);


        vlaoRotationX->addLayout(horizontalLayout);


        vlaoRotation->addLayout(vlaoRotationX);

        vlaoRotationY = new QVBoxLayout();
        vlaoRotationY->setObjectName(QString::fromUtf8("vlaoRotationY"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        vlaoRotationY->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_2->addWidget(label_6);

        hsldRotateY = new QSlider(layoutWidget);
        hsldRotateY->setObjectName(QString::fromUtf8("hsldRotateY"));
        hsldRotateY->setMinimum(-359);
        hsldRotateY->setMaximum(359);
        hsldRotateY->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(hsldRotateY);


        vlaoRotationY->addLayout(horizontalLayout_2);


        vlaoRotation->addLayout(vlaoRotationY);

        vlaoRotationZ = new QVBoxLayout();
        vlaoRotationZ->setObjectName(QString::fromUtf8("vlaoRotationZ"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        vlaoRotationZ->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        horizontalLayout_3->addWidget(label_7);

        hsldRotateZ = new QSlider(layoutWidget);
        hsldRotateZ->setObjectName(QString::fromUtf8("hsldRotateZ"));
        hsldRotateZ->setMinimum(-359);
        hsldRotateZ->setMaximum(359);
        hsldRotateZ->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(hsldRotateZ);


        vlaoRotationZ->addLayout(horizontalLayout_3);


        vlaoRotation->addLayout(vlaoRotationZ);


        retranslateUi(Widget);
        QObject::connect(hsldRotateX, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(hsldRotateY, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));
        QObject::connect(hsldRotateZ, SIGNAL(valueChanged(int)), label_7, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Rotation", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Rotation X", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Rotation Y", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Rotation Z", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
