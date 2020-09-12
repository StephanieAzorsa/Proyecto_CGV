#include "widget.h"
#include "ui_widget.h"
#include <iostream>

using namespace std;
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
    //std::cout<<"ROTATION X: "<<ui->hsldRotateX->value()<<std::endl;
    ui->viewOpenGL->setRotateX(ui->hsldRotateX->value());
    ui->viewOpenGL->update();
}

void Widget::on_hsldRotateY_actionTriggered(int action)
{
   // std::cout<<"ROTATION Y: "<<ui->hsldRotateY->value()<<std::endl;
    ui->viewOpenGL->setRotateY(ui->hsldRotateY->value());
    ui->viewOpenGL->update();
}

void Widget::on_hsldRotateZ_actionTriggered(int action)
{
    //std::cout<<"ROTATION Z: "<<ui->hsldRotateZ->value()<<std::endl;
    ui->viewOpenGL->setRotateZ(ui->hsldRotateZ->value());
    ui->viewOpenGL->update();
}



void Widget::on_rbtn_Cube_clicked()
{
    std::cout<<"Cubo"<<std::endl;

    ui->viewOpenGL->setShape(1);
  //  ui->viewOpenGL->initializeGL();
    ui->viewOpenGL->update();
}

void Widget::on_rbtn_Sphere_clicked()
{
    std::cout<<"Esfera"<<std::endl;
     ui->viewOpenGL->setShape(2);
   //ui->viewOpenGL->initializeGL();
     ui->viewOpenGL->update();
}




void Widget::on_hsldSegmentY_actionTriggered(int action)
{

}



void Widget::on_hsldScale_actionTriggered(int action)
{
    std::cout<<"Escala X: "<<ui->hsldScale->value()<<std::endl;
    ui->viewOpenGL->setScale(float(ui->hsldScale->value()));
    ui->viewOpenGL->update();
}
