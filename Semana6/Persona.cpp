#include "Persona.h"
#include <iostream>

using namespace std;

// NOTA: Como el parámetro se llama "nombre" y la variable de la clase también se llama "nombre",
// usamos "this->" para decirle a C++ cuál es cuál.
Persona::Persona(string nombre, int edad) {
    this->nombre = nombre; // "this->nombre" es la variable privada. "nombre" es el parámetro que llegó.
    this->edad = edad;     // "this->edad" es la variable privada. "edad" es el parámetro.
    
    cout << "[SISTEMA]: Objeto instanciado en la direccion de memoria: " << this << endl;
}

void Persona::presentarse() {
    // Aquí puedes usar o no el this, C++ ya entiende, pero ponerlo demuestra que sabes qué es
    cout << "Hola, mi nombre es " << this->nombre << " y tengo " << this->edad << " anos." << endl;
}
