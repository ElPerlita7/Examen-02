/*
Nombre de la tarea: tab_mult

Archivos esperados: tab_mult.c
Funciones permitidas: write

--------------------------------------------------------------------------------

Escriba un programa que muestre la tabla de multiplicar de un número.

El parámetro siempre será un número estrictamente positivo que quepa en un entero,

y dicho número multiplicado por 9 también cabe en un entero.

Si no hay parámetros, el programa muestra \n.

Ejemplos:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81

$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/
#include <unistd.h>

void ft_putnbr(int n)
{
	char num_char;

	if (n < 10)
	{
		num_char = n + '0';
		write (1, &num_char, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		num_char = (n % 10) + '0';
		write (1, &num_char, 1);
	}
}
int ft_atoi(const char *str)
{
	int i = 0;
	int result;

	 while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	 {
		i++;
	 }
	 while (str[i] >= '0' && str[i] <= '9')
	 {
		result = result * 10 + (str[i] - '0');
		i++;
	 }
	 return (result);
}
int main (int argc, char **argv)
{
	int i = 1;
	int num1 = ft_atoi(argv[1]);

	while (i < 10)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(num1);
		write (1, " = ", 3);
		ft_putnbr(i * num1);
		write (1, "\n", 1);
		i++;
	}
}
