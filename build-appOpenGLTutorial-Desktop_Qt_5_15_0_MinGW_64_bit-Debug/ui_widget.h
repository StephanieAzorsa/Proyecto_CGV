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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
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
    QVBoxLayout *vlaoRotationX;
    QLabel *label_4;
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
    QVBoxLayout *vlaoScale;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblScale;
    QSlider *hsldScale;
    QWidget *layoutWidget1;
    QVBoxLayout *vlaoShapes;
    QLabel *label_9;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QWidget *layoutWidget2;
    QVBoxLayout *vlaoRender;
    QLabel *label_8;
    QCheckBox *checkBoxTransparente;
    QCheckBox *checkBoxRelleno;
    QCheckBox *checkBoxNormal;
    QCheckBox *checkBoxSuavizar;
    QWidget *layoutWidget3;
    QVBoxLayout *vlaoSegments;
    QLabel *label_11;
    QHBoxLayout *hlaoSegmentX;
    QLabel *lblSegmentoX;
    QSlider *hsdSegmentoX;
    QLabel *label_13;
    QHBoxLayout *hlaoSegmentY;
    QLabel *lblSegmentoY;
    QSlider *hsdSegmentoY;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(1097, 710);
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        Widget->setFont(font);
        viewOpenGL = new Scene(Widget);
        viewOpenGL->setObjectName(QString::fromUtf8("viewOpenGL"));
        viewOpenGL->setGeometry(QRect(5, 5, 700, 700));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(720, 400, 361, 284));
        vlaoRotation = new QVBoxLayout(layoutWidget);
        vlaoRotation->setObjectName(QString::fromUtf8("vlaoRotation"));
        vlaoRotation->setContentsMargins(0, 0, 0, 0);
        vlaoRotationX = new QVBoxLayout();
        vlaoRotationX->setObjectName(QString::fromUtf8("vlaoRotationX"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        vlaoRotationX->addWidget(label_4);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat"));
        font2.setPointSize(10);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        vlaoRotationX->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
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
        label_2->setFont(font2);
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
        label_3->setFont(font2);
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

        vlaoScale = new QVBoxLayout();
        vlaoScale->setObjectName(QString::fromUtf8("vlaoScale"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Montserrat"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        vlaoScale->addWidget(label_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lblScale = new QLabel(layoutWidget);
        lblScale->setObjectName(QString::fromUtf8("lblScale"));
        lblScale->setFont(font3);
        lblScale->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lblScale);

        hsldScale = new QSlider(layoutWidget);
        hsldScale->setObjectName(QString::fromUtf8("hsldScale"));
        hsldScale->setMinimum(10);
        hsldScale->setMaximum(200);
        hsldScale->setSliderPosition(100);
        hsldScale->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(hsldScale);


        vlaoScale->addLayout(horizontalLayout_5);


        vlaoRotation->addLayout(vlaoScale);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(910, 20, 171, 192));
        vlaoShapes = new QVBoxLayout(layoutWidget1);
        vlaoShapes->setObjectName(QString::fromUtf8("vlaoShapes"));
        vlaoShapes->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setLayoutDirection(Qt::LeftToRight);
        label_9->setAlignment(Qt::AlignCenter);

        vlaoShapes->addWidget(label_9);

        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font2);

        vlaoShapes->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font2);

        vlaoShapes->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget1);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font2);

        vlaoShapes->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget1);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font2);

        vlaoShapes->addWidget(radioButton_4);

        radioButton_6 = new QRadioButton(layoutWidget1);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        QFont font4;
        font4.setPointSize(10);
        radioButton_6->setFont(font4);

        vlaoShapes->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(layoutWidget1);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setFont(font2);

        vlaoShapes->addWidget(radioButton_5);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(720, 20, 171, 136));
        vlaoRender = new QVBoxLayout(layoutWidget2);
        vlaoRender->setObjectName(QString::fromUtf8("vlaoRender"));
        vlaoRender->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignCenter);

        vlaoRender->addWidget(label_8);

        checkBoxTransparente = new QCheckBox(layoutWidget2);
        checkBoxTransparente->setObjectName(QString::fromUtf8("checkBoxTransparente"));
        checkBoxTransparente->setFont(font2);

        vlaoRender->addWidget(checkBoxTransparente);

        checkBoxRelleno = new QCheckBox(layoutWidget2);
        checkBoxRelleno->setObjectName(QString::fromUtf8("checkBoxRelleno"));
        checkBoxRelleno->setFont(font2);

        vlaoRender->addWidget(checkBoxRelleno);

        checkBoxNormal = new QCheckBox(layoutWidget2);
        checkBoxNormal->setObjectName(QString::fromUtf8("checkBoxNormal"));
        checkBoxNormal->setFont(font2);

        vlaoRender->addWidget(checkBoxNormal);

        checkBoxSuavizar = new QCheckBox(layoutWidget2);
        checkBoxSuavizar->setObjectName(QString::fromUtf8("checkBoxSuavizar"));
        checkBoxSuavizar->setFont(font2);

        vlaoRender->addWidget(checkBoxSuavizar);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(720, 250, 361, 111));
        vlaoSegments = new QVBoxLayout(layoutWidget3);
        vlaoSegments->setObjectName(QString::fromUtf8("vlaoSegments"));
        vlaoSegments->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setAlignment(Qt::AlignCenter);

        vlaoSegments->addWidget(label_11);

        hlaoSegmentX = new QHBoxLayout();
        hlaoSegmentX->setObjectName(QString::fromUtf8("hlaoSegmentX"));
        lblSegmentoX = new QLabel(layoutWidget3);
        lblSegmentoX->setObjectName(QString::fromUtf8("lblSegmentoX"));

        hlaoSegmentX->addWidget(lblSegmentoX);

        hsdSegmentoX = new QSlider(layoutWidget3);
        hsdSegmentoX->setObjectName(QString::fromUtf8("hsdSegmentoX"));
        hsdSegmentoX->setMinimum(3);
        hsdSegmentoX->setMaximum(200);
        hsdSegmentoX->setOrientation(Qt::Horizontal);

        hlaoSegmentX->addWidget(hsdSegmentoX);


        vlaoSegments->addLayout(hlaoSegmentX);

        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);
        label_13->setAlignment(Qt::AlignCenter);

        vlaoSegments->addWidget(label_13);

        hlaoSegmentY = new QHBoxLayout();
        hlaoSegmentY->setObjectName(QString::fromUtf8("hlaoSegmentY"));
        lblSegmentoY = new QLabel(layoutWidget3);
        lblSegmentoY->setObjectName(QString::fromUtf8("lblSegmentoY"));

        hlaoSegmentY->addWidget(lblSegmentoY);

        hsdSegmentoY = new QSlider(layoutWidget3);
        hsdSegmentoY->setObjectName(QString::fromUtf8("hsdSegmentoY"));
        hsdSegmentoY->setMinimum(3);
        hsdSegmentoY->setMaximum(200);
        hsdSegmentoY->setOrientation(Qt::Horizontal);

        hlaoSegmentY->addWidget(hsdSegmentoY);


        vlaoSegments->addLayout(hlaoSegmentY);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(720, 370, 361, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Montserrat"));
        font5.setBold(true);
        font5.setWeight(75);
        line->setFont(font5);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(720, 220, 361, 16));
        line_2->setFont(font5);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(Widget);
        QObject::connect(hsldRotateX, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(hsldRotateY, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));
        QObject::connect(hsldRotateZ, SIGNAL(valueChanged(int)), label_7, SLOT(setNum(int)));
        QObject::connect(hsldScale, SIGNAL(valueChanged(int)), lblScale, SLOT(setNum(int)));
        QObject::connect(hsdSegmentoX, SIGNAL(valueChanged(int)), lblSegmentoX, SLOT(setNum(int)));
        QObject::connect(hsdSegmentoY, SIGNAL(valueChanged(int)), lblSegmentoY, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "PROYECTO - CG", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "C\303\201MARA", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Rotaci\303\263n Eje X", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Rotaci\303\263n Eje Y", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Rotaci\303\263n Eje Z", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "0", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "Escala", nullptr));
        lblScale->setText(QCoreApplication::translate("Widget", "100", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "FIGURAS", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "Cubo", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "Esfera", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "Piramide", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "Cono", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Widget", "Cilindro", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Widget", "Especial", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "RENDER", nullptr));
        checkBoxTransparente->setText(QCoreApplication::translate("Widget", "Estructura", nullptr));
        checkBoxRelleno->setText(QCoreApplication::translate("Widget", "Relleno", nullptr));
        checkBoxNormal->setText(QCoreApplication::translate("Widget", "Normal", nullptr));
        checkBoxSuavizar->setText(QCoreApplication::translate("Widget", "Suavizar", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "SEGMENTOS X", nullptr));
        lblSegmentoX->setText(QCoreApplication::translate("Widget", "3", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "SEGMENTOS Y", nullptr));
        lblSegmentoY->setText(QCoreApplication::translate("Widget", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
