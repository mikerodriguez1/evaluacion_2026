#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int matricula;
    double calificacion1;
    double calificacion2;

public:
    // Constructor para registrar la info inicial
    Estudiante(string _nombre, int _matricula);

    // Método que recibe parámetros (Modificar valores)
    void registrarCalificaciones(double c1, double c2);

    // Método que devuelve un valor de retorno (Calcula el promedio)
    double calcularPromedio();

    // Método normal para mostrar la info completa
    void mostrarInformacion();
};

#endif
