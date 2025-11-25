// Nombre de la tarea: camel_to_snake
// Archivos esperados: camel_to_snake.c
// Funciones permitidas: malloc, realloc, write
// -------------------------------------------------------------------------
// Escriba un programa que tome una cadena de texto en formato lowerCamelCase

// y la convierta a formato snake_case.

// Una cadena lowerCamelCase es una cadena donde cada palabra comienza con una letra mayúscula

// excepto la primera.

// Una cadena snake_case es una cadena donde cada palabra está en minúscula,

// separadas por
// un guion bajo "_".

// Ejemplos:
// $> ./camel_to_snake "aquíHayUnaPalabraCamelCase"

// aquí_hay_una_palabra_camel_case
// $> ./camel_to_snake "holaMundo" | cat -e

// hola_mundo$

// $> ./camel_to_snake | cat -e


#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = argv[1][i] + 32;
				write(1, "_", 1);
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
