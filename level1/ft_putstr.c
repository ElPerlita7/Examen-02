/*Nombre de la asignación: ft_putstr
Archivos esperados: ft_putstr.c
Funciones permitidas: escritura
--------------------------------------------------------------------------------

Escribe una función que muestre una cadena en la salida estándar.

El puntero pasado a la función contiene la dirección del primer carácter de la cadena.

La función debe declararse de la siguiente manera:

void ft_putstr(char *str);*/

#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main()
{
     ft_putstr("Holakeloke");
     return(0);
}
/*Crear un iterador y hacemos un bucle que le decimos mientras 
no sea nulo que avance  y printee con un write cada letra que vaya leyendo*/