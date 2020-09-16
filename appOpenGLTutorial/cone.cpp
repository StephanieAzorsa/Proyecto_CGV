#include "cone.h"

Cone::Cone()
{
 drawCone(QVector3D(0.0f,1.0f,0.0f),QVector3D(0.5f, 0.5f, 0.5f),15.0f, 5.0f, 8);
 //RenderCone(new Vector3(0.0f, 1.0f, 0.0f), new Vector3(1.0f, 1.0f, 1.0f), 20.0f, 10.0f, 8);
}
float Cone::toRadians(float degrees) { return (degrees * 2.0f * 3.14159f) / 360.0f; }

void Cone::drawCone(const QVector3D &d, const QVector3D &a,
                    const qreal h, const qreal rd, const int n){

    // note: qreal is a typedef of either float or double

        QVector3D c = a + (-d * h);
        QVector3D e0 = perp(d);
        QVector3D e1 = QVector3D::crossProduct(e0, d);
        qreal angInc = toRadians(360.0 / n);

        // calculate points around directrix
        QVector<QVector3D> pts;
        for (int i = 0; i < n; ++i) {
            qreal rad = angInc * i;
            QVector3D p = c + (((e0 * cos(rad)) + (e1 * sin(rad))) * rd);
            pts.push_back(p);
        }

        // draw cone top



        pvalues.push_back(a.x());
        pvalues.push_back(a.y());
        pvalues.push_back(a.z());

        for (int i = 0; i < n; ++i) {
            pvalues.push_back(pts[i].x());
            pvalues.push_back(pts[i].y());
            pvalues.push_back(pts[i].z());
        }


       // glBegin(GL_TRIANGLE_FAN);
       // glVertex3f(a.x(), a.y(), a.z());
        //for (int i = 0; i < n; ++i) {
          //  glVertex3f(pts[i].x(), pts[i].y(), pts[i].z());
        //}
        //glEnd();

        // draw cone bottom
        //glBegin(GL_TRIANGLE_FAN);
       // glVertex3f(c.x(), c.y(), c.z());
        pvalues.push_back(c.x());
        pvalues.push_back(c.y());
        pvalues.push_back(c.z());
        for (int i = n-1; i >= 0; --i) {
            pvalues.push_back(pts[i].x());
            pvalues.push_back(pts[i].y());
            pvalues.push_back(pts[i].z());
        }
        pvalues.push_back(pts[n-1].x());
         pvalues.push_back(pts[n-1].y());
          pvalues.push_back(pts[n-1].z());
        // GL.Vertex3(pts[n-1]);
       // glEnd();

        init();

}
QVector3D Cone::perp(const QVector3D &v){

        qreal min = fabs(v.x());
        QVector3D cardinalAxis(1, 0, 0);

        if (fabs(v.y()) < min) {
            min = fabs(v.y());
            cardinalAxis = QVector3D(0, 1, 0);
        }

        if (fabs(v.z()) < min) {
            cardinalAxis = QVector3D(0, 0, 1);
        }

        return QVector3D::crossProduct(v, cardinalAxis);

}

void Cone::init() {


    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
    f->glGenVertexArrays(1, &VAO5);
    f->glBindVertexArray(VAO5);
    f->glGenBuffers(1, &VBO5);
    f->glBindBuffer(GL_ARRAY_BUFFER, VBO5);
    f->glBufferData(GL_ARRAY_BUFFER, pvalues.size()*4, &pvalues[0], GL_STATIC_DRAW);
    f->glVertexAttribPointer(0,3,GL_FLOAT,GL_FALSE,3*sizeof(float),(void*)0);

    f->glEnableVertexAttribArray(0);
}

void Cone::draw() {
    QOpenGLFunctions_4_0_Core *f = QOpenGLContext::currentContext()->versionFunctions<QOpenGLFunctions_4_0_Core>();
  f->glBindVertexArray(VAO5);
    f->glDrawArrays(GL_TRIANGLE_FAN, 0,110);
}
