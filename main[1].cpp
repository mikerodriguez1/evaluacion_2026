#include "Estudiante.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombreInput;
    int matriculaInput;

    cout << "=== REGISTRO INICIAL DEL ALUMNO ===" << endl;
    cout << "Introduce el nombre del estudiante: ";
    getline(cin, nombreInput);
    cout << "Introduce la matricula: ";
    cin >> matriculaInput;

    // Creamos el objeto con los datos iniciales que puso el usuario
    Estudiante alumno(nombreInput, matriculaInput);

    int opcion;
    do {
        cout << "\n----- MENU DE OPCIONES -----" << endl;
        cout << "1. Registrar / Modificar Calificaciones" << endl;
        cout << "2. Consultar Informacion y Promedio" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcional;

        switch (opcion) {
            case 1: {
                double n1, n2;
                cout << "\nIntroduce la Calificacion 1: ";
                cin >> n1;
                cout << "Introduce la Calificacion 2: ";
                cin >> n2;
                // Mandamos las notas como parámetros al objeto
                alumno.registrarCalificaciones(n1, n2);
                break;
            }
            case 2:
                // Consultamos toda la info del objeto
                alumno.mostrarInformacion();
                break;
            case 3:
                cout << "\nSaliendo del sistema de gestion. ¡Suerte!" << endl;
                break;
            default:
                cout << "\n[ERROR]: Opcion no valida. Intenta de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
