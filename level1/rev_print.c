/*Nombre de la asignación: rev_print
Archivos esperados: rev_print.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que toma una cadena y la muestra en orden inverso, seguida de un salto de línea.

Si el número de parámetros no es 1, el programa muestra un salto de línea.

Ejemplos:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if(argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            i++;
        }
        while(i > 0)
        {
            i--;
            write(1, &argv[1][i], 1);
        }
    }
    write (1, "\n", 1);
}
/*Recorremos el string hasta que sea nulo y nuestra i quede en la ultima posicion del string, luego le decimos en otro bucle 
que mientras la posicion de la i valga mas que 0 que es la primera posicion del string, 
itere para atras mientras printea cada letra del string de orden inverso*/