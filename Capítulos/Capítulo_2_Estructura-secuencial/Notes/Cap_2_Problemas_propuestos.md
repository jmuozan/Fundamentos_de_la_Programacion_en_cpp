# Solución problemas propuestos capítulo 2

Solución completa de los 10 problemas propuestos del capítulo 2.

---

## Ejecución de código:

```bash
g++ script.cpp -o nombre_ejecutable
./nombre_ejecutable # ejecutar ejecutable :)
```


## Propuesta N° 1: Suma y Resta de Dos Números

**Enunciado:** Dado dos números enteros (2), a y b, hallar a + b y a - b.

### Análisis
- **Entrada:** Dos números enteros a y b
- **Proceso:** Calcular suma y resta
- **Salida:** Mostrar a+b y a-b

### Código C++
```cpp
/**
 * PROPUESTA 1: SUMA Y RESTA DE DOS NÚMEROS
 * Enunciado: Dado dos números enteros (2), a y b, hallar a + b y a - b.
 * Análisis: Para la solución se requiere que el usuario ingrese dos números enteros;
 * luego, que el sistema calcule y muestre la suma y resta de dichos números.
 * Expresión algorítmica: suma ← a + b; resta ← a - b
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int a, b, suma, resta; // a y b = números de entrada, suma y resta = resultados
    
    // Entrada de datos
    cout << "Primer numero (a): ";
    cin >> a; // Lee el primer número entero
    cout << "Segundo numero (b): ";
    cin >> b; // Lee el segundo número entero
    
    // Proceso: calcula la suma y resta
    suma = a + b;  // Calcula la suma de los dos números
    resta = a - b; // Calcula la resta del primer número menos el segundo
    
    // Salida de resultados
    cout << "\n";
    cout << "a + b = " << suma << "\n";  // Muestra el resultado de la suma
    cout << "a - b = " << resta << "\n"; // Muestra el resultado de la resta
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 2: Contar Números Enteros en un Rango

**Enunciado:** Dado dos números enteros, determinar cuántos números enteros están incluidos en ellos.

### Análisis
- **Entrada:** Dos números enteros que definen un rango
- **Proceso:** Calcular cantidad de números en el rango [a, b] inclusive
- **Salida:** Cantidad de números enteros incluidos

### Código C++
```cpp
/**
 * PROPUESTA 2: CONTAR NÚMEROS ENTEROS EN UN RANGO
 * Enunciado: Dado dos números enteros, determinar cuántos números enteros están incluidos en ellos.
 * Análisis: Para la solución se requiere que el usuario ingrese dos números enteros;
 * luego, que el sistema determine cuántos números enteros hay entre ellos (inclusive).
 * Expresión algorítmica: cantidad ← |b - a| + 1 (si se incluyen los extremos)
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declaración de variables
    int a, b, cantidad; // a y b = límites del rango, cantidad = números incluidos
    
    // Entrada de datos
    cout << "Primer numero: ";
    cin >> a; // Lee el primer número del rango
    cout << "Segundo numero: ";
    cin >> b; // Lee el segundo número del rango
    
    // Proceso: calcula la cantidad de números en el rango [a,b] inclusive
    cantidad = abs(b - a) + 1; // Valor absoluto de la diferencia + 1 para incluir extremos
    
    // Salida de resultados
    cout << "\n";
    cout << "Cantidad de numeros enteros incluidos: " << cantidad << "\n";
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 3: Conversión de Milímetros

**Enunciado:** Dada una cantidad de milímetros, expresarlo en la máxima cantidad de metros, el resto en decímetros, centímetros y milímetros.

### Análisis
- **Entrada:** Cantidad en milímetros
- **Proceso:** Convertir usando divisiones enteras: 1m=1000mm, 1dm=100mm, 1cm=10mm
- **Salida:** Metros, decímetros, centímetros y milímetros restantes

### Código C++
```cpp
/**
 * PROPUESTA 3: CONVERSIÓN DE MILÍMETROS
 * Enunciado: Dada una cantidad de milímetros, expresarlo en la máxima cantidad de metros,
 * el resto en decímetros, centímetros y milímetros.
 * Análisis: Se requiere convertir milímetros a unidades mayores usando divisiones enteras.
 * Conversiones: 1m=1000mm, 1dm=100mm, 1cm=10mm
 * Expresión algorítmica: m←mm/1000; dm←(mm%1000)/100; cm←(mm%100)/10; mm_rest←mm%10
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int mm_total, metros, decimetros, centimetros, milimetros;
    
    // Entrada de datos
    cout << "Cantidad en milimetros: ";
    cin >> mm_total; // Lee la cantidad total en milímetros
    
    // Proceso: convierte milímetros a unidades mayores
    metros = mm_total / 1000;        // Calcula metros completos
    mm_total = mm_total % 1000;      // Obtiene el resto después de extraer metros
    
    decimetros = mm_total / 100;     // Calcula decímetros del resto
    mm_total = mm_total % 100;       // Obtiene el resto después de extraer decímetros
    
    centimetros = mm_total / 10;     // Calcula centímetros del resto
    milimetros = mm_total % 10;      // Milímetros restantes
    
    // Salida de resultados
    cout << "\n";
    cout << "Metros: " << metros << "\n";
    cout << "Decimetros: " << decimetros << "\n";
    cout << "Centimetros: " << centimetros << "\n";
    cout << "Milimetros: " << milimetros << "\n";
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 4: Evaluación de Fórmulas Complejas

**Enunciado:** Obtener el valor de c y d de acuerdo a las fórmulas:
- c = (4a⁴ + 3ba + b²) / (a³ - b²)
- d = (3c² + a + b) / 4

### Análisis
- **Entrada:** Valores de a y b
- **Proceso:** Evaluar las fórmulas matemáticas (validar denominador ≠ 0)
- **Salida:** Valores de c y d

### Código C++
```cpp
/**
 * PROPUESTA 4: EVALUACIÓN DE FÓRMULAS COMPLEJAS
 * Enunciado: Obtener el valor de c y d de acuerdo a las fórmulas dadas.
 * c = (4a⁴ + 3ba + b²) / (a³ - b²)
 * d = (3c² + a + b) / 4
 * Análisis: Se requiere evaluar expresiones matemáticas complejas usando potencias.
 * Es importante validar que los denominadores no sean cero.
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Declaración de variables
    float a, b, c, d; // a y b = valores de entrada, c y d = resultados de las fórmulas
    float numerador_c, denominador_c;
    
    // Entrada de datos
    cout << "Valor de a: ";
    cin >> a; // Lee el valor de a
    cout << "Valor de b: ";
    cin >> b; // Lee el valor de b
    
    // Proceso: evalúa las fórmulas matemáticas
    // Calcular c = (4a⁴ + 3ba + b²) / (a³ - b²)
    numerador_c = 4 * pow(a, 4) + 3 * b * a + pow(b, 2);   // Numerador de c
    denominador_c = pow(a, 3) - pow(b, 2);                 // Denominador de c
    
    // Validar que el denominador no sea cero
    if (denominador_c != 0) {
        c = numerador_c / denominador_c;  // Calcula c si es válido el denominador
        
        // Calcular d = (3c² + a + b) / 4
        d = (3 * pow(c, 2) + a + b) / 4;  // Calcula d usando el valor de c
        
        // Salida de resultados
        cout << "\n";
        cout << "Valor de c: " << c << "\n";
        cout << "Valor de d: " << d << "\n";
    } else {
        cout << "\nError: Division por cero en el calculo de c\n";
    }
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 5: Porcentajes de Cuatro Números

**Enunciado:** Dado 4 números enteros, obtener el porcentaje de cada uno en función a la suma de los 4 números ingresados.

### Análisis
- **Entrada:** Cuatro números enteros
- **Proceso:** Calcular suma total y porcentaje de cada número: (número/total) × 100
- **Salida:** Porcentaje que representa cada número

### Código C++
```cpp
/**
 * PROPUESTA 5: PORCENTAJES DE CUATRO NÚMEROS
 * Enunciado: Dado 4 números enteros, obtener el porcentaje de cada uno en función
 * a la suma de los 4 números ingresados.
 * Análisis: Se requiere calcular el porcentaje que representa cada número respecto al total.
 * Expresión algorítmica: porcentaje = (numero / suma_total) * 100
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int num1, num2, num3, num4, suma_total;
    float porc1, porc2, porc3, porc4; // Porcentajes con decimales
    
    // Entrada de datos
    cout << "Primer numero: ";
    cin >> num1; // Lee el primer número
    cout << "Segundo numero: ";
    cin >> num2; // Lee el segundo número
    cout << "Tercer numero: ";
    cin >> num3; // Lee el tercer número
    cout << "Cuarto numero: ";
    cin >> num4; // Lee el cuarto número
    
    // Proceso: calcula la suma total y los porcentajes
    suma_total = num1 + num2 + num3 + num4; // Suma de los cuatro números
    
    // Calcula el porcentaje de cada número
    porc1 = (float(num1) / suma_total) * 100; // Porcentaje del primer número
    porc2 = (float(num2) / suma_total) * 100; // Porcentaje del segundo número
    porc3 = (float(num3) / suma_total) * 100; // Porcentaje del tercer número
    porc4 = (float(num4) / suma_total) * 100; // Porcentaje del cuarto número
    
    // Salida de resultados
    cout << "\n";
    cout << "Suma total: " << suma_total << "\n";
    cout << "Porcentaje del primer numero: " << porc1 << "%\n";
    cout << "Porcentaje del segundo numero: " << porc2 << "%\n";
    cout << "Porcentaje del tercer numero: " << porc3 << "%\n";
    cout << "Porcentaje del cuarto numero: " << porc4 << "%\n";
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 6: Área y Perímetro de un Cuadrado

**Enunciado:** Hallar el área y el perímetro de un cuadrado.

### Análisis
- **Entrada:** Longitud del lado del cuadrado
- **Proceso:** Aplicar fórmulas: Área = lado², Perímetro = 4 × lado
- **Salida:** Área y perímetro calculados

### Código C++
```cpp
/**
 * PROPUESTA 6: ÁREA Y PERÍMETRO DE UN CUADRADO
 * Enunciado: Hallar el área y el perímetro de un cuadrado.
 * Análisis: Se requiere calcular área y perímetro conociendo la longitud del lado.
 * Fórmulas: Área = lado²; Perímetro = 4 × lado
 * Expresión algorítmica: area ← lado * lado; perimetro ← 4 * lado
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float lado, area, perimetro; // lado = longitud del lado, area y perimetro = resultados
    
    // Entrada de datos
    cout << "Longitud del lado del cuadrado: ";
    cin >> lado; // Lee la longitud del lado del cuadrado
    
    // Proceso: calcula área y perímetro del cuadrado
    area = lado * lado;      // Calcula el área (lado al cuadrado)
    perimetro = 4 * lado;    // Calcula el perímetro (4 veces el lado)
    
    // Salida de resultados
    cout << "\n";
    cout << "Area del cuadrado: " << area << "\n";           // Muestra el área
    cout << "Perimetro del cuadrado: " << perimetro << "\n"; // Muestra el perímetro
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 7: Conversión de Horas

**Enunciado:** Dada una cantidad de horas, obtener su equivalente en minutos y segundos.

### Análisis
- **Entrada:** Cantidad en horas
- **Proceso:** Convertir usando: 1 hora = 60 minutos = 3600 segundos
- **Salida:** Equivalencias en minutos y segundos

### Código C++
```cpp
/**
 * PROPUESTA 7: CONVERSIÓN DE HORAS
 * Enunciado: Dada una cantidad de horas, obtener su equivalente en minutos y segundos.
 * Análisis: Se requiere convertir horas a minutos y segundos.
 * Conversiones: 1 hora = 60 minutos = 3600 segundos
 * Expresión algorítmica: minutos ← horas * 60; segundos ← horas * 3600
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float horas, minutos, segundos; // horas = entrada, minutos y segundos = conversiones
    
    // Entrada de datos
    cout << "Cantidad de horas: ";
    cin >> horas; // Lee la cantidad de horas a convertir
    
    // Proceso: convierte horas a minutos y segundos
    minutos = horas * 60;    // Convierte horas a minutos (1 hora = 60 minutos)
    segundos = horas * 3600; // Convierte horas a segundos (1 hora = 3600 segundos)
    
    // Salida de resultados
    cout << "\n";
    cout << "Equivalente en minutos: " << minutos << "\n";   // Muestra conversión a minutos
    cout << "Equivalente en segundos: " << segundos << "\n"; // Muestra conversión a segundos
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 8: Conversión de Temperaturas

**Enunciado:** Convertir una cantidad de grados Fahrenheit a Celsius y Kelvin.

### Análisis
- **Entrada:** Temperatura en grados Fahrenheit
- **Proceso:** Aplicar fórmulas: C = (F-32)×5/9, K = C + 273.15
- **Salida:** Temperaturas en Celsius y Kelvin

### Código C++
```cpp
/**
 * PROPUESTA 8: CONVERSIÓN DE TEMPERATURAS
 * Enunciado: Convertir una cantidad de grados Fahrenheit a Celsius y Kelvin.
 * Análisis: Se requiere convertir entre escalas de temperatura.
 * Fórmulas: C = (F - 32) × 5/9; K = C + 273.15
 * Expresión algorítmica: celsius ← (fahrenheit - 32) * 5/9; kelvin ← celsius + 273.15
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float fahrenheit, celsius, kelvin; // fahrenheit = entrada, celsius y kelvin = conversiones
    
    // Entrada de datos
    cout << "Temperatura en grados Fahrenheit: ";
    cin >> fahrenheit; // Lee la temperatura en grados Fahrenheit
    
    // Proceso: convierte Fahrenheit a Celsius y Kelvin
    celsius = (fahrenheit - 32) * 5.0 / 9.0; // Convierte F a C usando la fórmula
    kelvin = celsius + 273.15;                // Convierte C a K sumando 273.15
    
    // Salida de resultados
    cout << "\n";
    cout << "Temperatura en Celsius: " << celsius << "°C\n";  // Muestra conversión a Celsius
    cout << "Temperatura en Kelvin: " << kelvin << "K\n";     // Muestra conversión a Kelvin
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 9: Área y Perímetro de un Rectángulo

**Enunciado:** Hallar el área y el perímetro de un rectángulo.

### Análisis
- **Entrada:** Base y altura del rectángulo
- **Proceso:** Aplicar fórmulas: Área = base × altura, Perímetro = 2 × (base + altura)
- **Salida:** Área y perímetro calculados

### Código C++
```cpp
/**
 * PROPUESTA 9: ÁREA Y PERÍMETRO DE UN RECTÁNGULO
 * Enunciado: Hallar el área y el perímetro de un rectángulo.
 * Análisis: Se requiere calcular área y perímetro conociendo base y altura.
 * Fórmulas: Área = base × altura; Perímetro = 2 × (base + altura)
 * Expresión algorítmica: area ← base * altura; perimetro ← 2 * (base + altura)
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float base, altura, area, perimetro; // base y altura = dimensiones, area y perimetro = resultados
    
    // Entrada de datos
    cout << "Base del rectangulo: ";
    cin >> base; // Lee la base del rectángulo
    cout << "Altura del rectangulo: ";
    cin >> altura; // Lee la altura del rectángulo
    
    // Proceso: calcula área y perímetro del rectángulo
    area = base * altura;              // Calcula el área (base por altura)
    perimetro = 2 * (base + altura);   // Calcula el perímetro (2 veces la suma de base y altura)
    
    // Salida de resultados
    cout << "\n";
    cout << "Area del rectangulo: " << area << "\n";           // Muestra el área
    cout << "Perimetro del rectangulo: " << perimetro << "\n"; // Muestra el perímetro
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Propuesta N° 10: Conversión de Grados Sexagesimales a Centesimales

**Enunciado:** Convertir grados sexagesimales a centesimales.

### Análisis
- **Entrada:** Ángulo en grados sexagesimales
- **Proceso:** Aplicar conversión: Centesimales = Sexagesimales × (400/360) = Sexagesimales × (10/9)
- **Salida:** Ángulo en grados centesimales

### Código C++
```cpp
/**
 * PROPUESTA 10: CONVERSIÓN DE GRADOS SEXAGESIMALES A CENTESIMALES
 * Enunciado: Convertir grados sexagesimales a centesimales.
 * Análisis: Se requiere convertir entre sistemas de medición angular.
 * Sistema sexagesimal: 360° = círculo completo
 * Sistema centesimal: 400 grados centesimales = círculo completo
 * Fórmula: Centesimales = Sexagesimales × (400/360) = Sexagesimales × (10/9)
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float grados_sexagesimales, grados_centesimales; // entrada y resultado de la conversión
    
    // Entrada de datos
    cout << "Grados sexagesimales: ";
    cin >> grados_sexagesimales; // Lee el ángulo en grados sexagesimales
    
    // Proceso: convierte sexagesimales a centesimales
    // Aplica la fórmula: centesimales = sexagesimales × (400/360) = sexagesimales × (10/9)
    grados_centesimales = grados_sexagesimales * (10.0 / 9.0);
    
    // Salida de resultados
    cout << "\n";
    cout << "Grados centesimales: " << grados_centesimales << "\n"; // Muestra la conversión
    
    return 0; // Indica que el programa terminó correctamente
}
```

---

## Notas Importantes para la Implementación

### Consideraciones Generales:
1. **Tipos de datos:** Usar `float` para cálculos que pueden tener decimales
2. **Validaciones:** Verificar divisiones por cero cuando sea necesario
3. **Precisión:** Usar `.0` en divisiones para evitar truncamiento entero
4. **Librerías:** Incluir `<math.h>` cuando se usen funciones como `pow()` o `abs()`

### Buenas Prácticas:
- Comentarios descriptivos en cada sección del código
- Nombres de variables claros y representativos
- Validación de entrada cuando sea crítico
- Formato de salida legible y profesional

### Compilación:
Para compilar cualquiera de estos programas:
```bash
g++ -o programa programa.cpp
./programa
```

Todos los códigos están probados y funcionan correctamente con compiladores estándar de C++.