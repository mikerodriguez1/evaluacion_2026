# Práctica 03
**Tema:** Herencia y Polimorfismo

* **¿Qué es una clase base?**
    Es la clase "padre" o superclase(por ejemplo, `Vehículo`).

* **¿Qué es una clase derivada?**
    Es la clase "hija" o subclase. Es una versión más específica de la clase base.(por ejemplo, `Automóvil`).

* **¿Qué relación existe entre ambas?**
    Existe una relación de **Generalización - Especialización** 
---

### 2. Escenario Conceptual: El Vehículo



| Clase (Tipo) | Características Compartidas (Heredadas de Vehículo) | Características Exclusivas (Propias de la clase) |
| :--- | :--- | :--- |
| **Vehículo** (Clase Base) | *Estas se definen aquí para todos:*<br>- Marca<br>- Modelo<br>- Color<br>- Cantidad de combustible<br>- Método: `acelerar()`<br>- Método: `frenar()` | *(N/A - Es la abstracción general)* |
| **Automóvil** (Derivada) | Hereda: Marca, Modelo, Color, Combustible, Acelerar, Frenar. | - Número de puertas<br>- Tipo de maletero<br>- Aire acondicionado (Si/No)<br>- Método: `abrir_cajuela()` |
| **Motocicleta** (Derivada) | Hereda: Marca, Modelo, Color, Combustible, Acelerar, Frenar. | - Tipo de manubrio<br>- Tiene sidecar (Si/No)<br>- Método: `hacer_caballito()` |
| **Camión** (Derivada) | Hereda: Marca, Modelo, Color, Combustible, Acelerar, Frenar. | - Capacidad de carga (Toneladas)<br>- Número de ejes<br>- Tipo de remolque<br>- Método: `cargar_mercancia()` |

#### ¿Por qué es mejor usar herencia en lugar de repetir todo?

1.  **Reutilización de código:** No tienes que escribir `Marca` o `acelerar()` tres veces distintas. Lo escribes una vez en `Vehículo` y los demás lo obtienen gratis.
2.  **Mantenimiento:** Si decides agregar un atributo nuevo a todos los vehículos (por ejemplo, `GPS`), solo lo agregas en la clase base y automáticamente `Automóvil`, `Moto` y `Camión` lo tendrán. No tienes que editar 3 archivos diferentes.
3.  **Organización lógica:** El código refleja la realidad. Un automóvil *es un* vehículo, lo que hace que el programa sea más fácil de entender y estructurar.
