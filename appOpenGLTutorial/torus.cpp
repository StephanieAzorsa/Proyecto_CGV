#include <cmath>
#include <vector>
#include <iostream>
#include <QMatrix4x4>
#include <QVector4D>
#include "torus.h"
using namespace std;
Torus::Torus() {
    prec = 48;
    inner = 0.8f;
    outer = 0.4f;
    init();
}
Torus::Torus(float innerRadius, float outerRadius, int precIn) {
    prec = precIn;
    inner = innerRadius;
    outer = outerRadius;
    init();
}
float Torus::toRadians(float degrees) { return (degrees * 2.0f * 3.14159f) / 360.0f; }

void Torus::init() {
    numVertices = (prec + 1) * (prec + 1);
        numIndices = prec * prec * 6;
        for (int i = 0; i < numVertices; i++) { vertices.push_back(QVector3D()); }
        for (int i = 0; i < numVertices; i++) { texCoords.push_back(QVector2D()); }
        for (int i = 0; i < numVertices; i++) { normals.push_back(QVector3D()); }
        for (int i = 0; i < numVertices; i++) { sTangents.push_back(QVector3D()); }
        for (int i = 0; i < numVertices; i++) { tTangents.push_back(QVector3D()); }
        for (int i = 0; i < numIndices; i++) { indices.push_back(0); }

        // calculate first ring
        for (int i = 0; i < prec + 1; i++) {
            float amt = toRadians(i*360.0f / prec);

            QMatrix4x4 rMat;
            //rMat.setToIdentity();
            rMat.rotate(amt, QVector3D(0.0f, 0.0f, 1.0f));
            QVector3D initPos(rMat * QVector4D(outer, 0.0f, 0.0f, 1.0f));

            vertices[i] = QVector3D(initPos + QVector3D(inner, 0.0f, 0.0f));
            //vertices[i].setX(vertices[i].x()*2.5f);
            //vertices[i].setY(vertices[i].y()*2.5f);
            //vertices[i].setZ(vertices[i].z()*2.5f);
            texCoords[i] = QVector2D(0.0f, ((float)i / (float)prec));

            //rMat = glm::rotate(glm::mat4(1.0f), amt, QVector3D(0.0f, 0.0f, 1.0f));
            //tTangents[i] = QVector3D(rMat * glm::vec4(0.0f, -1.0f, 0.0f, 1.0f));

            sTangents[i] = QVector3D(QVector3D(0.0f, 0.0f, -1.0f));
            //normals[i] = glm::cross(tTangents[i], sTangents[i]);
        }
        // rotate the first ring about Y to get the other rings
        for (int ring = 1; ring < prec + 1; ring++) {
            for (int i = 0; i < prec + 1; i++) {
                float amt = (float)toRadians((float)ring * 360.0f / (prec));

                QMatrix4x4 rMat;
                //rMat.setToIdentity();
                rMat.rotate(amt, QVector3D(0.0f, 1.0f, 0.0f));
                vertices[ring*(prec + 1) + i] = QVector3D(rMat * QVector4D(vertices[i], 1.0f));
                //vertices[ring*(prec + 1) + i].setX(vertices[ring*(prec + 1) + i].x()*2.5f);
                 //vertices[ring*(prec + 1) + i].setY(vertices[ring*(prec + 1) + i].y()*2.5f);
                  //vertices[ring*(prec + 1) + i].setZ(vertices[ring*(prec + 1) + i].z()*2.5f);

                //texCoords[ring*(prec + 1) + i] = glm::vec2((float)ring*2.0f / (float)prec, texCoords[i].t);
                //if (texCoords[ring*(prec + 1) + i].s > 1.0) texCoords[ring*(prec+1)+i].s -= 1.0f;

                //rMat = glm::rotate(glm::mat4(1.0f), amt, glm::vec3(0.0f, 1.0f, 0.0f));
                //sTangents[ring*(prec + 1) + i] = glm::vec3(rMat * glm::vec4(sTangents[i], 1.0f));

                //rMat = glm::rotate(glm::mat4(1.0f), amt, glm::vec3(0.0f, 1.0f, 0.0f));
                //tTangents[ring*(prec + 1) + i] = glm::vec3(rMat * glm::vec4(tTangents[i], 1.0f));

                //rMat = glm::rotate(glm::mat4(1.0f), amt, glm::vec3(0.0f, 1.0f, 0.0f));
                //normals[ring*(prec + 1) + i] = glm::vec3(rMat * glm::vec4(normals[i], 1.0f));
            }
        }
        // calculate triangle indices
        for (int ring = 0; ring < prec; ring++) {
            for (int i = 0; i < prec; i++) {
                indices[((ring*prec + i) * 2) * 3 + 0] = ring*(prec + 1) + i;
                indices[((ring*prec + i) * 2) * 3 + 1] = (ring + 1)*(prec + 1) + i;
                indices[((ring*prec + i) * 2) * 3 + 2] = ring*(prec + 1) + i + 1;
                indices[((ring*prec + i) * 2 + 1) * 3 + 0] = ring*(prec + 1) + i + 1;
                indices[((ring*prec + i) * 2 + 1) * 3 + 1] = (ring + 1)*(prec + 1) + i;
                indices[((ring*prec + i) * 2 + 1) * 3 + 2] = (ring + 1)*(prec + 1) + i + 1;
            }
        }
        initialize();
}
// accessors for the torus indices and vertices
int Torus::getNumVertices() { return numVertices; }
int Torus::getNumIndices() { return numIndices; }
std::vector<int> Torus::getIndices() { return indices; }
std::vector<QVector3D> Torus::getVertices() { return vertices; }
std::vector<QVector2D> Torus::getTexCoords() { return texCoords; }
std::vector<QVector3D> Torus::getNormals() { return normals; }
std::vector<QVector3D> Torus::getStangents() { return sTangents; }
std::vector<QVector3D> Torus::getTtangents() { return tTangents; }

void Torus::initialize() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    std::vector<float> pvalues; //Se guarda los verdices retornados

    std::vector<int> ind = indices; //Se obtiene el arreglo de indices de los vértices de la esfera
    std::vector<QVector3D> vert = vertices; //Retorna todos los puntos de la esfera en un arreglo de 3
    //std::vector<float> pvalues; //Se guarda los verdices retornados

    //int numIndices = sphere->getNumIndices(); //Obtiene el número de índices, el tamaño, la cantidad
    //int numIndices = sphere->getNumIndices();

  //  qWarning( "Halp" + numIndices);
    //Para obtener los puntos de los vectores en 3D y guardar cada punto en un arreglo de tipo float
    for (int i = 0; i < numIndices; i++) {
        pvalues.push_back((vert[ind[i]]).x());
        pvalues.push_back((vert[ind[i]]).y());
        pvalues.push_back((vert[ind[i]]).z());
    }


    f->glGenVertexArrays(1,&VAO3); // parámetros: (#VAOs, VAOs)
    f->glBindVertexArray(VAO3); //Enlaza el VAO

    //f->glGenBuffers(1,VBOs);
    f->glGenBuffers(1,&VBO3);
    //VAOs for SPHERE

    f->glBindBuffer(GL_ARRAY_BUFFER,VBO3); //Enlaza el VBO

    //Se especifica el tamaño y se manda como parámetro el tamaño y la cantidad
    //total de puntos al buffer de datos
    f->glBufferData(GL_ARRAY_BUFFER,pvalues.size()*4, &pvalues[0], GL_STATIC_DRAW);

    //Describe cómo se distribuyen los datos, ya que los datos están vinculados a GL_ARRAY_BUFFER
    //y este descriptor se guarda en nuestra matriz de vértices
    f->glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);



    //habilita el índice de atributo para el atributo de posición.
    //Si el atributo no está habilitado, no se utilizará durante el renderizado.
    f->glEnableVertexAttribArray(0); //0: Indice de los vértices, 1: colores, se definen los demás, ejm: 2: textura, 3:normal

}

void Torus::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glBindVertexArray(VAO3);
    f->glDrawArrays(GL_TRIANGLES, 0, numIndices);
}
