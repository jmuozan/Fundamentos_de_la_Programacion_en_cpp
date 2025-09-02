/*
PROBLEMA 1: SUMA DE DOS NÚMEROS
Enunciado: Dados dos números enteros, hallar la suma.
Análisis: Para la solución de este problema se requiere que el usuario ingrese dos números enteros;
luego que el sistema realice el cálculo respectivo para hallar la suma.
Expresión matemática: s = n1 + n2
Expresión algorítmica: s ← n1 + n2
*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int n1, n2, s;  // n1 y n2 son los números de entrada, s es la suma
    
    // Entrada de datos
    cout << "Numero 1: ";
    cin >> n1;      // Lee el primer número
    cout << "Numero 2: ";
    cin >> n2;      // Lee el segundo número
    
    // Proceso: calcula la suma
    s = n1 + n2;    // Suma los dos números y guarda el resultado en s
    
    // Salida de resultados
    cout << "Suma: " << s << "\n";  // Muestra la suma calculada
    
    cout << "Press any key to continue...";
    return 0;  // Indica que el programa terminó correctamente
}