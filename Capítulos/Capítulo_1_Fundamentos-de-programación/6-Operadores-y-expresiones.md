# Guía Completa de Operadores y Expresiones en C++

## Introducción

Los operadores en C++ permiten realizar cálculos entre valores fijos y variables. Se clasifican en cuatro categorías principales: aritméticos, relacionales, lógicos y de cadena.

## 1. Operadores Aritméticos

Los operadores aritméticos realizan las operaciones matemáticas básicas:

### Operadores Básicos

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    double x = 9.0, y = 4.0;
    
    // Suma
    cout << "Suma: " << a << " + " << b << " = " << (a + b) << endl;
    
    // Resta  
    cout << "Resta: " << a << " - " << b << " = " << (a - b) << endl;
    
    // Multiplicación
    cout << "Multiplicación: " << a << " * " << b << " = " << (a * b) << endl;
    
    // División real (con decimales)
    cout << "División real: " << x << " / " << y << " = " << (x / y) << endl;
    
    // División entera (solo parte entera)
    cout << "División entera: " << a << " / " << b << " = " << (a / b) << endl;
    
    // Módulo (resto de división)
    cout << "Módulo: " << a << " % " << b << " = " << (a % b) << endl;
    
    return 0;
}
```

### Operador de Potencia

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base = 9.0;
    double exponente = 2.0;
    
    // Para potencias se usa la función pow()
    double resultado = pow(base, exponente);
    cout << base << " elevado a " << exponente << " = " << resultado << endl;
    
    // Ejemplo con enteros
    int base_int = 2;
    int exp_int = 3;
    cout << base_int << "^" << exp_int << " = " << pow(base_int, exp_int) << endl;
    
    return 0;
}
```

### Ejemplos de Expresiones Aritméticas

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ejemplos del libro
    cout << "8 * 3 = " << (8 * 3) << endl;                    // 24
    cout << "8 / 3.0 = " << (8 / 3.0) << endl;               // 2.666666
    cout << "8 / 3 = " << (8 / 3) << endl;                   // 2 (división entera)
    cout << "8^2 = " << pow(8, 2) << endl;                   // 64
    cout << "Raíz cuadrada de 9 = " << sqrt(9) << endl;      // 3
    cout << "9 % 4 = " << (9 % 4) << endl;                   // 1
    
    return 0;
}
```

## 2. Operadores Relacionales (Comparación)

Estos operadores comparan valores y devuelven verdadero (true/1) o falso (false/0):

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 3;
    
    cout << "Comparaciones con a = " << a << " y b = " << b << ":" << endl;
    
    // Igualdad
    cout << a << " == " << b << " es " << (a == b ? "Verdadero" : "Falso") << endl;
    
    // Mayor que
    cout << a << " > " << b << " es " << (a > b ? "Verdadero" : "Falso") << endl;
    
    // Mayor o igual que
    cout << a << " >= " << b << " es " << (a >= b ? "Verdadero" : "Falso") << endl;
    
    // Menor que
    cout << a << " < " << b << " es " << (a < b ? "Verdadero" : "Falso") << endl;
    
    // Menor o igual que
    cout << a << " <= " << b << " es " << (a <= b ? "Verdadero" : "Falso") << endl;
    
    // Diferente a
    cout << a << " != " << b << " es " << (a != b ? "Verdadero" : "Falso") << endl;
    
    return 0;
}
```

### Ejemplos de Expresiones Lógicas

```cpp
#include <iostream>
using namespace std;

int main() {
    // Ejemplos del libro
    cout << "Evaluaciones lógicas:" << endl;
    cout << "8 == 3: " << (8 == 3 ? "Verdadero" : "Falso") << endl;  // Falso
    cout << "8 > 3: " << (8 > 3 ? "Verdadero" : "Falso") << endl;    // Verdadero
    cout << "8 <= 3: " << (8 <= 3 ? "Verdadero" : "Falso") << endl;  // Falso
    cout << "8 != 8: " << (8 != 8 ? "Verdadero" : "Falso") << endl;  // Falso
    
    return 0;
}
```

## 3. Operadores Lógicos

Los operadores lógicos se usan para combinar expresiones booleanas:

### Operador Y (AND)

```cpp
#include <iostream>
using namespace std;

int main() {
    bool p = true, q = false;
    
    cout << "Operador Y (&&):" << endl;
    cout << "p && q = " << (p && q) << endl;  // false
    cout << "true && true = " << (true && true) << endl;  // true
    
    // Ejemplo práctico
    int edad = 25;
    bool tieneCarnet = true;
    
    if (edad >= 18 && tieneCarnet) {
        cout << "Puede conducir" << endl;
    }
    
    // Ejemplos del libro
    cout << "\nEjemplos de expresiones con Y:" << endl;
    cout << "8 > 4 && 3 == 6: " << ((8 > 4) && (3 == 6)) << endl;  // false
    cout << "7 <> 5 && 5 >= 4: " << ((7 != 5) && (5 >= 4)) << endl;  // true
    
    return 0;
}
```

### Operador O (OR)

```cpp
#include <iostream>
using namespace std;

int main() {
    bool p = true, q = false;
    
    cout << "Operador O (||):" << endl;
    cout << "p || q = " << (p || q) << endl;  // true
    cout << "false || false = " << (false || false) << endl;  // false
    
    // Ejemplo práctico
    int temperatura = 30;
    bool esVerano = true;
    
    if (temperatura > 25 || esVerano) {
        cout << "Hace calor" << endl;
    }
    
    // Ejemplos del libro
    cout << "\nEjemplos de expresiones con O:" << endl;
    cout << "8 > 4 || 3 == 6: " << ((8 > 4) || (3 == 6)) << endl;  // true
    cout << "7 <> 5 || 5 >= 4: " << ((7 != 5) || (5 >= 4)) << endl;  // true
    
    return 0;
}
```

### Operador NO (NOT)

```cpp
#include <iostream>
using namespace std;

int main() {
    bool p = true;
    
    cout << "Operador NO (!):" << endl;
    cout << "!p = " << (!p) << endl;  // false
    cout << "!false = " << (!false) << endl;  // true
    
    // Ejemplo práctico
    bool esMayor = false;
    
    if (!esMayor) {
        cout << "Es menor de edad" << endl;
    }
    
    // Ejemplos del libro
    cout << "\nEjemplos de expresiones con NO:" << endl;
    cout << "!(8 > 4): " << (!(8 > 4)) << endl;  // false
    cout << "!(7 <> 7): " << (!(7 != 7)) << endl;  // true
    
    return 0;
}
```

## 4. Operadores de Cadena

Para trabajar con cadenas de texto (strings):

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Ricardo";
    string apellido = "Marcelo";
    string email_part1 = "ricardomarcelo";
    string email_part2 = "@";
    string email_part3 = "hotmail.com";
    
    // Concatenación con +
    string nombre_completo = nombre + " " + apellido;
    cout << "Nombre completo: " << nombre_completo << endl;
    
    // Concatenación de email
    string email = email_part1 + email_part2 + email_part3;
    cout << "Email: " << email << endl;
    
    // También se puede usar += para concatenar
    string saludo = "Hola ";
    saludo += nombre;
    saludo += "!";
    cout << saludo << endl;
    
    return 0;
}
```

## 5. Estructuras de Control de Flujo

El libro menciona las estructuras que se verán en capítulos posteriores:

### Estructura Secuencial
```cpp
// Las instrucciones se ejecutan una tras otra
#include <iostream>
using namespace std;

int main() {
    cout << "Primera instrucción" << endl;
    cout << "Segunda instrucción" << endl;
    cout << "Tercera instrucción" << endl;
    return 0;
}
```

### Estructura Selectiva Simple
```cpp
#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    if (edad >= 18) {
        cout << "Es mayor de edad" << endl;
    }
    
    return 0;
}
```

### Estructura Selectiva Doble
```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    
    if (numero > 0) {
        cout << "El número es positivo" << endl;
    } else {
        cout << "El número es negativo o cero" << endl;
    }
    
    return 0;
}
```

### Estructura Selectiva Múltiple
```cpp
#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Seleccione una opción (1-3): ";
    cin >> opcion;
    
    switch (opcion) {
        case 1:
            cout << "Seleccionó la opción 1" << endl;
            break;
        case 2:
            cout << "Seleccionó la opción 2" << endl;
            break;
        case 3:
            cout << "Seleccionó la opción 3" << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
            break;
    }
    
    return 0;
}
```

### Estructura Repetitiva Mientras (while)
```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 1;
    
    while (contador <= 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }
    
    return 0;
}
```

### Estructura Repetitiva Para (for)
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Iteración: " << i << endl;
    }
    
    return 0;
}
```

## Ejemplo Completo Integrando Conceptos

```cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // Variables
    string nombre;
    int edad;
    double nota1, nota2, promedio;
    
    // Entrada de datos
    cout << "=== SISTEMA DE EVALUACIÓN ===" << endl;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    
    // Operaciones aritméticas
    promedio = (nota1 + nota2) / 2.0;
    
    // Operadores relacionales y lógicos
    bool esAprobado = promedio >= 60.0;
    bool esMayorEdad = edad >= 18;
    
    // Salida de resultados
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Estudiante: " << nombre << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Promedio: " << promedio << endl;
    
    // Estructuras condicionales
    if (esAprobado && esMayorEdad) {
        cout << "¡Felicitaciones! Está aprobado y es mayor de edad." << endl;
    } else if (esAprobado && !esMayorEdad) {
        cout << "Está aprobado pero es menor de edad." << endl;
    } else if (!esAprobado && esMayorEdad) {
        cout << "Necesita estudiar más. Es mayor de edad pero no aprobó." << endl;
    } else {
        cout << "Es menor de edad y no aprobó el curso." << endl;
    }
    
    // Clasificación de notas
    if (promedio >= 90) {
        cout << "Calificación: Excelente" << endl;
    } else if (promedio >= 80) {
        cout << "Calificación: Muy Bueno" << endl;
    } else if (promedio >= 70) {
        cout << "Calificación: Bueno" << endl;
    } else if (promedio >= 60) {
        cout << "Calificación: Aprobado" << endl;
    } else {
        cout << "Calificación: Reprobado" << endl;
    }
    
    return 0;
}
```

## Resumen de Operadores

### Precedencia de Operadores (de mayor a menor)
1. `()` - Paréntesis
2. `!` - NOT lógico
3. `*`, `/`, `%` - Multiplicación, división, módulo
4. `+`, `-` - Suma, resta
5. `<`, `<=`, `>`, `>=` - Comparación
6. `==`, `!=` - Igualdad, desigualdad
7. `&&` - AND lógico
8. `||` - OR lógico

### Consejos Importantes

1. **División**: Ten cuidado con la división entera vs. real
2. **Módulo**: Solo funciona con números enteros
3. **Precedencia**: Usa paréntesis para clarificar el orden de operaciones
4. **Comparaciones**: Siempre devuelven true (1) o false (0)
5. **Cadenas**: Usa `#include <string>` para trabajar con strings
6. **Potencias**: Usa `pow()` de `<cmath>` para calcular potencias

Este script cubre todos los conceptos de operadores y expresiones mostrados en las páginas del libro, con ejemplos prácticos y explicaciones detalladas.