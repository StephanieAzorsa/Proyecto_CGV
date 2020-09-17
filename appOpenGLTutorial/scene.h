#ifndef SCENE_H
#define SCENE_H

#include <QKeyEvent>
#include "Triangle.h"
#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include "sphere.h"
#include "cube.h"
#include "torus.h"
#include "cylinder.h"
#include "pyramid.h"
#include "cone.h"

class Scene : public QOpenGLWidget
{
public:
    Scene( QWidget *parent = 0 );
    ~Scene();
    void setRotateX(float x);
    void setRotateY(float y);
    void setRotateZ(float z);
    float getrotateX()const;
    float getrotateY()const;
    float getrotateZ()const;

    void setscala(float s);
    float getscala()const;

    void setsegmentoX(int seg);
    void setsegmentoY(int seg);
    int getsegmentoX()const;
    int getsegmentoY()const;

    int figura;

    bool relleno;
    bool transparente;

private:
    unsigned int VBOs[2],VAOs[1];
    Sphere *sphere;
    Cube *cubo;
    Torus *torus;
    pyramid *pyramidx;
    Cylinder * cylinder;
    Cone *cone;
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

    void keyPressEvent( QKeyEvent *event );

    Triangle *m_triangle;

    QOpenGLShaderProgram m_program;

    int m_vertexAttr;
    int m_colorAttr;
    int m_matrixUniform;

    float rotateX;
    float rotateY;
    float rotateZ;

    float scale;

    int segmentoX;
    int segmentoY;
};

#endif // SCENE_H
