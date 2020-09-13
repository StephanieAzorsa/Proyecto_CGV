#include "pyramid.h"

pyramid::pyramid()
{
    init();
}

void pyramid::init() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glGenVertexArrays(1, &VAO1);
    f->glBindVertexArray(VAO1);
    f->glGenBuffers(1, &VBO1);
    f->glBindBuffer(GL_ARRAY_BUFFER, VBO1);
    f->glBufferData(GL_ARRAY_BUFFER, sizeof (pyramidPositions), pyramidPositions, GL_STATIC_DRAW);
    f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    f->glEnableVertexAttribArray(0);
}

void pyramid::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glBindVertexArray(VAO1);
    f->glDrawArrays(GL_TRIANGLES, 0, 18);
}
