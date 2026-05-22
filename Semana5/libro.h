#ifndef LIBRO_H
#define LIBRO_H

#include <string>
using namespace std;

class Libro {
private:
    // Atributos privados: Nadie fuera de esta clase puede tocarlos directamente
    string titulo;
    string autor;
    string codigo;
    int cantidadDisponible;

public:
    // Constructor para inicializar el libro con sus datos
    Libro(string _titulo, string _autor, string _codigo, int _cantidad);

    // Métodos públicos para interactuar de forma segura
    bool prestarLibro();
    void devolverLibro();
    void mostrarInformacion();
    int getCantidadDisponible(); // Nuestro "Getter" para leer la variable privada
};

#endif
