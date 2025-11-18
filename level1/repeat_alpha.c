/*// Nombre de la asignación: repeat_alpha
// Archivos esperados: repeat_alpha.c
// Funciones permitidas: write
// --------------------------------------------------------------------------------

// Escribe un programa llamado repeat_alpha que tome una cadena y la muestre
// repitiendo cada carácter alfabético tantas veces como su índice alfabético,
// seguido de un salto de línea.

// 'a' se convierte en 'a', 'b' en 'bb', 'e' en 'eeeee', etc.

// Se mantiene el uso de mayúsculas y minúsculas.

// Si el número de argumentos no es 1, simplemente se muestra un salto de línea.

// Ejemplos:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | gato -e
// Aa ...
*/
 #include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char    c;
    int repeat;

    if (argc == 2)
    {
    while (argv[1][i] != '\0')
    {
        c = argv[1][i];
        if (c >= 'a' && c <= 'z')
        {
            repeat = c - 'a' + 1;
            while (repeat-- > 0)
                write (1, &c, 1);
        }
        else if (c >= 'A' && c <= 'Z')
        {
            repeat = c - 'A' + 1;
            while (repeat-- > 0)
                write (1, &c, 1);
        }
        else
            write (1, &c, 1);
        i++;
    }
    }
    write (1, "\n", 1);
}
