#include <iostream>
#include <string>

// --- CLASE BASE (El papa) ---
class Personaje {
protected:
    // Atributos comunes que heredaran todos los hijos
    std::string nombre;
    int nivel;
    int vida;

public:
    // Constructor para inicializar los datos comunes
    Personaje(std::string _nombre, int _nivel, int _vida) {
        nombre = _nombre;
        nivel = _nivel;
        vida = _vida;
    }

    // Metodo comun para mostrar la info basica de cualquier personaje
    void mostrarInfo() {
        std::cout << "Nombre: " << nombre << " | Nivel: " << nivel << " | Vida: " << vida << "\n";
    }
};


// --- CLASES DERIVADAS (Los hijos) ---

// Guerrero hereda de Personaje
class Guerrero : public Personaje {
private:
    int fuerzaFisica; // Atributo unico de esta clase derivada

public:
    // El constructor recibe todo, pero le pasa el nombre, nivel y vida al papa
    Guerrero(std::string _nombre, int _nivel, int _vida, int _fuerza) : Personaje(_nombre, _nivel, _vida) {
        fuerzaFisica = _fuerza; // Inicializa su atributo propio
    }

    // Habilidad unica del Guerrero
    void usarEscudo() {
        std::cout << nombre << " activa su escudo protector usando " << fuerzaFisica << " de fuerza.\n";
    }
};

// Mago hereda de Personaje
class Mago : public Personaje {
private:
    int puntosMana; // Atributo unico de esta clase derivada

public:
    Mago(std::string _nombre, int _nivel, int _vida, int _mana) : Personaje(_nombre, _nivel, _vida) {
        puntosMana = _mana;
    }

    // Habilidad unica del Mago
    void lanzarHechizo() {
        std::cout << nombre << " gasta mana para lanzar un hechizo. Mana restante: " << (puntosMana - 10) << "\n";
    }
};

// Arquero hereda de Personaje
class Arquero : public Personaje {
private:
    int cantidadFlechas; // Atributo unico de esta clase derivada

public:
    Arquero(std::string _nombre, int _nivel, int _vida, int _flechas) : Personaje(_nombre, _nivel, _vida) {
        cantidadFlechas = _flechas;
    }

    // Habilidad unica del Arquero
    void dispararRafaga() {
        std::cout << nombre << " dispara una rafaga de flechas. Flechas en carcaj: " << cantidadFlechas << "\n";
    }
};


// --- PROGRAMA PRINCIPAL ---
int main() {
    std::cout << "--- SISTEMA DE PERSONAJES (DEMOSTRACION DE HERENCIA) ---\n\n";

    // Creamos objetos individuales de las clases hijas
    Guerrero miGuerrero("Thorin", 3, 100, 50);
    Mago miMago("Merlin", 4, 70, 150);
    Arquero miArquero("Legolas", 2, 85, 30);

    // REUTILIZACION DE CODIGO:
    // Ninguna de las clases hijas tiene escrito el metodo 'mostrarInfo()', 
    // pero todas lo pueden usar porque lo heredaron de Personaje.
    std::cout << "[Datos del Guerrero]: ";
    miGuerrero.mostrarInfo();
    miGuerrero.usarEscudo(); // Habilidad propia
    std::cout << "------------------------------------------------\n";

    std::cout << "[Datos del Mago]: ";
    miMago.mostrarInfo();
    miMago.lanzarHechizo(); // Habilidad propia
    std::cout << "------------------------------------------------\n";

    std::cout << "[Datos del Arquero]: ";
    miArquero.mostrarInfo();
    miArquero.dispararRafaga(); // Habilidad propia
    std::cout << "------------------------------------------------\n";

    return 0;
}
