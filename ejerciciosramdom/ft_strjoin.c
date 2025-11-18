/*Nombre de función
ft_strjoin
Prototipo char *ft_strjoin(char const *s1, char const *s2);
Archivos a entregar
-
Parámetros s1: La primera string.
s2: La string a añadir a ’s1’.
Valor devuelto La nueva string.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Reserva (con malloc(3)) y devuelve una nueva
string, formada por la concatenación de ’s1’ y
’s2’.*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char const *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	char *join_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

	while (s1[i] != '\0')
	{
		join_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join_str[j] = s2[i];
		i++;
		j++;
	}
	join_str[j] = '\0';
	return (join_str);
}
int main ()
{
	const char *s1 = "uwu";
	const char *s2 = "owo";

	 printf("%s\n", ft_strjoin(s1, s2));
}
