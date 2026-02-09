#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H

#include <string>
using namespace std;

class Celular {
private:
    // Atributos privados para que no los modifiquen desde fuera
    string marca, modelo, color;
    int bateria;
    bool encendido;

public:
    // Constructor para inicializar el equipo
    Celular(string m, string mod, string c);

    // Acciones principales
    void encender();
    void apagar();
    void cargar(int cantidad);
    void usar(int consumo);
    void mostrarEstado();
};

#endif
