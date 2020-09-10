#ifndef SPHERE_H_
#define SPHERE_H_

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include<string>

using namespace std;

class Sphere
{
private:
    int numVertices;
    int numIndices;
    vector<int> indices;
    vector<QVector3D> vertices;
    vector<QVector2D> texCoords;
    vector<QVector3D> normals;
    vector<QVector3D> tangents;
    void init(int);
    float toRadians(float degrees);

public:
    Sphere();
    Sphere(int prec);
    int getNumVertices();
    int getNumIndices();
    vector<int> getIndices();
    vector<QVector3D> getVertices();
    vector<QVector2D> getTexCoords();
    vector<QVector3D> getNormals();
    vector<QVector3D> getTangents();
};
#endif /* SPHERE_H_ */
