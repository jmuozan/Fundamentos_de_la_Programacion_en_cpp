/**
 * PROBLEMA 9: ÁREA DEL CÍRCULO
 * Enunciado: Crear un programa para encontrar el área de un círculo, use la fórmula: A = π·r²
 * Análisis: Para la solución de este problema se requiere que el usuario ingrese el radio del círculo;
 * luego, que el sistema procese y obtenga el área del círculo.
 * Expresión aritmética: A = π·r²
 * Expresión algorítmica: A ← 3.14159 * r ^ 2
 * Definiciones: Area (A) = área del círculo, Pi (π) = constante 3.14159, Radio (r) = radio del círculo
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Declaración de constantes
    const float PI = 3.14159F; // Definir la constante PI con mayor precisión
    
    // Declaración de variables
    float a, r; // a = área del círculo, r = radio del círculo
    
    // Entrada de datos
    cout << "Radio: ";
    cin >> r; // Lee el radio del círculo
    
    // Proceso: aplica la fórmula del área del círculo
    // A = π * r², usando la función pow para elevar al cuadrado
    a = PI * pow(r, 2); // Calcula área: PI por radio al cuadrado
    
    // Salida de resultados
    cout << "\n";
    cout << "Area: " << a << "\n"; // Muestra el área calculada
    
    return 0; // Indica que el programa terminó correctamente
}