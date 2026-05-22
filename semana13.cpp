#include <iostream>
#include <vector>
#include <string>

// 1. INTERFAZ: En C++ se define como una clase sin atributos y con métodos puros (= 0)
class IEvaluable {
public:
    virtual ~IEvaluable() {} // Destructor virtual obligatorio para interfaces
    virtual void evaluarDesempenio() = 0; // Método puro
};

// 2. CLASE ABSTRACTA: Base para todos los empleados. Tiene atributos comunes.
class Empleado : public IEvaluable {
protected:
    std::string nombre;
    int id;

public:
    Empleado(std::string _nombre, int _id) : nombre(_nombre), id(_id) {}
    virtual ~Empleado() {} // Destructor virtual para liberar memoria correctamente

    // Métodos Getters comunes
    std::string getNombre() const { return nombre; }
    int getId() const { return id; }

    // Método abstracto (puro) que cada rol implementará a su manera
    virtual void realizarActividad() = 0; 
};

// 3. CLASES DERIVADAS: Roles específicos de la empresa
class Desarrollador : public Empleado {
public:
    Desarrollador(std::string _nombre, int _id) : Empleado(_nombre, _id) {}

    // Implementación de la acción específica de la clase abstracta
    void realizarActividad() override {
        std::cout << "Empleado [" << id << "] " << nombre << " esta escribiendo codigo y desarrollando software.\n";
    }

    // Implementación del método de la interfaz
    void evaluarDesempenio() override {
        std::cout << "Evaluacion: Revisando commits en GitHub y resolucion de bugs.\n";
    }
};

class AdministradorServidores : public Empleado {
public:
    AdministradorServidores(std::string _nombre, int _id) : Empleado(_nombre, _id) {}

    void realizarActividad() override {
        std::cout << "Empleado [" << id << "] " << nombre << " esta monitoreando infraestructura y administrando servidores.\n";
    }

    void evaluarDesempenio() override {
        std::cout << "Evaluacion: Verificando el uptime (tiempo en linea) del servidor.\n";
    }
};

class SoporteTecnico : public Empleado {
public:
    SoporteTecnico(std::string _nombre, int _id) : Empleado(_nombre, _id) {}

    void realizarActividad() override {
        std::cout << "Empleado [" << id << "] " << nombre << " esta atendiendo reportes y brindando soporte tecnico.\n";
    }

    void evaluarDesempenio() override {
        std::cout << "Evaluacion: Midiendo satisfaccion del cliente y tickets cerrados.\n";
    }
};

// 4. FUNCIÓN PRINCIPAL: Demostración de Polimorfismo
int main() {
    // Lista genérica de empleados usando punteros de la clase base
    std::vector<Empleado*> listaEmpleados;

    // Registrar distintos tipos de empleados (Cumple con "Registrar distintos tipos")
    listaEmpleados.push_back(new Desarrollador("Carlos", 101));
    listaEmpleados.push_back(new AdministradorServidores("Jade", 102));
    listaEmpleados.push_back(new SoporteTecnico("Ana", 103));

    std::cout << "=== SISTEMA DE GESTION DE EMPLEADOS ===\n\n";

    // Manejar empleados de forma genérica (Cumple con "Manejar de forma generica")
    for (Empleado* emp : listaEmpleados) {
        std::cout << "Nombre: " << emp->getNombre() << " | ID: " << emp->getId() << "\n";
        
        // POLIMORFISMO: El mismo método hace cosas diferentes según el objeto real
        emp->realizarActividad(); 
        emp->evaluarDesempenio(); 
        std::cout << "-------------------------------------------\n";
    }

    // Limpieza de memoria (Buena práctica obligatoria en C++)
    for (Empleado* emp : listaEmpleados) {
        delete emp;
    }
    listaEmpleados.clear();

    return 0;
}
