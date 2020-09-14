#ifndef TORUS_H
#define TORUS_H
#include <cmath>
#include <vector>
#include <QVector3D>
#include <QMatrix4x4>
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>

#include <QVector2D>
#include<string>
using namespace std;
class Torus
{
private:
    int numVertices;
    int numIndices;
    int prec;
    float inner;
    float outer;
    std::vector<int> indices;
    std::vector<QVector3D>vertices;
    std::vector<QVector2D> texCoords;
    std::vector<QVector3D> normals;
    std::vector<QVector3D> sTangents;
    std::vector<QVector3D> tTangents;
    void init();
    //QMatrix4x4 rMat;

    float toRadians(float degrees);
public:

    Torus();
    Torus(float innerRadius, float outerRadius, int prec);
    int getNumVertices();
    int getNumIndices();
    std::vector<int> getIndices();
    std::vector<QVector3D> getVertices();
    std::vector<QVector2D> getTexCoords();
    std::vector<QVector3D> getNormals();
    std::vector<QVector3D> getStangents();
    std::vector<QVector3D> getTtangents();
};
#endif // TORUS_H
