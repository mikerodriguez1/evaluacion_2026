#include <iostream>
#include <string>
#include "ClaseObjeto.h"

using namespace std;

int main() {
    string m1, mod1, c1, m2, mod2, c2;

    // Pedimos datos de los dos equipos
    cout << "Configurando Celular 1..." << endl;
    cout << "Marca: "; getline(cin, m1);
    cout << "Modelo: "; getline(cin, mod1);
    cout << "Color: "; getline(cin, c1);
    Celular c1_obj(m1, mod1, c1);

    cout << "\nConfigurando Celular 2..." << endl;
    cout << "Marca: "; getline(cin, m2);
    cout << "Modelo: "; getline(cin, mod2);
    cout << "Color: "; getline(cin, c2);
    Celular c2_obj(m2, mod2, c2);

    cout << "\n--- Iniciando pruebas ---\n" << endl;

    // Pruebas Objeto 1
    cout << "Estado inicial del celular 1:" << endl;
    c1_obj.mostrarEstado();
    c1_obj.encender();
    c1_obj.usar(20);
    c1_obj.mostrarEstado();

    // Pruebas Objeto 2
    cout << "Estado del celular 2:" << endl;
    c2_obj.encender();
    c2_obj.cargar(60); // Intento de sobrecarga
    c2_obj.usar(15);
    c2_obj.mostrarEstado();

    return 0;
}
