/*
PROBLEMA 5: RADICACIÓN
Enunciado: Hallar la radicación de ⁿ√a, donde «a» y «n» pertenecen a Z⁺ (números enteros positivos).
Análisis: Para la solución de este problema se requiere que el usuario ingrese dos números enteros
positivos «a» y «n»; luego, que el sistema procese y obtenga la radicación r.
Expresión matemática: r = ⁿ√a = a^(1/n)
Expresión algorítmica: r ← a^(1/n)
*/

#include <iostream>
#include <math.h>  // Librería necesaria para la función pow()
using namespace std;

int main() {
    // Declaración de variables
    int a;         // a = radicando (número bajo la raíz)
    short n, r;    // n = índice de la raíz, r = resultado de la radicación
    
    // Entrada de datos
    cout << "a: ";
    cin >> a;      // Lee el radicando
    cout << "n: ";
    cin >> n;      // Lee el índice de la raíz
    
    // Proceso: calcula la radicación usando la función pow()
    // La raíz n-ésima de a es equivalente a a elevado a la (1/n)
    r = pow((double)a, 1.0/(double)n);  // Calcula a^(1/n)
    
    // Salida de resultados
    cout << "\n";
    cout << "Raiz: " << r << "\n";      // Muestra el resultado de ⁿ√a
    
    return 0;  // Indica que el programa terminó correctamente
}