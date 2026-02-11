# 📱 Mobile Simulation System | OOP C++

<div align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Editor-VS_Code-007ACC?style=for-the-badge&logo=visual-studio-code" />
  <img src="https://img.shields.io/badge/Paradigm-OOP-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Stable-success?style=for-the-badge" />
</div>

> **Arquitectura modular que simula el comportamiento de un dispositivo móvil, gestionando estados lógicos y ciclos de energía mediante Programación Orientada a Objetos.**

---

## 🛠️ Logic & Architecture

Para garantizar un funcionamiento realista, el sistema implementa las siguientes validaciones de negocio:

| Acción | Condición de Seguridad | Resultado Esperado |
| :--- | :--- | :--- |
| **Encendido** | Cambio de estado de `false` a `true`. | Habilita funciones de uso. |
| **Carga** | `bateria + cantidad <= 100`. | Evita sobrecarga del sistema. |
| **Uso** | `encendido == true`. | Bloquea el consumo si está apagado. |
| **Consumo** | `consumo <= bateria`. | Evita valores de energía negativos. |

---

## 📂 Project Explorer (VS Code Style)

```text
📦 Mobile-Simulation-CPP
 ┣ 📂 include
 ┃ ┗ 📜 ClaseObjeto.h    <-- Definición de la Clase
 ┣ 📂 src
 ┃ ┗ 📜 ClaseObjeto.cpp  <-- Lógica e Implementación
 ┗ 📜 main.cpp           <-- Ejecución y Pruebas
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
