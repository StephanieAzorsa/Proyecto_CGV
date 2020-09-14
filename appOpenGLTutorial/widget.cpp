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

void Widget::on_radioButton_clicked()
{
    ui->viewOpenGL->figura = 1;
    ui->viewOpenGL->update();
}

void Widget::on_radioButton_2_clicked()
{
    ui->viewOpenGL->figura = 2;
    ui->viewOpenGL->update();
}

void Widget::on_radioButton_3_clicked()
{
    ui->viewOpenGL->figura = 3;
    ui->viewOpenGL->update();
}

void Widget::on_hsldScale_actionTriggered(int action)
{
    std::cout<<"ESCALA: "<<ui->hsldScale->value()<<std::endl;
    ui->viewOpenGL->setscala(ui->hsldScale->value());
    ui->viewOpenGL->update();
}

void Widget::on_checkBoxTransparente_stateChanged(int arg1)
{
    ui->viewOpenGL->transparente = arg1;
    ui->viewOpenGL->update();
}

void Widget::on_checkBoxRelleno_stateChanged(int arg1)
{
    ui->viewOpenGL->relleno = arg1;
    ui->viewOpenGL->update();
}

void Widget::on_hsdSegmentoX_actionTriggered(int action)
{
    ui->viewOpenGL->setsegmentoX(ui->hsdSegmentoX->value());
    ui->viewOpenGL->update();
}

void Widget::on_hsdSegmentoY_actionTriggered(int action)
{

}



void Widget::on_radioButton_4_clicked()
{
    std::cout<<"Hi"<<std::endl;
    ui->viewOpenGL->figura = 4;
    ui->viewOpenGL->update();
}
