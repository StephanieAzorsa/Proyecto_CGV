#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();




private slots:
    void on_hsldRotateX_actionTriggered(int action);

    void on_hsldRotateY_actionTriggered(int action);

    void on_hsldRotateZ_actionTriggered(int action);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
