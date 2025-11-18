/*Nombre de la tarea: ft_atoi

Archivos esperados: ft_atoi.c

Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escriba una función que convierta el argumento de cadena str a un entero (de tipo int)

y lo devuelva.

Funciona de forma similar a la función estándar atoi(const char *str), consulte la documentación.

Su función debe declararse de la siguiente manera:

int ft_atoi(const char *str);*/
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}


int main ()
{
	char str[] = "  1233  434 5";
	int num = ft_atoi(str);
	printf("%d", num);
}
