#include "cylinder.h"

Cylinder::Cylinder(){
    drawTriangles();
}
void Cylinder::drawTriangles(){
    int i,j;
    float x, y;
    x = 3.14159f * (2.0f / 20);
    y = 1.0f / 20;


    for(i=0; i<20; i++){
        //top
        //glNormal3f(0.0f, 1.0f, 0.0f);
        //glNormal3D(0.0f, 1.0f, 0.0f);
        //QVector3D(0.0f, 0.5f, 0.0f);
        pvalues.push_back(0.0f*4.0f);
        pvalues.push_back(0.5f*4.0f);
        pvalues.push_back(0.0f*4.0f);

        //QVector3D p = QVector3D(0.5f*cos(i*x), 0.5f, 0.5f*sin(i*x));
        pvalues.push_back(0.5f*cos(i*x)*4.0f);
        pvalues.push_back(0.5f*4.0f);
        pvalues.push_back(0.5f*sin(i*x)*4.0f);

        //QVector3D(0.5f*cos((i+1)*x), 0.5f, 0.5f*sin((i+1)*x));
        pvalues.push_back(0.5f*cos((i+1)*x)*4.0f);
        pvalues.push_back(0.5f*4.0f);
        pvalues.push_back(0.5f*sin((i+1)*x)*4.0f);

        //bottom
        //QNormal3D(0.0f, -1.0f, 0.0f);
        //QVector3D(0.0f, -0.5f, 0.0f);
        pvalues.push_back(0.0f*4.0f);
        pvalues.push_back(-0.5f*4.0f);
        pvalues.push_back(0.0f*4.0f);
        //QVector3D(0.5f*cos(i*x), -0.5f, 0.5f*sin(i*x));
        //QVector3D(0.5f*cos((i+1)*x), -0.5f, 0.5f*sin((i+1)*x));

        for(j=0; j<20; j++){
            //sides
            //glNormal3f(cos((i+0.5f)*x), 0.0f, sin((i+0.5f)*x));
            //QVector3D(0.5f*cos(i*x), -0.5f+j*y, 0.5f*sin(i*x));
            pvalues.push_back(0.5f*cos(i*x)*4.0f);
            pvalues.push_back((-0.5f+j*y)*4.0f);
            pvalues.push_back(0.5f*sin(i*x)*4.0f);
            //QVector3D(0.5f*cos((i+1)*x), -0.5f+j*y, 0.5f*sin((i+1)*x));
            pvalues.push_back(0.5f*cos((i+1)*x)*4.0f);
            pvalues.push_back((-0.5f+j*y)*4.0f);
            pvalues.push_back(0.5f*sin((i+1)*x)*4.0f);
            //QVector3D(0.5f*cos((i+1)*x), -0.5f+(j+1)*y, 0.5f*sin((i+1)*x));
            pvalues.push_back(0.5f*cos((i+1)*x)*4.0f);
            pvalues.push_back((-0.5f+(j+1)*y)*4.0f);
            pvalues.push_back(0.5f*sin((i+1)*x)*4.0f);

            //QVector3D(0.5f*cos(i*x), -0.5f+(j+1)*y, 0.5f*sin(i*x));
            pvalues.push_back(0.5f*cos(i*x)*4.0f);
            pvalues.push_back((-0.5f+(j+1)*y)*4.0f);
            pvalues.push_back(0.5f*sin(i*x)*4.0f);
            //QVector3D(0.5f*cos(i*x), -0.5f+j*y, 0.5f*sin(i*x));
            pvalues.push_back(0.5f*cos(i*x)*4.0f);
            pvalues.push_back((-0.5f+j*y)*4.0f);
            pvalues.push_back(0.5f*sin(i*x)*4.0f);
            //QVector3D(0.5f*cos((i+1)*x), -0.5f+(j+1)*y, 0.5f*sin((i+1)*x));
            pvalues.push_back(0.5f*cos((i+1)*x)*4.0f);
            pvalues.push_back((-0.5f+(j+1)*y)*4.0f);
            pvalues.push_back(0.5f*sin((i+1)*x)*4.0f);
        }
    }
    init();
};

void Cylinder::init() {


    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glGenVertexArrays(1, &VAO);
    f->glBindVertexArray(VAO);
    f->glGenBuffers(1, &VBO);
    f->glBindBuffer(GL_ARRAY_BUFFER, VBO);
    f->glBufferData(GL_ARRAY_BUFFER, pvalues.size()*4, &pvalues[0], GL_STATIC_DRAW);
    f->glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);

    f->glEnableVertexAttribArray(0);
}

void Cylinder::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
  f->glBindVertexArray(VAO);
    f->glDrawArrays(GL_TRIANGLES, 0,13000);
    // f->glDrawArrays(GL_TRIANGLE_FAN, 26,27);
   // f->glDrawArrays(GL_TRIANGLE_FAN, 70,100);
     // f->glDrawArrays(GL_TRIANGLE_FAN, 3,24);
        //f->glDrawArrays(GL_TRIANGLE_FAN, 24,27);
       //  f->glDrawArrays(GL_TRIANGLE_FAN, 27,100);
}
