/**
 * PROBLEMA 10: CONVERSIÓN DE SEGUNDOS EN HORAS, MINUTOS Y SEGUNDOS
 * Enunciado: Crear un programa que permita convertir una cantidad de segundos en horas, minutos y segundos.
 * Análisis: Para la solución de este problema se requiere que el usuario ingrese un tiempo expresado en
 * segundos; luego, que el sistema procese y obtenga las horas, minutos y segundos restantes.
 * Expresión algorítmica:
 * h ← t div 3600; t ← t mod 3600; m ← t div 60; s ← t mod 60
 * Conversiones: 1 hora = 3600 segundos, 1 minuto = 60 segundos
 */
#include <iostream>
using namespace std;

int main() {
    // Declaración de constantes
    const int HORA = 3600;      // 1 hora = 3600 segundos
    const int MINUTO = 60;      // 1 minuto = 60 segundos
    
    // Declaración de variables
    int t, h, m, s; // t = tiempo total, h = horas, m = minutos, s = segundos
    
    // Entrada de datos
    cout << "Tiempo en segundos: ";
    cin >> t; // Lee el tiempo total en segundos a convertir
    
    // Proceso: convierte segundos a horas, minutos y segundos usando divisiones enteras
    h = t / HORA;           // Calcula horas completas (división entera)
    t = t % HORA;           // Obtiene el resto después de extraer las horas
    m = t / MINUTO;         // Calcula minutos completos del resto
    s = t % MINUTO;         // Los segundos restantes después de extraer minutos
    
    // Salida de resultados
    cout << "\n";
    cout << "Hora: " << h << "\n";        // Muestra las horas calculadas
    cout << "Minuto: " << m << "\n";      // Muestra los minutos calculados
    cout << "Segundo: " << s << "\n";     // Muestra los segundos restantes
    
    return 0; // Indica que el programa terminó correctamente
}