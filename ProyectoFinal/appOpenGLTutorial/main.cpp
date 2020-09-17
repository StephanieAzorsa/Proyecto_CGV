#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //Ejecuta la aplicación, ~hilo
    Widget w; //Ventana principal, donde se crea el diseño (botones...)
    w.show(); //Muestra la ventana
    return a.exec();
}
