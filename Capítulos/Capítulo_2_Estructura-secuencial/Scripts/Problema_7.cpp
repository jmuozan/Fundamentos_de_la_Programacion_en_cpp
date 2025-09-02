/**
 * PROBLEMA 7: SUMA DE LOS N PRIMEROS NÚMEROS ENTEROS POSITIVOS
 * Enunciado: Determinar la suma de los N primeros números enteros positivos (Z⁺);
 * use la siguiente fórmula: S = N(N+1)/2
 * Análisis: Para la solución de este problema se requiere que el usuario ingrese un número entero positivo
 * "n"; luego, que el sistema procese y obtenga la suma de los primeros números enteros positivos hasta "n".
 * Expresión matemática: S = N(N+1)/2
 * Expresión algorítmica: s ← (n * (n + 1)) / 2
 * Ejemplo: Si n = 5, entonces S = 1+2+3+4+5 = 15, usando fórmula: S = 5*(5+1)/2 = 30/2 = 15
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int n, s; // n = número límite, s = suma de los primeros n números
    
    // Entrada de datos
    cout << "Numero: ";
    cin >> n; // Lee el número hasta el cual sumar (1+2+3+...+n)
    
    // Proceso: aplica la fórmula matemática para la suma de números consecutivos
    // La fórmula S = n(n+1)/2 es más eficiente que sumar uno por uno
    s = (n * (n + 1)) / 2; // Calcula la suma usando la fórmula matemática
    
    // Salida de resultados
    cout << "\n";
    cout << "Suma: " << s << "\n"; // Muestra la suma de los primeros n números
    
    return 0; // Indica que el programa terminó correctamente
}