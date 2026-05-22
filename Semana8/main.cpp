#include "Producto.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "--- INICIA EL PROGRAMA PRINCIPAL ---" << endl << endl;

    // 1. Creamos un producto. Aquí se va a activar el Constructor automáticamente.
    Producto prod1("Teclado Mecanico", 1250.50, 15);
    prod1.mostrarDatos();
    
    // Modificamos un valor
    prod1.modificarPrecio(1199.99);
    prod1.mostrarDatos();

    cout << endl << "--- CREANDO UN OBJETO DENTRO DE UN BLOQUE LOCAL ---" << endl;
    {
        // Esto es un bloque aislado. Todo lo que crees aquí adentro, muere al llegar a la llave de cierre.
        Producto prod2("Mouse Gamer", 650.00, 30);
        prod2.mostrarDatos();
        
        cout << "Saliendo del bloque local..." << endl;
    } // <- JUSTO AQUÍ se activa el destructor de prod2 porque "muere" su zona de vida.

    cout << endl << "--- EL PROGRAMA VA A TERMINAR ---" << endl;
    // Al salir del main(), prod1 también va a morir y verás su destructor en consola.
    return 0;
}
