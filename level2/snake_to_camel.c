/*Nombre de la asignación: snake_to_camel
Archivos esperados: snake_to_camel.c
Funciones permitidas: malloc, free, realloc, write
--------------------------------------------------------------------------------

Escriba un programa que tome una sola cadena en formato snake_case
y la convierta en una cadena en formato lowerCamelCase.

Una cadena snake_case es una cadena donde cada palabra está en minúsculas, separada por un guión bajo "_".

Una cadena lowerCamelCase es una cadena donde cada palabra comienza con mayúscula,
excepto la primera.

Ejemplos:
$>./snake_to_camel "aquí_está_una_palabra_snake_case"
aquíEsUnaPalabraSnakeCase
$>./snake_to_camel "hola_mundo" | cat -e
holaMundo$
$>./snake_to_camel | cat -e
$*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == '_')
            {
                i++;
                argv[1][i] = argv[1][i] - 32;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, &argv[1][i], 1);
}