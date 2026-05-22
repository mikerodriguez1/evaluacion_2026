#include "Estudiante.h"
#include <iostream>

using namespace std;

// El constructor guarda los datos del alumno y arranca las notas en 0
Estudiante::Estudiante(string _nombre, int _matricula) {
    nombre = _nombre;
    matricula = _matricula;
    calificacion1 = 0.0;
    calificacion2 = 0.0;
}

// Implementación del método con parámetros (No regresa nada, solo guarda)
void Estudiante::registrarCalificaciones(double c1, double c2) {
    calificacion1 = c1;
    calificacion2 = c2;
    cout << "\n[SISTEMA]: Calificaciones actualizadas con exito." << endl;
}

// Implementación del método con RETORNO (Hace el cálculo y regresa el double)
double Estudiante::calcularPromedio() {
    double promedio = (calificacion1 + calificacion2) / 2.0;
    return promedio; // Regresa el resultado al main
}

// Muestra los datos guardados en el objeto
void Estudiante::mostrarInformacion() {
    cout << "\n===============================" << endl;
    cout << "  INFORMACION DEL ESTUDIANTE   " << endl;
    cout << "===============================" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Nota 1: " << calificacion1 << endl;
    cout << "Nota 2: " << calificacion2 << endl;
    cout << "Promedio Actual: " << calcularPromedio() << endl; // Llama al método interno
    cout << "===============================" << endl;
}
