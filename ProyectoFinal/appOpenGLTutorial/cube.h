#ifndef CUBE_H
#define CUBE_H

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include <string>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>

class Cube
{
public:
    Cube();
    void init();
    void draw();

private:
    GLuint VAO, VBO;

    float cubo[108] = {
         -2.0f,  2.0f, -2.0f, -2.0f, -2.0f, -2.0f,  2.0f, -2.0f, -2.0f,
          2.0f, -2.0f, -2.0f,  2.0f,  2.0f, -2.0f, -2.0f,  2.0f, -2.0f,
          2.0f, -2.0f, -2.0f,  2.0f, -2.0f,  2.0f,  2.0f,  2.0f, -2.0f,
          2.0f, -2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  2.0f, -2.0f,
          2.0f, -2.0f,  2.0f, -2.0f, -2.0f,  2.0f,  2.0f,  2.0f,  2.0f,
         -2.0f, -2.0f,  2.0f, -2.0f,  2.0f,  2.0f,  2.0f,  2.0f,  2.0f,
         -2.0f, -2.0f,  2.0f, -2.0f, -2.0f, -2.0f, -2.0f,  2.0f,  2.0f,
         -2.0f, -2.0f, -2.0f, -2.0f,  2.0f, -2.0f, -2.0f,  2.0f,  2.0f,
         -2.0f, -2.0f,  2.0f,  2.0f, -2.0f,  2.0f,  2.0f, -2.0f, -2.0f,
          2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f, -2.0f,  2.0f,
         -2.0f,  2.0f, -2.0f,  2.0f,  2.0f, -2.0f,  2.0f,  2.0f,  2.0f,
          2.0f,  2.0f,  2.0f, -2.0f,  2.0f,  2.0f, -2.0f,  2.0f, -2.0f
        };
};

#endif // CUBE_H
