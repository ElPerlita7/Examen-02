/*Nombre de la asignación: first_word
Archivos esperados: first_word.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escribe un programa que tome una cadena y muestre su primera palabra, seguida de un salto de línea.

Una palabra es una sección de cadena delimitada por espacios/tabuladores o por el inicio/fin de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, simplemente muestra un salto de línea.

Ejemplos:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this ... is sparta, then again, perhaps not" | cat -e
this$
$> ./first_word " " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word " lorem,ipsum " | gato -e
lorem,ipsum$*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            i++;
        }
        while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
/*hacemos un bucle  donde le decimos mientras el argumento sea igual a espacio o tab que lo omita y lo itere y 
luego otro bucle diciendole que si mientras no encuentra un nulo o un espacio o tabulador
printee lo que lee hasta que encuentre un espacio o tab o nulo y pare */