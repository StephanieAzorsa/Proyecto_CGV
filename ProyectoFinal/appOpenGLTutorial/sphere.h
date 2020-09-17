#ifndef SPHERE_H_
#define SPHERE_H_

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include<string>

class Sphere
{
private:
    int numVertices;
    int numIndices;
    std::vector<int> indices;
    std::vector<QVector3D> vertices;
    std::vector<QVector2D> texCoords;
    std::vector<QVector3D> normals;
    std::vector<QVector3D> tangents;
    void init(int);
    float toRadians(float degrees);

public:
    Sphere();
    Sphere(int prec);
    int getNumVertices();
    int getNumIndices();
    std::vector<int> getIndices();
    std::vector<QVector3D> getVertices();
    std::vector<QVector2D> getTexCoords();
    std::vector<QVector3D> getNormals();
    std::vector<QVector3D> getTangents();
};
#endif /* SPHERE_H_ */
