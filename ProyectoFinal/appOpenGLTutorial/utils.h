#ifndef UTILS_H
#define UTILS_H
#include <QOpenGLFunctions_4_0_Core>
#include <QOpenGLContext>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>
#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>

// Include standard headers
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


#include <string>
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

class Utils
{
private:
    static std::string readShaderFile(const char* filePath);
    static void printShaderLog(GLuint shader);
    static void printProgramLog(int prog);
    static GLuint prepareShader(int shaderTYPE, const char* shaderPath);
    static int finalizeShaderProgram(GLuint sprogram);

public:
    Utils();
    static bool checkOpenGLError();
    static GLuint createShaderProgram(const char* vp, const char* fp);
    static GLuint createShaderProgram(const char* vp, const char* gp, const char* fp);
    static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, const char* fp);
    static GLuint createShaderProgram(const char* vp, const char* tCS, const char* tES, char* gp, const char* fp);
    static GLuint loadTexture(const char* texImagePath);
    static GLuint loadCubeMap(const char* mapDir);

    static float* goldAmbient();
    static float* goldDiffuse();
    static float* goldSpecular();
    static float goldShininess();

    static float* silverAmbient();
    static float* silverDiffuse();
    static float* silverSpecular();
    static float silverShininess();

    static float* bronzeAmbient();
    static float* bronzeDiffuse();
    static float* bronzeSpecular();
    static float bronzeShininess();

};

#endif /* UTILS_H_ */
