# 📱 Simulación de Celular | C++ OOP

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Funcional-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

> **Un sistema robusto de Programación Orientada a Objetos que modela el comportamiento y gestión de energía de dispositivos móviles.**

---

## 📖 Descripción

Este proyecto implementa una arquitectura basada en clases para simular la lógica interna de un teléfono celular. Utiliza **C++** para gestionar estados, validar consumo de energía y controlar el ciclo de vida del dispositivo (encendido, apagado, carga y uso).

El objetivo es demostrar principios sólidos de **encapsulamiento** y **abstracción**.

---

## ✨ Características Principales

* **⚡ Gestión Inteligente de Batería:** Lógica que previene la sobrecarga (>100%) y el uso con batería insuficiente.
* **🔒 Validación de Estado:** El dispositivo no permite acciones de "uso" si se encuentra apagado.
* **🛠️ Configuración Dinámica:** Creación de objetos personalizados (Marca, Modelo, Color) en tiempo de ejecución.
* **📊 Reportes de Estado:** Visualización detallada de todos los atributos del objeto.

---

## 📂 Arquitectura del Código

El código está organizado modularmente para separar la definición, la implementación y la lógica de negocio.

### 1. Definición de la Clase (`.h`)
Define la estructura del objeto y sus métodos públicos/privados.

<details>
<summary><strong>📄 Ver código: ClaseObjeto.h</strong> (Haz clic para expandir)</summary>

```cpp
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
