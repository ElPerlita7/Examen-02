/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Escriba una función que devuelva la longitud de una cadena.

Su función debe declararse de la siguiente manera:

int     ft_strlen(char *str);*/

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
// Recorro el str hasta nulo para recorrer su string y 
// lo incremento con la i++ y devuelvo la i para ver cuantos caracteres avanzo hasta nulo