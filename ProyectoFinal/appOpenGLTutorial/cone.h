#ifndef CONE_H
#define CONE_H


//Puntos extraidos de cone obj
#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include <string>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
class Cone
{
public:
    Cone();
    void init();
    void draw();
    void drawCone(const QVector3D &d, const QVector3D &a,
                  const qreal h, const qreal rd, const int n);
    QVector3D perp(const QVector3D &v);
    float toRadians(float degree);
    std::vector<float> pvalues; //Se guarda los verdices retornados
private :
    GLuint VAO5, VBO5;
//s34*3


};

#endif// CONE_H
