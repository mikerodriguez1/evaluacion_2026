#include "Pacman.cpp" // Si usas un IDE como Dev-C++ o compilas a mano

int main() {
    // Creamos a nuestro Pac-Man
    Pacman jugador("ChompChomp");

    jugador.mostrarEstado();

    // 1. Probamos el movimiento simple (Un paso a la derecha)
    jugador.moverse('D');
    jugador.mostrarEstado();

    // 2. Probamos la primera sobrecarga (Moverse 5 pasos hacia arriba)
    jugador.moverse('W', 5);
    jugador.mostrarEstado();

    // 3. Probamos la segunda sobrecarga (Ir directo a una esquina del mapa)
    jugador.moverse(10, 10);
    jugador.mostrarEstado();

    // 4. Probamos la sobrecarga de operador (Se come una fruta de 100 puntos)
    jugador + 100; 
    jugador + 50; // Se come una galleta de 50 puntos
    
    jugador.mostrarEstado();

    return 0;
}
