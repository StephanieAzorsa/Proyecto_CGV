#include <QMatrix4x4>
#include "scene.h"
//Hola
//Muestra la ventana de OpenGl donde se dibuja, es la escena donde se muestra las formas

//Cconstructor que hereda las características de OpenGL
Scene::Scene( QWidget *parent ) : QOpenGLWidget( parent )
{
    this->setFocusPolicy( Qt::StrongFocus );
    sphere = new Sphere(25); //Se instancia un objeto de la clase esfera
}

//Destructor de la clase
Scene::~Scene()
{
    delete m_triangle;
    delete sphere;
}

//Sirve para realizar la inicialización de recursos OpenGL
void Scene::initializeGL()
{
    //Esta clase es un contenedor para funciones del perfil principal de OpenGL 4.3
    //Devuelve un puntero a un objeto que proporciona acceso a todas las funciones
    //para la versión y perfil en el contexto actual(currentContext).
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();

    //f-> es un operador para el acceso de miembros de un objeto,
    //    en este caso se esta accediendo a funciones de OpenGl 4.3
    f->glClearColor( 0.1f, 0.1f, 0.2f, 1.0f ); //Da el color a la ventana
    f->glGenVertexArrays(1,VAOs); // parámetros: (#VAOs, VAOs)
    f->glGenBuffers(1,VBOs);

    std::vector<int> ind = sphere->getIndices(); //Se obtiene el arreglo de indices de los vértices de la esfera
    std::vector<QVector3D> vert = sphere->getVertices(); //Retorna todos los puntos de la esfera en un arreglo de 3
    std::vector<float> pvalues; //Se guarda los verdices retornados

    int numIndices = sphere->getNumIndices(); //Obtiene el número de índices, el tamaño, la cantidad
    //Para obtener los puntos de los vectores en 3D y guardar cada punto en un arreglo de tipo float
    for (int i = 0; i < numIndices; i++) {
        pvalues.push_back((vert[ind[i]]).x());
        pvalues.push_back((vert[ind[i]]).y());
        pvalues.push_back((vert[ind[i]]).z());
    }

    //VAOs for SPHERE
    f->glBindVertexArray(VAOs[0]); //Enlaza el VAO
    f->glBindBuffer(GL_ARRAY_BUFFER,VBOs[0]); //Enlaza el VBO

    //Se especifica el tamaño y se manda como parámetro el tamaño y la cantidad
    //total de puntos al buffer de datos
    f->glBufferData(GL_ARRAY_BUFFER,pvalues.size()*4, &pvalues[0], GL_STATIC_DRAW);

    //Describe cómo se distribuyen los datos, ya que los datos están vinculados a GL_ARRAY_BUFFER
    //y este descriptor se guarda en nuestra matriz de vértices
    f->glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);

    //habilita el índice de atributo para el atributo de posición.
    //Si el atributo no está habilitado, no se utilizará durante el renderizado.
    f->glEnableVertexAttribArray(0); //0: Indice de los vértices, 1: colores, se definen los demás, ejm: 2: textura, 3:normal

    /**/
    //QOpenGLShader y QOpenGLShaderProgram protejen al programador de los detalles de compilar y vincular shaders y fragmentos*/
    QOpenGLShader vShader( QOpenGLShader::Vertex ); //Admite programas de shader, escritos en el lenguje GLSL
    vShader.compileSourceFile( ":/shaders/vShader.glsl" );

    QOpenGLShader fShader( QOpenGLShader::Fragment );
    fShader.compileSourceFile( ":/shaders/fShader.glsl" );

    m_program.addShader( &vShader ); //Agrega un sahder compilado a este programa, método booleano
    m_program.addShader( &fShader ); //devuelve true y se puede agregar el shader o falso en caso contrario

    //Sirve para enlazar shaders
    //bool QOpenGLShaderProgram :: link (), Vincula los shaders que se agregaron a este programa con addShader ().
    //Devuelve truesi el enlace fue exitoso o falso en caso contrario.
    //Si el enlace falló, los mensajes de error se pueden recuperar con log ().
    if ( !m_program.link() )
    {
        qWarning( "Error: unable to link a shader program." );
        return;
    }
    /**/

    //attributeLocation: Devuelve la ubicación del nombre del atributo dentro de la lista de parámetros de este programa de shaders.
    //Devuelve -1 si el nombre no es un atributo válido para este programa de sombreado.
    m_vertexAttr = m_program.attributeLocation( "vertexAttr" ); //vertexAttr nombre del atributo dentro de la lista de parámetros del archivo VertexShader
    //m_colorAttr = m_program.attributeLocation( "colorAttr" ); //manda e atributo para los colores

    //uniformLocation: devuelve la locación del nombre de la variabe uniforme dentro de la lista de parámetros de este programa
    //devuelve -1, si la variable no fue encontrada
    m_matrixUniform = m_program.uniformLocation( "matrix" );

    //Se instancia un objeto de la clase Triangle
    //m_triangle = new Triangle( &m_program, m_vertexAttr, m_colorAttr );
}

//Renderiza las imágenes o formas
void Scene::paintGL()
{
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glClear( GL_COLOR_BUFFER_BIT );

    //bind: vincula el programa de shader al contexto actual, y lo convierte al porgrama de shader actual
    //Es equivalente a llamar al glUseProgram()
    if ( !m_program.bind() )
        return;

    QMatrix4x4 matrix; //se declara la matrix

    matrix.ortho( -8.0f, 8.0f, -8.0f, 8.0f, 8.0f, -8.0f ); //Para la cámara
    matrix.translate( 0.0f, 0.0f, 0.0f ); //Mover la forma renderizada al origen
    //matrix.perspective();

    //Para las rotaciones en el eje x, y, z
    matrix.rotate(float(rotateX), 1.0f, 0.0f, 0.0f);
    matrix.rotate(float(rotateY), 0.0f, 1.0f, 0.0f);
    matrix.rotate(float(rotateZ), 0.0f, 0.0f, 1.0f);

    //setUniformValue: establece la variable uniform en la ubicación en el contexto actual
    m_program.setUniformValue( m_matrixUniform, matrix ); //Permite la asignación de las operaciones de transformación y asignarlas al shader

    //m_triangle->draw();
    f->glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); //controla la interpretación de polígonos, la forma en que se muestra el renderizado, en este caso un renderizado de líneas
    f->glBindVertexArray(VAOs[0]);
    f->glDrawArrays(GL_TRIANGLES, 0, sphere->getNumIndices());

    m_program.release(); //libera el programa del shader activo del contexto actual
}

//Sirve para configurar las matrices de transformación y otros recursos dependientes del tamaño de la ventana
void Scene::resizeGL( int w, int h )
{
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();

    f->glViewport( 0, 0, w, h ); //Marca la región sobre la cual se quiere dibujar nuestras formas
    //Tiene como parámetro las dimensiones de la ventada donde se va a dibujar diferentes escenas de un mismo objeto
    //o con un mismo objeto
}

//Mueve el triangulo en las 4 direcciones con las teclas
void Scene::keyPressEvent( QKeyEvent *event )
{
    const float step = 0.1f;

    switch( event->key() )
    {
        case Qt::Key_Up:
            m_triangle->setY0( m_triangle->y0() + step );
            break;
        case Qt::Key_Left:
            m_triangle->setX0( m_triangle->x0() - step );
            break;
        case Qt::Key_Down:
            m_triangle->setY0( m_triangle->y0() - step );
            break;
        case Qt::Key_Right:
            m_triangle->setX0( m_triangle->x0() + step );
            break;
    }
    update();
}

//Métodos de acceso de los atributos privados para realizar las rotaciones, en las 3 direcciones
void Scene::setRotateX(float x){rotateX=x;}
void Scene::setRotateY(float y){rotateY=y;}
void Scene::setRotateZ(float z){rotateZ=z;}
float Scene::getrotateX()const{return rotateX;}
float Scene::getrotateY()const{return rotateY;}
float Scene::getrotateZ()const{return rotateZ;}
