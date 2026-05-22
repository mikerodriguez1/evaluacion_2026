#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
private:
    string nombre; // Atributo de la clase
    int edad;      // Atributo de la clase

public:
    // Constructor
    Persona(string nombre, int edad);

    // Método para mostrar los datos
    void presentarse();
};

#endif
