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

class Scene : public QOpenGLWidget
{
public:
    Scene( QWidget *parent = 0 );
    ~Scene();
    void setRotateX(float x);
    void setRotateY(float y);
    void setRotateZ(float z);
    float getRotateX()const;
    void setSegmentX(float x);
    float getSegmentX()const;
    void setSegmentY(float y);
    float getSegmentY()const;
    float getRotateY()const;
    float getRotateZ()const;


    void setScale(float s);
    float getScale()const;

    void setShape(int x);
    int getShape()const;
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );
private:
    unsigned int VBOs[1],VAOs[1];
    //Related to spheres
    Sphere *sphere;



    //void keyPressEvent( QKeyEvent *event );

    Cube *cube;

    Triangle *m_triangle;
    QOpenGLShaderProgram m_program;

    int m_vertexAttr;
    int m_colorAttr;
    int m_matrixUniform;


    float rotateX;
    float rotateY;
    float rotateZ;
    float scale;
    int shape;
};

#endif // SCENE_H
