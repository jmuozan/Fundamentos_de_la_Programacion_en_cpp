/*
PROBLEMA 2: COCIENTE Y RESIDUO
Enunciado: Hallar el cociente y el residuo (resto) de dos números enteros.
Análisis: Para la solución de este problema se requiere que el usuario ingrese dos números enteros;
luego que el sistema realice el cálculo respectivo para hallar el cociente y residuo.
Expresión algorítmica: 
c ← n1 / n2
r ← n1 Mod n2
*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int n1, n2, c, r;  // n1 y n2 son los números de entrada, c es cociente, r es residuo
    
    // Entrada de datos
    cout << "Numero 1: ";
    cin >> n1;         // Lee el primer número (dividendo)
    cout << "Numero 2: ";
    cin >> n2;         // Lee el segundo número (divisor)
    
    // Proceso: calcula el cociente y el residuo
    c = n1 / n2;       // División entera para obtener el cociente
    r = n1 % n2;       // Operador módulo para obtener el residuo
    
    // Salida de resultados
    cout << endl;
    cout << "Cociente: " << c << endl;    // Muestra el cociente
    cout << "Residuo: " << r << endl;     // Muestra el residuo
    
    return 0;  // Indica que el programa terminó correctamente
}