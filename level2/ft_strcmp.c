// /*Nombre de la asignación: ft_strcmp
// Archivos esperados: ft_strcmp.c
// Funciones permitidas:
// --------------------------------------------------------------------------------

// Reproduzca el comportamiento de la función strcmp (man strcmp).

// Su función debe declararse de la siguiente manera:

#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

