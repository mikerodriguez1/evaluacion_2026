#include "ClaseObjeto.h"
#include <iostream>

using namespace std;

Celular::Celular(string m, string mod, string c) {
    marca = m;
    modelo = mod;
    color = c;
    bateria = 50; // Empezamos con media carga
    encendido = false;
}

void Celular::encender() {
    encendido = true;
    cout << "El celular esta encendido." << endl;
}

void Celular::apagar() {
    encendido = false;
    cout << "El celular esta apagado." << endl;
}

void Celular::cargar(int cantidad) {
    // Validamos que no pase del 100% como en la mochila
    if (bateria + cantidad > 100) {
        cout << "No hay espacio suficiente en la bateria." << endl;
    } else {
        bateria += cantidad;
        cout << "Se cargo el " << cantidad << "% de bateria." << endl;
    }
}

void Celular::usar(int consumo) {
    // Si no esta prendido, no deja hacer nada (Abstraccion)
    if (!encendido) {
        cout << "El celular esta apagado (No se puede usar)." << endl;
        return;
    }

    if (consumo > bateria) {
        cout << "Bateria insuficiente para esta accion." << endl;
    } else {
        bateria -= consumo;
        cout << "Se consumio el " << consumo << "% de bateria." << endl;
    }
}

void Celular::mostrarEstado() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Color: " << color << endl;
    cout << "Bateria: " << bateria << endl;
    cout << "Estado: " << (encendido ? "Encendido" : "Apagado") << endl << endl;
}
