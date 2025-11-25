/*Nombre de la asignación: inter
Archivos esperados: inter.c
Funciones permitidas: write
-------------------------------------------------------------------------
Escriba un programa que tome dos cadenas y muestre, sin dobles,
los caracteres que aparecen en ambas, en el orden en que aparecen en la primera.
La visualización irá seguida de un \n.
Si el número de argumentos no es 2, el programa mostrará \n.
Ejemplos:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int checker(char *pito, char letra)
{
	int i = 0;
	while (pito[i] != '\0')
	{
		if (pito[i] == letra)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int main (int argc, char **argv)
{
	int i = 0;
	int visto[256] = {0};
	char c;

	if (argc != 3)
	return (write (1, "\n", 1), 0);

	while (argv[1][i] != '\0')
	{
		if (checker(argv[2], argv[1][i]) == 1 && visto[argv[1][i]] == 0)
		{
			write (1, &argv[1][i], 1);
			visto[argv[1][i]] = 1;
		}
		i++;
	}
	write (1, "\n", 1);
}

// int main (int argc, char **argv)
// {
// 	int i = 0;
// 	int j = 0;
// 	char visto[256];
// 	char c;

// 	if (argc != 3)
// 	return (write (1, "\n", 1), 0);

// 	while (argv[1][i] != '\0')
// 	{
// 		if (checker(argv[2], argv[1][i]) == 1 && checker(visto, argv[1][i]) == 0)
// 		{
// 			write (1, &argv[1][i], 1);
// 			visto[j] = argv[1][i];
// 			j++;
// 		}
// 		i++;
// 	}
// 	write (1, "\n", 1);
// }
