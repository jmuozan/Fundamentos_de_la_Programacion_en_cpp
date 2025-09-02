/**
 * PROBLEMA 6: NÚMERO EN ORDEN INVERSO
 * Enunciado: Dado un número de 5 dígitos, devolver el número en orden inverso.
 * Análisis: Para la solución de este problema se requiere que el usuario ingrese un número
 * que el sistema procese y obtenga el número inverso realizando 4 divisiones sucesivas entre 10,
 * acumular el residuo y el último cociente.
 * Expresión algorítmica:
 * r ← n mod 10; n ← n div 10; n1 ← r * 10 (repetir proceso)
 * Ejemplo: 12345 → 54321
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int n, n1, r; // n = número original, n1 = número invertido, r = residuo
    
    // Entrada de datos
    cout << "Numero: ";
    cin >> n; // Lee el número de 5 dígitos a invertir
    
    // Proceso: extrae cada dígito y forma el número invertido
    r = n % 10;        // Extrae el último dígito (unidades)
    n = n / 10;        // Elimina el último dígito del número original
    n1 = r;            // Inicia el número invertido con el primer dígito extraído
    
    r = n % 10;        // Extrae el segundo dígito (decenas originales)
    n = n / 10;        // Elimina el dígito procesado
    n1 = n1 * 10 + r;  // Agrega el dígito al número invertido
    
    r = n % 10;        // Extrae el tercer dígito (centenas originales)
    n = n / 10;        // Elimina el dígito procesado
    n1 = n1 * 10 + r;  // Continúa formando el número invertido
    
    r = n % 10;        // Extrae el cuarto dígito (miles originales)
    n = n / 10;        // Elimina el dígito procesado
    n1 = n1 * 10 + r;  // Agrega el dígito al resultado
    
    r = n % 10;        // Extrae el último dígito (decenas de miles originales)
    n1 = n1 * 10 + r;  // Completa el número invertido
    
    // Salida de resultados
    cout << "\n";
    cout << "Inverso: " << n1 << "\n"; // Muestra el número invertido
    
    return 0; // Indica que el programa terminó correctamente
}