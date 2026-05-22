#include <iostream>
#include <vector>
#include <string>

// --- CLASE BASE ---
class Personaje {
protected:
    // Atributos
    std::string nombre;
    int nivel;
    int vida;

public:
    // Constructor normal para darle valores al personaje
    Personaje(std::string _nombre, int _nivel, int _vida) {
        nombre = _nombre;
        nivel = _nivel;
        vida = _vida;
    }

    // Destructor virtual (Para evitar problemas de memoria al borrar)
    virtual ~Personaje() {}

    // Getters sencillos para mostrar los datos
    std::string getNombre() { return nombre; }
    int getNivel() { return nivel; }
    int getVida() { return vida; }

    // FUNCION VIRTUAL: Esta es la clave del polimorfismo
    virtual void atacar() {
        std::cout << nombre << " realiza un ataque basico.\n";
    }
};


// --- CLASES HIJAS (Tipos de personajes específicos) ---

class Guerrero : public Personaje {
public:
    // Pasamos los datos al constructor del papá 
    Guerrero(std::string _nombre, int _nivel, int _vida) : Personaje(_nombre, _nivel, _vida) {}

    // Cambiamos el comportamiento del ataque para el Guerrero
    void atacar() override {
        std::cout << "[Guerrero] " << nombre << " da un espadazo fuerte y causa 25 de danio.\n";
    }
};

class Mago : public Personaje {
public:
    Mago(std::string _nombre, int _nivel, int _vida) : Personaje(_nombre, _nivel, _vida) {}

    // Cambiamos el comportamiento del ataque para el Mago
    void atacar() override {
        std::cout << "[Mago] " << nombre << " lanza una bola de fuego y causa 40 de danio magico.\n";
    }
};

class Arquero : public Personaje {
public:
    Arquero(std::string _nombre, int _nivel, int _vida) : Personaje(_nombre, _nivel, _vida) {}

    // Cambiamos el comportamiento del ataque para el Arquero
    void atacar() override {
        std::cout << "[Arquero] " << nombre << " dispara una flecha certera al enemigo.\n";
    }
};


// --- PROGRAMA PRINCIPAL ---
int main() {
    // Creamos una lista (vector) de punteros de la clase base.
    // Esto nos permite meter Guerreros, Magos o Arqueros en la misma lista.
    std::vector<Personaje*> equipo;

    // Registramos a los personaje
    equipo.push_back(new Guerrero("Thorin", 5, 120));
    equipo.push_back(new Mago("Merlin", 6, 80));
    equipo.push_back(new Arquero("Legolas", 4, 95));

    std::cout << "--- SIMULACION DE COMBATE ---\n\n";

    // Recorremos la lista de forma genérica
    for (int i = 0; i < equipo.size(); i++) {
        std::cout << "Personaje: " << equipo[i]->getNombre() << " | Nivel: " << equipo[i]->getNivel() << " | Vida: " << equipo[i]->getVida() << "\n";
        
        // el POLIMORFISMO: lo misma linea hace cosas distintas para cada uno
        equipo[i]->atacar();
        
        std::cout << "-------------------------------------------\n";
    }

    // Limpiamos la memoria manualmente
    for (int i = 0; i < equipo.size(); i++) {
        delete equipo[i];
    }
    equipo.clear();

    return 0;
}
