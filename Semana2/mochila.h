#ifndef MOCHILA_H
#define MOCHILA_H

#include <string>
using namespace std;

class Mochila {
private:
    // Atributos privados protegidos del exterior
    string color;
    int capacidadMaxLitros;
    int numCompartimentos;
    int cantidadObjetosActuales;
    bool estaAbierta;

public:
    // Constructor
    Mochila(string _color, int _capacidad, int _compartimentos);

    // public :)
    void abrirMochila();
    void cerrarMochila();
    void guardarObjeto();
    void mostrarEstado();
};

#endif
