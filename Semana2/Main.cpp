#include "Mochila.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "--- CREANDO OBJETO REAL (INSTANCIACION) ---" << endl;
    
    // Instanciamos una mochila negra de 25 litros con 4 compartimentos
    Mochila miMochila("Negra", 25, 4);

    // Intentamos guardar algo estando cerrada para ver el encapsulamiento y las reglas
    miMochila.mostrarEstado();
    miMochila.guardarObjeto(); 

    cout << "\n--- Interactuando con el objeto ---" << endl;
    // Ahora la abrimos y metemos cosas
    miMochila.abrirMochila();
    miMochila.guardarObjeto();
    miMochila.guardarObjeto();

    // Volvemos a cerrar y revisamos el estado final
    miMochila.cerrarMochila();
    miMochila.mostrarEstado();

    return 0;
}
