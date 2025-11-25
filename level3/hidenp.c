/*Nombre de la tarea: hidenp
Archivos esperados: hidenp.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa llamado hidenp que tome dos cadenas y muestre 1
seguido de un salto de línea si la primera cadena está oculta en la segunda;

de lo contrario, muestra 0 seguido de un salto de línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculta en s2 si es posible
encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.

Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra un salto de línea.

Ejemplos:

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | cat -e
1$
$>./hidenp "abc" "btarc" | cat -e
0$
$>./hidenp | cat -e
$
$>
*/

#include <unistd.h>

int hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[i] != '\0')
	{
		if (s1[j] == s2[i])
		{
			j++;
		}
		i++;
	}
	if (s1[j] == '\0')
	{
		return (1);
	}
	else
		return (0);
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{

		if (hidenp(argv[1], argv[2]) == 1)
		{
			write (1, "1", 1);
		}
		else
			write (1, "0", 1);
	}
	write (1, "\n", 1);
}
