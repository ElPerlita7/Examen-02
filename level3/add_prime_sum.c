/*Nombre de la tarea: add_prime_sum
Archivos esperados: add_prime_sum.c
Funciones permitidas: write, exit

-------------------------------------------------------------------------

Escriba un programa que reciba un entero positivo como argumento y muestre la suma
de todos los números primos menores o iguales a él, seguida de un salto de línea.

Si el número de argumentos no es 1, o si el argumento no es un número positivo,

muestre simplemente 0 seguido de un salto de línea.

Sí, los ejemplos son correctos.

Ejemplos:
$> ./add_prime_sum 5
10
$> ./add_prime_sum 7 | cat -e
17$
$> ./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>
void ft_putnbr(int n)
{
	char num;

	if (n < 10)
	{
		num = n + '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		num = '0' + (n % 10);
		write(1, &num, 1);
	}
}
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
int ft_isprime(int n)
{
	int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main(int argc, char **argv)
{
	int n = 0;

	if (argc != 2)
		return (write(1, "\n", 1), 0);

	int num = ft_atoi(argv[1]);
	while (num > 1)
	{
		if (ft_isprime(num) == 1)
			n = n + num;
		num--;
	}
	ft_putnbr(n);
	write(1, "\n", 1);
	return (0);
}
