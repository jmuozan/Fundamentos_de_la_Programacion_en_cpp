# Diagramas de Flujo

## ¿Qué es un Diagrama de Flujo?

Un **diagrama de flujo** es una representación gráfica que utiliza símbolos normalizados por ANSI para expresar las sucesivas instrucciones que se deben seguir para resolver un problema. Estas instrucciones no dependen de la sintaxis de ningún lenguaje de programación, sino que deben servir fácilmente para su transformación (codificación) en un lenguaje de programación.

## Símbolos Estándar de Diagramas de Flujo

### Símbolos Básicos

| Símbolo | Nombre | Descripción |
|---------|--------|-------------|
| ![Oval](https://via.placeholder.com/80x40/f0f0f0/000000?text=Oval) | **Inicio o Fin** | Marca el punto de inicio o finalización del algoritmo |
| ![Paralelogramo](https://via.placeholder.com/100x40/f0f0f0/000000?text=Paralelo) | **Entrada o Salida** | Representa operaciones de lectura de datos (entrada) o escritura de resultados (salida) |
| ![Rectángulo](https://via.placeholder.com/80x40/f0f0f0/000000?text=Rect) | **Proceso** | Indica una operación o cálculo que se debe realizar |
| ![Rombo](https://via.placeholder.com/80x60/f0f0f0/000000?text=Rombo) | **Decisión** | Representa una condición que puede ser verdadera o falsa, determinando el flujo del programa |
| ![Rectángulo con líneas](https://via.placeholder.com/80x50/f0f0f0/000000?text=SubAlg) | **SubAlgoritmo** | Indica una llamada a un procedimiento o función externa |

### Elementos de Conexión

| Símbolo | Nombre | Descripción |
|---------|--------|-------------|
| ![Círculo](https://via.placeholder.com/30x30/f0f0f0/000000?text=O) | **Conectores** | Une diferentes partes del diagrama en la misma página |
| ![Flecha](https://via.placeholder.com/60x20/f0f0f0/000000?text=→) | **Dirección (flujo)** | Indica la secuencia de ejecución del algoritmo |
| ![Pentágono](https://via.placeholder.com/80x40/f0f0f0/000000?text=Pent) | **Teclado** | Representa entrada de datos por teclado |
| ![Trapecio](https://via.placeholder.com/80x40/f0f0f0/000000?text=Trap) | **Impresora** | Indica salida de datos por impresora |
| ![Hexágono](https://via.placeholder.com/80x40/f0f0f0/000000?text=Hex) | **Pantalla** | Representa salida de datos en pantalla |

## Fases en la Creación de Algoritmos

### 1. **Análisis**
- Determinar cuál es exactamente el problema a resolver
- Identificar qué datos forman la entrada del algoritmo
- Definir cuáles deberán obtenerse como salida

### 2. **Diseño**
- Elaboración del algoritmo mediante diagramas de flujo o pseudocódigo

### 3. **Prueba**
- Comprobación del resultado
- Verificar si el algoritmo obtiene la salida esperada para todas las entradas posibles

## Ejemplo Práctico: Determinar si un Número es Par o Impar

A continuación se muestra el diagrama de flujo para determinar si un número es par o impar:

```
                    ┌─────────────┐
                    │   Inicio    │
                    └──────┬──────┘
                           │
                    ┌──────▼──────┐
                    │ n : Entero  │
                    │ r : Cadena  │
                    └──────┬──────┘
                           │
                    ┌──────▼──────┐
                    │   Leer n    │
                    └──────┬──────┘
                           │
                    ┌──────▼──────┐
                    │ n Mod 2=0?  │◄─── Decisión
                    └──┬───────┬──┘
                  F    │       │    V
              ┌────────▼──┐ ┌──▼────────┐
              │r←"IMPAR"  │ │r←"PAR"    │
              └────────┬──┘ └──┬────────┘
                       │       │
                       └───┬───┘
                           │
                    ┌──────▼──────┐
                    │  Escribir r │
                    └──────┬──────┘
                           │
                    ┌──────▼──────┐
                    │     Fin     │
                    └─────────────┘
```

### Explicación del Algoritmo:

1. **Inicio**: Comienza el programa
2. **Declaración**: Se declaran las variables `n` (entero) y `r` (cadena)
3. **Entrada**: Se lee el valor de `n` desde el usuario
4. **Decisión**: Se evalúa si `n Mod 2 = 0`
   - Si es **Verdadero (V)**: El número es par, se asigna "PAR" a `r`
   - Si es **Falso (F)**: El número es impar, se asigna "IMPAR" a `r`
5. **Salida**: Se muestra el resultado contenido en `r`
6. **Fin**: Termina el programa

## Ventajas de los Diagramas de Flujo

- **Claridad visual**: Facilitan la comprensión del algoritmo
- **Independientes del lenguaje**: No están ligados a un lenguaje de programación específico
- **Fácil seguimiento**: Permiten rastrear la lógica paso a paso
- **Detección de errores**: Ayudan a identificar problemas en la lógica
- **Documentación**: Sirven como documentación del proceso

## Herramientas Alternativas

Además de los diagramas de flujo, existen otras herramientas para el diseño de algoritmos:

- **Diagramas N-S (Nassi-Schneiderman)**: También conocidos como diagramas de Chapin
- **Pseudocódigo**: Representación en lenguaje natural estructurado
- **Diagramas de actividad UML**: Para sistemas más complejos

## Consejos para Crear Diagramas de Flujo Efectivos

1. **Usar símbolos estándar**: Seguir las convenciones ANSI
2. **Flujo de arriba hacia abajo**: Mantener un orden lógico
3. **Una entrada, una salida**: Cada símbolo debe tener un punto de entrada y salida claro
4. **Evitar cruces innecesarios**: Mantener el diagrama limpio y legible
5. **Incluir todas las posibilidades**: Considerar todos los casos posibles en las decisiones