# Fundamentos de Programación en C++

## Tabla de Contenidos

1. [Tipos de Datos Simples](#tipos-de-datos-simples)
2. [Tipos de Datos Complejos](#tipos-de-datos-complejos)
3. [Variables](#variables)
4. [Constantes](#constantes)
5. [Comentarios](#comentarios)
6. [Palabras Reservadas](#palabras-reservadas)
7. [Identificadores](#identificadores)

---

## Tipos de Datos Simples

Los tipos de datos simples (también llamados primitivos) son los elementos básicos que puede almacenar una variable en C++.

### A. Enteros

Representan números enteros (sin decimales).

**Ejemplo en C++:**
```cpp
// Crear la variable
// (identificador y tipo de dato)
int N;

// Asignar un valor
// (identificador, operador de asignación y valor)
N = 15;
```

**Variantes de enteros:**
- `short`: Entero corto (menor rango)
- `int`: Entero estándar
- `long`: Entero largo (mayor rango)

```cpp
// Ejemplo con diferentes tipos de enteros
short N;
// Asignar un valor (error de desbordamiento)
// Sobrepasa su límite (rango)

// Entero largo para valores grandes
int N;
long N;
// Asignar un valor
N = 4500099;
```

### B. Reales (Punto Flotante)

Representan números reales (almacena decimales).

**Ejemplo básico:**
```cpp
// Crear la variable
// (identificador y tipo de dato)
N : Real

// Asignar un valor
// (identificador, operador de asignación y valor)
N = 15.75
```

**Tipos de precisión en C++:**

**Precisión simple (float):**
```cpp
// Precisión simple
float N;

// Se redondea a 15.123457
N = 15.12345678;
```

**Precisión doble (double):**
```cpp
// Precisión doble
double N;

// Lo almacena sin redondear 15.12345678
N = 15.12345678;
```

### C. Carácter

Representa un carácter de cualquier tipo: texto, número, símbolo, etc. El valor se coloca entre comillas simples.

**Ejemplo en pseudocódigo:**
```
// Crear la variable
R : Caracter

// Asignar un valor
R ← 'A'
R ← '9'
R ← '*'
```

**Ejemplo en C++:**
```cpp
// Crear la variable
char R;

// Asignar un valor
R = 'A';
R = '9';
R = '*';
```

### D. Lógico (Booleano)

Representa los valores "verdadero" o "falso", conocidos también como boolean.

**Ejemplo en pseudocódigo:**
```
// Crear la variable
L : Logico

// Asignar un valor
L ← VERDADERO
L ← FALSO
```

**Ejemplo en C++:**
```cpp
// Crear la variable
bool L;

// Asignar un valor
L = true;
L = false;
```

---

## Tipos de Datos Complejos (Estructurados)

Son aquellos que están constituidos por tipos de datos simples y definen una estructura de datos.

### A. Cadena (String)

Representa un conjunto de caracteres. Internamente es un arreglo de caracteres; por general, se representa con comillas dobles.

**Ejemplo en pseudocódigo:**
```
// Crear la variable
R : Cadena

// Asignar un valor
R ← "ricardomarcelo@hotmail.com"
```

**Ejemplo en C++:**
```cpp
// Crear la variable
char R;
// 'Asignar un valor
R = 'A';
R = '9';
R = '*';
```

---

## Variables

Representa un espacio de memoria RAM, el cual guarda un valor que servirá para algún proceso en particular; dicho valor puede ser modificado en cualquier momento. Las variables tienen, por lo general, un identificador (nombre) y un tipo de dato que se está utilizando; es decir, si almacena un número (entero), es texto o alfanumérico (cadena), si es un valor verdadero o falso (lógico) llamado también booleano.

**Ejemplo en pseudocódigo:**
```
// Variables
N : Entero
```

**Ejemplo en C++:**
```cpp
// Variables
int N;
```

### Asignación de Valores

Para asignarle un valor, usamos el operador de asignación, para algoritmos usaremos (←) o (=); este último es el más usado por los lenguajes de programación.

**Ejemplo en pseudocódigo:**
```
// Asignar un valor
N ← 10

// Cambiar su valor
N ← 50
```

**Ejemplo en C++:**
```cpp
// Asignar un valor
N = 10;

// Cambiar su valor
N = 50;
```

---

## Constantes

Representa un espacio de memoria RAM, el cual guarda un valor que servirá para algún proceso en particular; dicho valor permanece fijo, es decir, no puede cambiarse en la ejecución del programa. Las constantes tienen, al igual que las variables, un identificador (nombre) y un tipo de dato.

**Ejemplo en pseudocódigo:**
```
// Constantes
PI ← 3.14159 : Real

// Error ya no puede modificarlo
PI ← 3.14
```

**Ejemplo en C++:**
```cpp
// Constantes
const float PI = 3.14159F;

// Error ya no puede modificarlo
PI = 3.14;
```

---

## Comentarios

Permiten describir y explicar, además sirve como ayuda para recordar y entender las operaciones que se van a ejecutar. Los comentarios no son instrucciones, por lo tanto al ser traducido el código fuente a código binario (tiempo de compilación), los lenguajes de programación los ignoran. Dependiendo del lenguaje de programación los comentarios se escriben usando cierta simbología, en este libro usaremos el símbolo `//` en los pseudocódigos para colocar comentarios.

**Ejemplo en pseudocódigo:**
```
// Variables
N : Entero
```

**Ejemplo en C++:**
```cpp
// Variables
int N;
```

---

## Palabras Reservadas

Son palabras usadas por el lenguaje de programación que no deben ser utilizadas como identificadores de variables, funciones, entre otros.

### Algunas de las palabras reservadas de C++:

```cpp
short, int, float, double, if, for, switch, while, do, return, 
break, continue, const, static, public, private, protected, 
class, struct, enum, typedef, sizeof, new, delete, true, false
```

**Ejemplo de error de compilación:**
```cpp
// Identificador de Variable es if
// y esta es palabra reservada
int if;  // ❌ ERROR: 'if' es palabra reservada
```

---

## Identificadores

Son los nombres que asignamos a las variables, constantes, funciones, objetos, entre otros; y no pueden coincidir con las palabras reservadas porque ocasionaría ambigüedad, y el compilador no lo entendería. Por lo general, los identificadores deben cumplir las siguientes reglas:

### Reglas para Identificadores:

1. **Deben comenzar por una letra.** Evite usar ñ y tilde.
2. **No debe coincidir con palabras reservadas** del lenguaje de programación que está utilizando.

**Ejemplos válidos:**
```cpp
int edad;           // ✅ Válido
float promedio;     // ✅ Válido
char letra;         // ✅ Válido
bool esValido;      // ✅ Válido
```

**Ejemplos inválidos:**
```cpp
int 2edad;          // ❌ Error: comienza con número
int if;             // ❌ Error: palabra reservada
float año;          // ❌ Error: contiene 'ñ'
```

---

## Resumen de Sintaxis

### Declaración de Variables:
```cpp
tipo_de_dato nombre_variable;
```

### Asignación:
```cpp
nombre_variable = valor;
```

### Constantes:
```cpp
const tipo_de_dato NOMBRE_CONSTANTE = valor;
```

### Comentarios:
```cpp
// Comentario de una línea
/* Comentario de 
   múltiples líneas */
```

---

## Ejemplo Completo

```cpp
#include <iostream>
using namespace std;

int main() {
    // Constantes
    const float PI = 3.14159F;
    
    // Variables de diferentes tipos
    int edad = 25;                    // Entero
    float altura = 1.75F;             // Real (precisión simple)
    double peso = 70.5;               // Real (precisión doble)
    char inicial = 'J';               // Carácter
    bool esMayor = true;              // Booleano
    
    // Mostrar valores
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Peso: " << peso << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Es mayor: " << esMayor << endl;
    cout << "PI: " << PI << endl;
    
    return 0;
}
```

Este ejemplo demuestra el uso de todos los tipos de datos fundamentales en C++, siguiendo las reglas y convenciones explicadas en esta guía.