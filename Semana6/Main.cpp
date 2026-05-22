#include "Persona.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "--- EMPEZANDO A INSTANCIAR OBJETOS ---" << endl << endl;

    // Instanciar significa crear el objeto real en memoria usando el molde (Clase)
    // Aquí instanciamos dos objetos independientes de la clase Persona
    Persona p1("Juan", 19); 
    p1.presentarse();

    cout << "-----------------------------------------------" << endl;

    Persona p2("Jade", 20);
    p2.presentarse();

    cout << endl << "--- FIN DEL PROGRAMA ---" << endl;
    return 0;
}
