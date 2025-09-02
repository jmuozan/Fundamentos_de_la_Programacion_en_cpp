/*
PROBLEMA 4: POTENCIACIÓN
Enunciado: Hallar la potencia de aⁿ, donde «a» y «n» pertenecen a Z⁺ (números enteros positivos).
Análisis: Para la solución de este problema se requiere que el usuario ingrese dos números enteros
positivos «a» y «n»; luego, que el sistema procese y obtenga la potencia p.
Expresión matemática: p = aⁿ = a × a × a × ... × a (n factores)
Expresión algorítmica: p ← aⁿ
*/

#include <iostream>
#include <math.h>  // Librería necesaria para la función pow()
using namespace std;

int main() {
    // Declaración de variables
    short a, n;    // a = base, n = exponente (números enteros cortos)
    int p;         // p = potencia resultado
    
    // Entrada de datos
    cout << "a: ";
    cin >> a;      // Lee la base
    cout << "n: ";
    cin >> n;      // Lee el exponente
    
    // Proceso: calcula la potencia usando la función pow()
    p = (int)pow((double)a, (double)n);  // Convierte a double para pow(), luego a int
    
    // Salida de resultados
    cout << "\n";
    cout << "Potencia: " << p << "\n";   // Muestra el resultado de aⁿ
    
    return 0;  // Indica que el programa terminó correctamente
}