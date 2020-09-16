#ifndef PYRAMID_H
#define PYRAMID_H

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include <string>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>

class pyramid
{
public:
    pyramid();
    void init();
    void draw();

private:
    GLuint VAO1, VBO1;

    float pyramidPositions[54] =
    { -2.0f, -2.0f, 2.0f,
      2.0f, -2.0f, 2.0f,
      0.0f, 2.0f, 0.0f, // front face
     2.0f, -2.0f, 2.0f,
      2.0f, -2.0f, -2.0f,
      0.0f, 2.0f, 0.0f, // right face
     2.0f, -2.0f, -2.0f,
      -2.0f, -2.0f, -2.0f,
      0.0f, 2.0f, 0.0f, // back face
     -2.0f, -2.0f, -2.0f,
      -2.0f, -2.0f, 2.0f, 0.0f, 2.0f, 0.0f, // left face
     -2.0f, -2.0f, -2.0f, 2.0f, -2.0f, 2.0f, -2.0f, -2.0f, 2.0f, // base – left front
     2.0f, -2.0f, 2.0f, -2.0f, -2.0f, -2.0f, 2.0f, -2.0f, -2.0f // base – right back
    };
};

#endif // PYRAMID_H
