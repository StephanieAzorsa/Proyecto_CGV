#ifndef MODELIMPORTER_H_
#define MODELIMPORTER_H_
#include <fstream>
#include <sstream>
#include <vector>
class ModelImporter
{
    private:
        // values as read in from OBJ file
        std::vector<float> vertVals;
        std::vector<float> stVals;
        std::vector<float> normVals;
        // values stored for later use as vertex attributes
        std::vector<float> triangleVerts;
        std::vector<float> textureCoords;
        std::vector<float> normals;
    public:
        ModelImporter();
        void parseOBJ(const char* filePath);
        int getNumVertices();
        std::vector<float> getVertices();
        std::vector<float> getTextureCoordinates();
        std::vector<float> getNormals();
};

#endif // MODELIMPORTER_H
/*
 * Antes de describir el código en nuestro importador de OBJ simple,
 debemos advertir al lector de sus limitaciones:
 Solo admite modelos que incluyen los tres campos de atributos de caras.
 Es decir, las posiciones de los vértices, las coordenadas de textura y
 las normales deben estar presentes y en la forma: f # / # / # # / # / # # / # / #.
 La etiqueta de material se ignora; la textura se debe realizar utilizando
 los métodos descritos en el Capítulo 5.
 Solo se admiten los modelos OBJ compuestos por una única malla triangular
 (el formato OBJ admite modelos compuestos, pero nuestro importador simple no).
 Supone que los elementos de cada línea están separados exactamente por un espacio.

Si tiene un modelo OBJ que no satisface todos los criterios anteriores
y desea importarlo usando el cargador simple en el Programa 6.3, aún
puede ser factible hacerlo. A menudo es posible cargar un modelo de este
tipo en Blender y luego exportarlo a otro archivo OBJ que se adapte a las
limitaciones del cargador. Por ejemplo, si el modelo no incluye vectores normales,
es posible que Blender produzca vectores normales mientras exporta el archivo OBJ revisado.
Otra limitación de nuestro cargador OBJ tiene que ver con la indexación.
Observe en las descripciones anteriores que la etiqueta "cara" permite la posibilidad
de mezclar y combinar posiciones de vértices, coordenadas de textura y vectores normales.
Por ejemplo, dos filas de "caras" diferentes pueden incluir índices que apuntan a la misma
entrada v, pero diferentes entradas vt.
Desafortunadamente, el mecanismo de indexación de OpenGL no admite este nivel
de flexibilidad; las entradas de índice en OpenGL solo pueden apuntar a un vértice
particular junto con sus atributos. Esto complica un poco la escritura de un cargador
de modelos OBJ, ya que no podemos simplemente copiar las referencias en las entradas de
la cara del triángulo en una matriz de índice. Más bien, el uso de la indexación de OpenGL
requeriría asegurarse de que las combinaciones completas de valores v, vt y vn para una
entrada facial tengan cada una sus propias referencias en la matriz de índice. Una alternativa
más simple, aunque menos eficiente, es crear un nuevo vértice para cada entrada de la cara del
triángulo. Optamos por este enfoque más simple aquí en aras de la claridad, a pesar de la
ventaja de ahorrar espacio de usar la indexación OpenGL (especialmente cuando se cargan modelos más grandes).
 *
 *
 * */
