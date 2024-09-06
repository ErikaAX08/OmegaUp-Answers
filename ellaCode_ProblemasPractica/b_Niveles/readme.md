# Descripción
Antonia está feliz con su reciente adquisición de un juego online, sin embargo al leer las reglas de este juego se da cuenta que debe realizar una decisión importante y te ha pedido ayuda. El juego está dividido en niveles, que deben ser completados de manera secuencial. Antes de iniciar con el primer nivel un jugador debe elegir una estrategia para obtener puntos extras en cada nivel. Con la primera estrategia se añade el producto de los dígitos de la puntuación, con la segunda estrategia se añade la suma de los cuadrados de los dígitos de la puntuación.

Por ejemplo, si en cierto nivel un jugador obtiene un puntaje de 756 puntos, con la primera estrategia se agregarían 210 = 7 x 5 x 6, mientras que con la segunda se agregarían 110 = 7² x 5² x 6².

La buena noticia es que Antonia sabe de antemano cuál es el rango de puntajes probables para cada nivel, tu tarea entonces es contabilizar para cuántos puntajes en este rango es mejor la primera estrategia y para cuántos es mejor la segunda.

## Entrada
La primera línea contiene un entero n, la cantidad de niveles en el juego. A continuación n líneas con los enteros ai y bi y separados por un espacio, que representan el intervalo cerrado [ai, bi] de posibles puntajes para el nivel i.

## Salida
n líneas con dos enteros separados por un espacio en cada una. El primer entero indica para cuántos puntajes en el rango dado es mejor la primera estrategia y el segundo entero indica para cuántos es mejor la segunda estrategia.
#### Ejemplo
| **Entrada** | **Salida** | **Descripción**                           |
|-------------|------------|-------------------------------------------|
| 3           | 0 3        | Nota que para un puntaje de ambas estrategias producen la misma cantidad de puntos extras.|
| 121 123     | 0 5        | |
| 120 124     | 0 0        | |
| 333 333     |            | |

## Cómo Ejecutar el Código

Ejecución en C:

```bash
gcc solucion.c -o solucion
./solucion