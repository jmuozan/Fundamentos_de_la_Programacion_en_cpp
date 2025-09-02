/*
PROBLEMA 3: IGV Y PRECIO DE VENTA
Enunciado: Dado el valor de venta de un producto, hallar el IGV (19%) y el precio de venta.
Análisis: Para la solución de este problema se requiere que el usuario ingrese el valor de venta del
producto; luego, que el sistema realice el cálculo respectivo para hallar el IGV y el precio de venta.
Expresión algorítmica:
IGV ← vv * 0.19
pv ← vv + igv
*/

#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float vv, igv, pv;  // vv = valor de venta, igv = IGV, pv = precio de venta
    
    // Entrada de datos
    cout << "Valor de venta: ";
    cin >> vv;          // Lee el valor de venta sin IGV
    
    // Proceso: calcula el IGV y precio de venta
    igv = vv * 0.19;    // Calcula el IGV (19% del valor de venta)
    pv = vv + igv;      // Calcula el precio de venta (valor + IGV)
    
    // Salida de resultados
    cout << "\n";
    cout << "IGV: " << igv << "\n";           // Muestra el IGV calculado
    cout << "Precio de venta: " << pv << "\n"; // Muestra el precio final
    
    return 0;  // Indica que el programa terminó correctamente
}