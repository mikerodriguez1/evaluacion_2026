#include <iostream>
#include <string>

using namespace std;

// 1. LA CLASE BASE (La jefa de todos)
class Personaje {
public:
    string nombre;
    int nivel;
    int vida;

    // El constructor para inicializar lo básico que comparten todos
    Personaje(string _nombre, int _nivel, int _vida) {
        nombre = _nombre;
        nivel = _nivel;
        vida = _vida;
    }
};

// 2. CLASES HIJAS: Heredan de Personaje usando public
class Guerrero : public Personaje {
public:
    int fuerza;

    // El constructor usa la lista de inicialización para mandarle los datos a la clase base
    Guerrero(string _nombre, int _nivel, int _vida, int _fuerza) 
        : Personaje(_nombre, _nivel, _vida) {
        fuerza = _fuerza;
    }

    void atacarConEspada() {
        cout << nombre << " solto un espadazo con fuerza de " << fuerza << "!" << endl;
    }
};

class Mago : public Personaje {
public:
    int mana;

    Mago(string _nombre, int _nivel, int _vida, int _mana) 
        : Personaje(_nombre, _nivel, _vida) {
        mana = _mana;
    }

    void lanzarHechizo() {
        cout << nombre << " lanzo una bola de fuego gastando " << mana << " de mana!" << endl;
    }
};

class Arquero : public Personaje {
public:
    int precision;

    String _nombre, int _nivel, int _vida, int _precision) 
        : Personaje(_nombre, _nivel, _vida) {
        precision = _precision;
    }

    void dispararFlecha() {
        cout << nombre << " disparo una flecha con " << precision << "% de precision!" << endl;
    }
};

// 3. CLASE ESPECIAL: Personaje híbrido que combina habilidades
class CampeonHibrido : public Personaje {
public:
    int fuerza;
    int mana;

    // Recibe todo y junta las variables especiales de Guerrero y Mago
    CampeonHibrido(string _nombre, int _nivel, int _vida, int _fuerza, int _mana) 
        : Personaje(_nombre, _nivel, _vida) {
        fuerza = _fuerza;
        mana = _mana;
    }

    void comboEspecial() {
        cout << nombre << " activo el combo especial:" << endl;
        cout << "-> Primero: Pego un espadazo de " << fuerza << " de fuerza." << endl;
        cout << "-> Luego: Remato con un hechizo usando " << mana << " de mana." << endl;
    }
};

// --- PRUEBA EN EL MAIN DE QUE TODO JALA AL TIRO ---
int main() {
    // Creamos un guerrero normal
    Guerrero miGuerrero("Ragnar", 5, 100, 45);
    
    // Creamos el personaje especial que combina habilidades
    CampeonHibrido miEspecial("EldenLord", 10, 250, 80, 120);

    // Los ponemos a accionarse
    miGuerrero.atacarConEspada();
    cout << "------------------------------------------" << endl;
    miEspecial.comboEspecial();

    return 0;
}
