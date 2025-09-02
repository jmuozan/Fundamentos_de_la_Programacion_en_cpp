/**
 * PROBLEMA 8: CALCULAR EL INTERÉS COMPUESTO
 * Enunciado: Calcular el interés compuesto generado por un capital depositado durante cierta cantidad de
 * tiempo, a una tasa de interés determinada. Aplique las siguientes fórmulas: M = (1 + r%)^t·C  I = M - C
 * Análisis: Para la solución de este problema se requiere que el usuario ingrese el capital "c" y la tasa de
 * interés "r"; luego, que el sistema procese y obtenga el interés ganado y el monto producido.
 * Expresión matemática: M = (1 + r%)·C
 * Expresión algorítmica: m ← ((1 + r / 100) ^ t) * c
 * Definiciones: Monto (M) = capital + intereses, Tasa (r%) = ganancia por cada 100 unidades,
 * Capital (C) = cantidad inicial, Interés (I) = ganancia obtenida, Tiempo (t) = período
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Declaración de variables
    float c, r, t, i, m; // c = capital, r = tasa de interés, t = tiempo, i = interés, m = monto
    
    // Entrada de datos
    cout << "Capital: ";
    cin >> c; // Lee el capital inicial a invertir
    cout << "Tasa de interes: ";
    cin >> r; // Lee la tasa de interés anual en porcentaje
    cout << "Tiempo: ";
    cin >> t; // Lee el tiempo en períodos (años)
    
    // Proceso: calcula el monto usando la fórmula de interés compuesto
    // M = C * (1 + r/100)^t, donde r está en porcentaje
    m = pow((1 + r / 100), t) * c; // Calcula el monto final usando potenciación
    i = m - c; // Calcula el interés ganado (diferencia entre monto y capital)
    
    // Salida de resultados
    cout << "\n";
    cout << "Interes: " << i << "\n"; // Muestra el interés ganado
    cout << "Monto: " << m << "\n"; // Muestra el monto total (capital + intereses)
    
    return 0; // Indica que el programa terminó correctamente
}