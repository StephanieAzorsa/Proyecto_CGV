#ifndef CUBE_H_
#define CUBE_H_

#include <cmath>
#include <vector>
#include <QVector3D>
#include <QVector2D>
#include<string>

using namespace std;

class Cube
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


public:
    Cube();
    Cube(int prec);
    int getNumVertices();
    int getNumIndices();
    vector<int> getIndices();
    vector<QVector3D> getVertices();
    vector<QVector2D> getTexCoords();
    vector<QVector3D> getNormals();
    vector<QVector3D> getTangents();
};
#endif /* CUBE_H_ */
