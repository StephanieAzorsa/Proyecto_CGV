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

void Cube::init(int prec) {
//Acá se deben crear todos puntos para generar el cubito
}

int Cube::getNumVertices() { return numVertices; }
int Cube::getNumIndices() { return numIndices; }
vector<int> Cube::getIndices() { return indices; }
vector<QVector3D> Cube::getVertices() { return vertices; }
vector<QVector2D> Cube::getTexCoords() { return texCoords; }
vector<QVector3D> Cube::getNormals() { return normals; }
vector<QVector3D> Cube::getTangents() { return tangents; }
