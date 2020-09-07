#include "widget.h"
#include "ui_widget.h"
#include <iostream>

//Constructor de la ventana principal
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

//Se obtiene el valor de los eslaiders para realizar las rotaciones de la forma
void Widget::on_hsldRotateX_actionTriggered(int action)
{
    std::cout<<"ROTATION X: "<<ui->hsldRotateX->value()<<std::endl;
    ui->viewOpenGL->setRotateX(ui->hsldRotateX->value());
    ui->viewOpenGL->update();
}

void Widget::on_hsldRotateY_actionTriggered(int action)
{
    std::cout<<"ROTATION Y: "<<ui->hsldRotateY->value()<<std::endl;
    ui->viewOpenGL->setRotateY(ui->hsldRotateY->value());
    ui->viewOpenGL->update();
}

void Widget::on_hsldRotateZ_actionTriggered(int action)
{
    std::cout<<"ROTATION Z: "<<ui->hsldRotateZ->value()<<std::endl;
    ui->viewOpenGL->setRotateZ(ui->hsldRotateZ->value());
    ui->viewOpenGL->update();
}
