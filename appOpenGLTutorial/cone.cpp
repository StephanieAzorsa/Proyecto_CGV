#include "cone.h"

Cone::Cone()
{
 init();
}
void Cone::init() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glGenVertexArrays(1, &VAO5);
    f->glBindVertexArray(VAO5);

     f->glGenBuffers(1, &EBO);
   f->glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    f->glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    f->glGenBuffers(1, &VBO5);
    f->glBindBuffer(GL_ARRAY_BUFFER, VBO5);
    f->glBufferData(GL_ARRAY_BUFFER, sizeof (cone), cone, GL_STATIC_DRAW);
    f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    f->glEnableVertexAttribArray(0);



    /*
 glGenVertexArrays(1, &m_VAO);
    glBindVertexArray(m_VAO);


    //Creo un EBO
    glGenBuffers(1,&m_EBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    //Creame un buffer para mis vertices
    glGenBuffers(1, &m_VBO);

    //Quiero que sea de tipo GL_ARRAY_BUFFER
    glBindBuffer(GL_ARRAY_BUFFER, m_VBO);

    //Oki, ya que está creado, porfa, copia lo de mi array de vertices al VBO, ojo, estos no cambiarán son estáticos
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


    //Ahora encima le tengo que decir al OpenGL, como conectar los shaders con los datos de los vertices!
    glVertexAttribPointer(
            0,3,GL_FLOAT,GL_FALSE,3 * sizeof(GLfloat),//Cada paquete de info para el vertice, está cada 3
            0//Inicia en el primero del paquete, la lectura
            );

    glEnableVertexAttribArray(0);	// Habilita este atributo "0"

*/
}

void Cone::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glBindVertexArray(VAO5);
    f->glDrawElements(GL_TRIANGLES, 216 //Numero de vertices a dibuujar
                      , GL_UNSIGNED_INT, 0);
}
