/*Nombre de la tarea: ft_rrange
Archivos esperados: ft_rrange.c
Funciones permitidas: malloc

--------------------------------------------------------------------------------

Escriba la siguiente función:

int *ft_rrange(int start, int end);

Debe reservar memoria (con malloc()) para un array de enteros, llenarlo con valores consecutivos
que comiencen en end y terminen en start (¡incluyendo start y end!), y luego
devolver un puntero al primer valor del arreglo.

Ejemplos:

- Con (1, 3) devolverá un array que contiene 3, 2 y 1.

- Con (-1, 2) devolverá un array que contiene 2, 1, 0 y -1.

- Con (0, 0) devolverá un array que contiene 0.

- Con (0, -3) devolverá un array que contiene -3, -2, -1 y 0.*/

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int aux_num;
	aux_num = start - end;
	if (aux_num < 0)
	{
		aux_num = aux_num * - 1;
	}
	int *range = malloc(sizeof(int)* aux_num);
	while (start <= end)
	{
		range[i] = end;
		end--;
		i++;
	}
	return (range);
}
#include <stdio.h>

int main()
{
	int start = 1;
	int end = -4;
	int i = 0;
	int *num = ft_rrange(start, end);

	while (start <= end)
	{
		printf("%d", num[i]);
		end--;
		i++;
	}
}
