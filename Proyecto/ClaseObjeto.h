#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H

#include <string>
using namespace std;

class Celular {
private:
    
    string marca, modelo, color;
    int bateria;
    bool encendido;

public:
    
    Celular(string m, string mod, string c);

    
    void encender();
    void apagar();
    void cargar(int cantidad);
    void usar(int consumo);
    void mostrarEstado();
};

#endif
