/*ft_strtrim
Prototipo char *ft_strtrim(char const *s1, char const *set);
Archivos a entregar
-
Parámetros s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Valor devuelto La string recortada.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
Nombre de función
ft_split
Prototipo char **ft_split(char const *s, char c);
Archivos a entregar
-
Parámetros s: La string a separar.
c: El carácter delimitador.
Valor devuelto El array de nuevas strings resultante de la
separación.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc, free
Descripción Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.*/

// s1 "patata" set = pa; result = tat
#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char const *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int find_true(char c, char const *set)
{
	int i = 0;

	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int start = 0;
	int j = 0;
	char *new_str;
	int end = ft_strlen(s1);

	while (s1[start] != '\0')
	{
		if (find_true(s1[start], set) == 0)
		{
			break;
		}
		start++;
	}
	while (start < end)
	{
		if (find_true(s1[end - 1], set) == 0)
		{
			break;
		}
		end--;
	}
	new_str = malloc((end - start + 1) * sizeof(char));

	j = 0;

	while (start < end)
	{
		new_str[j] = s1[start];
		start++;
		j++;
	}
	new_str[j] = '\0';
	return(new_str);
}

int main ()
{
	char s1[] = "HolaKelokeee";
	char set[] = "Hoee";
	char *new_str = ft_strtrim(s1, set);

	printf("%s\n", new_str);
}
