/*Nombre de la tarea: paramsum

Archivos esperados: paramsum.c

Funciones permitidas: write

--------------------------------------------------------------------------------

Escriba un programa que muestre el número de argumentos recibidos, seguido de
una nueva línea.

Si no hay argumentos, muestre un 0 seguido de una nueva línea.

Ejemplo:

$> ./paramsum 1 2 3 5 7 24

6
$> ./paramsum 6 12 24 | cat -e
3$

$> ./paramsum | cat -e
0$
*/

#include <unistd.h>

void ft_putnbr (int n)
{
	char num;

	if (n < 10)
	{
		num = n + '0';
		write (1, &num, 1);

	}
	else
	{
		ft_putnbr (n / 10);
		num = '0' + (n % 10);
		write (1, &num, 1);
	}
}

int main (int argc, char **argv)
{
		ft_putnbr(argc - 1);
		write (1, "\n", 1);
		return (0);
}
