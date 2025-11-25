/*Nombre de la tarea: ft_strdup
Archivos esperados: ft_strdup.c
Funciones permitidas: malloc

--------------------------------------------------------------------------------

Reproduzca el comportamiento de la función strdup (consulte la página del manual de strdup).

Su función debe declararse de la siguiente manera:

char *ft_strdup(char *src);*/

#include <unistd.h>
#include <stdlib.h>

int ft_strlen (char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strdup(char *src)
{
	 int i = 0;
	 int len = ft_strlen(src);
	 char *dup = malloc(len + 1);

	 if (!dup)
	 	return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
