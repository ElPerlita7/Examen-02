/*Nombre de la tarea: rev_wstr
Archivos esperados: rev_wstr.c
Funciones permitidas: write, malloc, free
--------------------------------------------------------------------------------

Escriba un programa que reciba una cadena como parámetro e imprima sus palabras en
orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios y/o tabulaciones, o el
inicio/final de la cadena.

Si el número de parámetros es distinto de 1, el programa mostrará
'\n'.

En los parámetros que se van a probar, no habrá espacios adicionales
es decir, no habrá espacios adicionales al principio ni al
final de la cadena, y las palabras siempre estarán separadas por un solo espacio.

Ejemplos:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>*/
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;

	if (argc == 2)
	{
		while (argv[1][i] != '\0') // coloco la i alfinal de la palabra
			i++;
		i--; // Retrocedo una desde el nulo
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				// salto espacios del final
				i--;
			if (i < 0)
				break;
			end = i;	// me guardo la posicion final de la palabra
			while (i >= 0 && (argv[1][i] != ' ' && argv[1][i] != '\t')) // Si es distinto a espacio o tab lo omito
				i--;
			start = i + 1;    //  le sumo uno y me guardo el principio de la palabra
			write(1, &argv[1][start], end - start + 1); // Imprimo y el argumento

			if (i > 0) // imprimir las palabras que queden a mi izquierda
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
