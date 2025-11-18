/*
Nombre de la asignación: fizzbuzz
Archivos esperados: fizzbuzz.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que imprima los números del 1 al 100, separados por una nueva línea.

Si el número es múltiplo de 3, imprime "fizz".

Si el número es múltiplo de 5, imprime "buzz".

Si el número es múltiplo de 3 y de 5, imprime "fizzbuzz".

Ejemplo:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
abferrer@DESKT
*/
#include <unistd.h>

void ft_putnbr(int n)
{
    char num;

    if (n < 10) // si el caracter es menor de 10 lo imprime directamente
    {
        num = '0'+ n; // Convierte un numero en su caracter correspondiente
        write (1, &num, 1);
    }
    else // Aqui entra si n es un numero mayor que 10
    {
        ft_putnbr(n / 10); // divide el numero entre 10 y vuelve a entrar recursivamente al if de arriba
        num = '0' + (n % 10); // se queda con el resto del numero de n
        write (1, &num , 1); // imprime el resto con el que se quedo
    }
}
int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);

        else
            ft_putnbr(i);
            write (1, "\n", 1);
        i++;
    }
    return(0);
}
/* hago un bucle donde le digo que si la i estra en 1 y 100 entre al bucle una vez dentro
le digo que si i es multiplo de 3 y 5 printee fizzbuzz y si es i es multiplo de 3 que printee fizz y si i es multiplo de 5 printee buzz.
Si no escribe el numero que es y ya */
