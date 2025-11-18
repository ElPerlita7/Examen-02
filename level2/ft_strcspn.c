/*Nombre de la tarea: ft_strcspn
Archivos esperados: ft_strcspn.c
Funciones permitidas: Ninguna
---------------------------------------------------------------

Reproduzca exactamente el comportamiento de la función strcspn

(man strcspn).

El prototipo de la función debe ser el siguiente:*/

#include <stdlib.h>
size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;
	while (reject[j] != '\0')
	{
		if (s[i] == reject[j])
			return (i);
		j++;
	}
		i++;
	}
	return (i);
}
/*Devuelve el número de caracteres al principio de s (la cadena original) que no contienen ninguno de los caracteres de reject.*/


#include <stdio.h>
int main ()
{
	const char str[] = "ksdfghueilrgbteruia";
	const char reject[] = "rau";

	int res = ft_strcspn(str, reject);
	printf ("%d\n", res);
}
