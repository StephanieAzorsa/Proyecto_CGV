#include "cube.h"

Cube::Cube()
{
    init();
}

void Cube::init() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glGenVertexArrays(1, &VAO);
    f->glBindVertexArray(VAO);
    f->glGenBuffers(1, &VBO);
    f->glBindBuffer(GL_ARRAY_BUFFER, VBO);
    f->glBufferData(GL_ARRAY_BUFFER, sizeof (cubo), cubo, GL_STATIC_DRAW);
    f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    f->glEnableVertexAttribArray(0);
}

void Cube::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glBindVertexArray(VAO);
    f->glDrawArrays(GL_TRIANGLES, 0, 36);
}
