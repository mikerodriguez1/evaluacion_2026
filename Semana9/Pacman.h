#ifndef PACMAN_H
#define PACMAN_H

#include <string>
using namespace std;

class Pacman {
private:
    string nombre;
    int x, y; // Posición en la cuadrícula
    int puntos;

public:
    // Constructor
    Pacman(string _nombre);

    // --- SOBRECARGA DE MÉTODOS (Moverse de distintas maneras) ---
    void moverse(char direccion);          // Moverse 1 casilla (W, A, S, D)
    void moverse(char direccion, int pasos); // Moverse varias casillas en una dirección
    void moverse(int nuevaX, int nuevaY);   // Teletransportarse directo a una coordenada

    // --- SOBRECARGA DE OPERADORES ---
    // Sobrecargamos el operador '+' para sumarle puntos de fantasmas o moneditas al Pac-Man
    Pacman& operator+(int puntosExtra);

    // Función para mostrar el estado actual en pantalla
    void mostrarEstado();
};

#endif
