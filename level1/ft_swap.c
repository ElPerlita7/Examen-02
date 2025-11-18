/*Nombre de la asignación: ft_swap
Archivos esperados: ft_swap.c
Funciones permitidas:
--------------------------------------------------------------------------------

Escriba una función que intercambie el contenido de dos enteros cuyas direcciones se pasan como parámetros.

Su función debe declararse de la siguiente manera:

void ft_swap(int *a, int *b);*/

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
Creo una variable temporal para guardar el valor de *a y no perder el valor de *a, luego le damos el valor de *b a *a 
y luego le damos a b el valor de temp que contiene el valor orignal que habia en *a
*/