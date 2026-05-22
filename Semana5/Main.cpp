#include "Libro.cpp"
#include <iostream>

using namespace std;

int main() {
    cout << "=== INICIANDO SISTEMA DE BIBLIOTECA ===" << endl;

    // Instanciamos un libro con solo 2 ejemplares disponibles
    Libro libro1("Estructuras de Datos", "Luis Joyanes", "INF-101", 2);

    // Mostramos el estado inicial
    libro1.mostrarInformacion();

    // Intentamos pedirlo prestado 3 veces para forzar el límite
    cout << "\n--- Simulando prestamos de libros ---" << endl;
    libro1.prestarLibro(); // Prestamo 1 -> Queda 1 disponible
    libro1.prestarLibro(); // Prestamo 2 -> Quedan 0 disponibles
    libro1.prestarLibro(); // Prestamo 3 -> Debe decir que NO hay disponibles

    // Revisamos cómo quedó el stock usando el método público
    cout << "\nEjemplares en estante actualmente: " << libro1.getCantidadDisponible() << endl;

    // El estudiante regresa un libro
    cout << "\n--- Simulando devolucion ---" << endl;
    libro1.devolverLibro(); // Incrementa el stock a 1

    // Volvemos a mostrar la info para verificar los cambios
    libro1.mostrarInformacion();

    // NOTA PARA LA CLASE: Si intentas hacer lo siguiente, C++ te va a lanzar un error de compilacion:
    // libro1.cantidadDisponible = 10; // PROHIBIDO: Es privado y no se puede tocar desde aqui.

    return 0;
}
