#include "Libro.h"
#include <iostream>

using namespace std;

// Constructor para llenar los datos iniciales del libro
Libro::Libro(string _titulo, string _autor, string _codigo, int _cantidad) {
    titulo = _titulo;
    autor = _autor;
    codigo = _codigo;
    cantidadDisponible = _cantidad;
}

// Regla 1: Solo prestar si hay ejemplares disponibles
bool Libro::prestarLibro() {
    if (cantidadDisponible > 0) {
        cantidadDisponible--; // Disminuye el stock en 1
        cout << "[EXITO]: El libro '" << titulo << "' ha sido prestado." << endl;
        return true;
    } else {
        cout << "[DENEGADO]: No hay ejemplares disponibles de '" << titulo << "'." << endl;
        return false;
    }
}

// Regla 2: Devolver aumenta la cantidad disponible
void Libro::devolverLibro() {
    cantidadDisponible++; // Aumenta el stock en 1
    cout << "[SISTEMA]: El libro '" << titulo << "' fue devuelto con exito." << endl;
}

// Muestra la ficha técnica del libro
void Libro::mostrarInformacion() {
    cout << "\n----------------------------------------" << endl;
    cout << "Libro: " << titulo << " | Autor: " << autor << endl;
    cout << "Codigo: " << codigo << " | Disponibles: " << cantidadDisponible << endl;
    cout << "----------------------------------------" << endl;
}

// Función Getter para poder consultar la cantidad desde el main sin romper las reglas
int Libro::getCantidadDisponible() {
    return cantidadDisponible;
}
