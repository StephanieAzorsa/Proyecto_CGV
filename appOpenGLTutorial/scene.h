#ifndef SCENE_H
#define SCENE_H


#include <QKeyEvent>
#include "Triangle.h"
#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_3_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include "sphere.h"

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

private:
    unsigned int VBOs[1],VAOs[1];
    Sphere *sphere;

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
};

#endif // SCENE_H
