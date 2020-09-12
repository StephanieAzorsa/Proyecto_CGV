#include "cube.h"
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

Cube::Cube() {
    init(48);
}

Cube::Cube(int prec) {
    init(prec);
}

//float Cube::toRadians(float degrees) { return (degrees * 2.0f * 3.14159f) / 360.0f; }

void Cube::init(int prec) {
  /*  numVertices = (prec + 1) * (prec + 1);
    numIndices = prec * prec * 6;
    for (int i = 0; i < numVertices; i++) { vertices.push_back(QVector3D()); }
    for (int i = 0; i < numVertices; i++) { texCoords.push_back(QVector2D()); }
    for (int i = 0; i < numVertices; i++) { normals.push_back(QVector3D()); }
    for (int i = 0; i < numVertices; i++) { tangents.push_back(QVector3D()); }
    for (int i = 0; i < numIndices; i++) { indices.push_back(0); }

    // calculate triangle vertices
    for (int i = 0; i <= prec; i++) {
        for (int j = 0; j <= prec; j++) {
            float y = (float)cos(toRadians(180.0f - i * 180.0f / prec));
            float x = -(float)cos(toRadians(j*360.0f / prec))*(float)abs(cos(asin(y)));
            float z = (float)sin(toRadians(j*360.0f / (float)(prec)))*(float)abs(cos(asin(y)));
            vertices[i*(prec + 1) + j] = QVector3D(2.5*x, 2.5*y, 2.5*z);
            texCoords[i*(prec + 1) + j] = QVector2D(((float)j / prec), ((float)i / prec));
            normals[i*(prec + 1) + j] = QVector3D(x, y, z);

            // calculate tangent vector
            if (((x == 0) && (y == 1) && (z == 0)) || ((x == 0) && (y == -1) && (z == 0))) {
                tangents[i*(prec + 1) + j] = QVector3D(0.0f, 0.0f, -1.0f);
            }
            else {
                tangents[i*(prec + 1) + j] = QVector3D::crossProduct(QVector3D(0.0f, 1.0f, 0.0f), QVector3D(x, y, z));
            }
        }
    }
    // calculate triangle indices
    for (int i = 0; i<prec; i++) {
        for (int j = 0; j<prec; j++) {
            indices[6 * (i*prec + j) + 0] = i*(prec + 1) + j;
            indices[6 * (i*prec + j) + 1] = i*(prec + 1) + j + 1;
            indices[6 * (i*prec + j) + 2] = (i + 1)*(prec + 1) + j;
            indices[6 * (i*prec + j) + 3] = i*(prec + 1) + j + 1;
            indices[6 * (i*prec + j) + 4] = (i + 1)*(prec + 1) + j + 1;
            indices[6 * (i*prec + j) + 5] = (i + 1)*(prec + 1) + j;
        }
    }*/
}

int Cube::getNumVertices() { return numVertices; }
int Cube::getNumIndices() { return numIndices; }
vector<int> Cube::getIndices() { return indices; }
vector<QVector3D> Cube::getVertices() { return vertices; }
vector<QVector2D> Cube::getTexCoords() { return texCoords; }
vector<QVector3D> Cube::getNormals() { return normals; }
vector<QVector3D> Cube::getTangents() { return tangents; }
