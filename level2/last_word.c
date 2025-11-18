/*Nombre de la asignación: last_word
Archivos esperados: last_word.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su última palabra seguida de un \n.

Una palabra es una sección de cadena delimitada por espacios/tabulaciones o por el inicio/fin de la cadena.

Si el número de parámetros no es 1 o no hay palabras, muestra una nueva línea.

Ejemplo:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this ... is sparta, then again, perhaps not" | cat -e
not$
$> ./last_word " " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word " lorem,ipsum " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int end;

    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            i++;
        }
        i--; // Retraso una posicion para atras para no estar en el nulo
        while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t')) // Si hay espacio o tab lo omite.
            i--;
        if (i >= 0)
        {
            end = i; // le damos la posicion final de nuestra palabra
            while (i >= 0 && (argv[1][i] != ' ' && argv[1][i] != '\t')) // Mientras no sea espacio o tab avanza para atras
            {
                i--;
            }
            i++; // Avanza una posicion por si esta en espacio o tab se quede en el caracter siguiente
            while (i <= end) // Mientras la i sea menor que nuestro final que escriba lo q lea
            {
                write (1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write (1, "\n", 1);
}
/*Recorro el argumento hasta nulo una vez en nulo itero una posicion hacia atras para no estar en el nulo,
hago un bucle donde le digo que mientras sea igual a espacio o tab avance para atras
y lo omita, una vez en la posicion final de la palabra final hago un if de mientras la i sea mayor o igual a 0
entra y le da el valor de i a end para marcar la posicion final de la palabra y hago un bucle
donde le digo que mientras no sea igual a espacio o tab se avance hacia atras hasta llegar al primer espacio o tab
que encuentre para y se quede en esa posicion y lo avanzo una posicion para que este en el comienzo de nuestra ultima
palabra y ahora le digo que mientras i sea menor que end itere hacia delante mientras va escribiendo
lo que hay en la ultima palabra y acabe en end que esta en nuestra ultima posicion de la palabra */
