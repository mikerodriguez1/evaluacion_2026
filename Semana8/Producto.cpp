#include "Producto.h"
#include <iostream>

using namespace std;

// Implementación del Constructor
Producto::Producto(string _nombre, double _precio, int _stock) {
    nombre = _nombre;
    precio = _precio;
    stock = _stock;
    // Ponemos este mensaje para avisar en consola cuándo nace el objeto
    cout << "[SISTEMA]: Constructor ejecutado. El producto '" << nombre << "' ha sido creado en memoria." << endl;
}

// Implementación del Destructor
Producto::~Producto() {
    // Ponemos este mensaje para ver exactamente cuándo se destruye
    cout << "[SISTEMA]: Destructor ejecutado. El producto '" << nombre << "' ha salido de scope y fue liberado." << endl;
}

// Mostrar los datos en pantalla
void Producto::mostrarDatos() {
    cout << "-> Producto: " << nombre << " | Precio: $" << precio << " | Stock: " << stock << " unidades." << endl;
}

// Modificar valores
void Producto::modificarPrecio(double nuevoPrecio) {
    precio = nuevoPrecio;
    cout << "[UPDATE]: El precio de " << nombre << " cambio a $" << precio << endl;
}
