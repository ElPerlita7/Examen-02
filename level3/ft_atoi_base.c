/*Nombre de la tarea: ft_atoi_base
Archivos esperados: ft_atoi_base.c
Funciones permitidas: Ninguna
--------------------------------------------------------------------------------

Escriba una función que convierta la cadena de texto str (base N <= 16)

a un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef
Estos deben ajustarse según la base solicitada. Por ejemplo,

la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

También deben reconocerse las mayúsculas: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') se interpretan solo si son el primer carácter de la cadena.


Tu función debe declararse de la siguiente manera:

int ft_atoi_base(const char *str, int str_base);*/

int getvalue (char c)
{
	int i = 0;
	char base[16] = "0123456789ABCDEF";
	char basemin[16] = "0123456789abcdef";

	while (base[i] != '\0')
	{
		if (c == base[i] || c == basemin[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
int ft_atoi_base(char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if (str[i] == '+')
	i++;
	else if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	while (str[i] != '\0' && getvalue(str[i]) != -1)
	{
		result = result * str_base + getvalue(str[i]);
		i++;
	}
	return (result * sign);
}
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int num_decimal;
	int num_hex;
	int num_bin;

	num_decimal = ft_atoi_base("123", 10);
	num_hex = ft_atoi_base("1A3F", 16);
	num_bin = ft_atoi_base("1011", 2);

	printf("Decimal: %d\n", num_decimal);
	printf("Decimal  og: %d\n", atoi("123ABCD"));
	printf("Hexadecimal: %d\n", num_hex);
	printf("Binario: %d\n", num_bin);

	return 0;
}
