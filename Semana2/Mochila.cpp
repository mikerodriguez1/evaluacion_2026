#include "Mochila.h"
#include <iostream>

using namespace std;

// mochila vacia oviamente 
Mochila::Mochila(string _color, int _capacidad, int _compartimentos) {
    color = _color;
    capacidadMaxLitros = _capacidad;
    numCompartimentos = _compartimentos;
    cantidadObjetosActuales = 0; // edsta vacía
    estaAbierta = false;         // cerrada
}

void Mochila::abrirMochila() {
    estaAbierta = true;
    cout << "[MOCHILA]: Has abierto la mochila." << endl;
}

void Mochila::cerrarMochila() {
    estaAbierta = false;
    cout << "[MOCHILA]: Has cerrado la mochila." << endl;
}

void Mochila::guardarObjeto() {
    // Regla de negocio: No puedes meter cosas si está cerrada
    if (!estaAbierta) {
        cout << "[ALERTA]: No puedes guardar nada, la mochila esta CERRADA." << endl;
    } else {
        cantidadObjetosActuales++;
        cout << "[EXITO]: Guardaste un objeto. Total en mochila: " << cantidadObjetosActuales << endl;
    }
}

void Mochila::mostrarEstado() {
    cout << "\n========== ESTADO DE LA MOCHILA ==========" << endl;
    cout << "Color: " << color << endl;
    cout << "Capacidad: " << capacidadMaxLitros << " Litros" << endl;
    cout << "Compartimentos: " << numCompartimentos << endl;
    cout << "Objetos guardados: " << cantidadObjetosActuales << endl;
    cout << "Estado: " << (estaAbierta ? "ABIERTA" : "CERRADA") << endl;
    cout << "==========================================" << endl;
}
