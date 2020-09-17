#ifndef CYLINDER_H
#define CYLINDER_H

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include <string>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>

class Cylinder {
public:
    Cylinder();
    //~Cylinder() {};

    void draw() ;
    void init();
    void drawNormal();
    std::vector<float> pvalues; //Se guarda los verdices retornados

private:
    GLuint VAO, VBO;
    void drawTriangles();
    void drawNormals();
};
#endif
