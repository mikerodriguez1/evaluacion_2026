#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    double precio;
    int stock;

public:
    // CONSTRUCTOR: Se llama igualito que la clase
    Producto(string _nombre, double _precio, int _stock);

    // DESTRUCTOR: Se llama igual que la clase pero lleva una virgulilla (~) al inicio
    ~Producto();

    // Métodos normales para modificar y mostrar datos
    void mostrarDatos();
    void modificarPrecio(double nuevoPrecio);
};

#endif
