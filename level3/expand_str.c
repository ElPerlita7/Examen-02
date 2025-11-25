/*Nombre del ejercicio: expand_str
Archivos esperados: expand_str.c
Funciones permitidas: write

Escribe un programa que reciba una cadena y la muestre por pantalla con exactamente tres espacios entre cada palabra, sin espacios ni tabulaciones al principio ni al final, seguido de un salto de línea.

Una palabra es una parte de la cadena delimitada por espacios o tabulaciones, o por el inicio o el final de la cadena.

Si el número de parámetros no es 1, o si no hay palabras, el programa debe mostrar solo un salto de línea.

Ejemplos:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$

$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$

$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$

$> ./expand_str "" | cat -e
$

$> ./expand_str "vous    voyez  c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$

$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$

$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$

$> ./expand_str "" | cat -e
$*/

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			while ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i] != '\0') // Si es espacio o tab o diferente a nulo lo omito
			{
				i++;
			}
			while (argv[1][i] != ' ' && argv[1][i] != '\t'  && argv[1][i] != '\0') // Si es diferente a espacio o tab o nulo
			{
				write(1, &argv[1][i], 1); // imprimo la palabra
				i++;
			}
			j = i; // Le doy a otra variable para iterar la posicion en i que es alfinal de la pabra
			while ((argv[1][j] == ' ' || argv[1][j] == '\t') && argv[1][j] != '\0') // y si es espacio o tab lo omito y diferente a nulo
			{
				j++;
			}
			if (argv[1][j] == '\0') // Si el argumento esta vacio salgo del programa
			{
				break;
			}
			write (1, "   ", 3); // imprimo tres espacios despues de cumplir todas las condiciones
		}
	}
	write(1, "\n", 1);
}

// int main(int argc, char *argv[])
// {
// 	int i;
// 	int j;

// 	if (argc == 2)
// 	{
// 		j = 0;
// 		while (argv[1][j])
// 			j++;
// 		while (argv[1][j - 1] == 32 || argv[1][j - 1] == 9)
// 		{
// 			j--;
// 		}
// 		printf("%d\n", j);
// 		i = 0;
// 		while (argv[1][i] && i < j)
// 		{
// 			while (argv[1][i] == 32 || argv[1][i] == 9)
// 				i++;
// 			if (i + 1 < j && argv[1][i + 1] == 32 || argv[1][i + 1] == 9)
// 			{
// 				write(1, &argv[1][i], 1);
// 				write(1, "-", 1);
// 				write(1, "   ", 3);
// 			}
// 			else
// 				write(1, &argv[1][i], 1);
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }
