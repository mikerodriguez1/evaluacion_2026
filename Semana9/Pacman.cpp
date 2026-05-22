#include "Pacman.h"
#include <iostream>

using namespace std;

// Constructor inicializa al Pac-Man en el centro (0,0) y con 0 puntos
Pacman::Pacman(string _nombre) {
    nombre = _nombre;
    x = 0;
    y = 0;
    puntos = 0;
}

// 1. Moverse un solo paso
void Pacman::moverse(char direccion) {
    if (direccion == 'W' || direccion == 'w') y++;
    else if (direccion == 'S' || direccion == 's') y--;
    else if (direccion == 'D' || direccion == 'd') x++;
    else if (direccion == 'A' || direccion == 'a') x--;
    cout << nombre << " se movio un paso hacia " << direccion << endl;
}

// 2. Moverse varios pasos (Sobrecarga 1)
void Pacman::moverse(char direccion, int pasos) {
    if (direccion == 'W' || direccion == 'w') y += pasos;
    else if (direccion == 'S' || direccion == 's') y -= pasos;
    else if (direccion == 'D' || direccion == 'd') x += pasos;
    else if (direccion == 'A' || direccion == 'a') x -= pasos;
    cout << nombre << " se movio " << pasos << " pasos hacia " << direccion << endl;
}

// 3. Teletransportarse (Sobrecarga 2)
void Pacman::moverse(int nuevaX, int nuevaY) {
    x = nuevaX;
    y = nuevaY;
    cout << nombre << " se teletransporto a la posicion (" << x << ", " << y << ")" << endl;
}

// Sobrecarga del operador '+' para acumular puntos
Pacman& Pacman::operator+(int puntosExtra) {
    this->puntos += puntosExtra;
    cout << "¡+" << puntosExtra << " puntos acumulados!" << endl;
    return *this; // Regresa el mismo objeto modificado
}

// Mostrar cómo va nuestro personaje
void Pacman::mostrarEstado() {
    cout << "=== ESTADO DE " << nombre << " ===" << endl;
    cout << "Posicion actual: (" << x << ", " << y << ")" << endl;
    cout << "Puntos totales: " << puntos << endl;
    cout << "==========================" << endl << endl;
}
