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
/*Hago un if donde le digo que si n vale menos que 10 directamente le de su valor a num en char y lo imprima, 
si por ejemplo el numero es 123, entra al else y llama a la funcion recursivamente y hace 123 entre 10 donde se queda en 12 mientras abajo 
me quedo con su resto que seria 3 y lo imprimo, ahora hago lo mismo con 12 y imprimo el 2 y luego el 1 lo imprime en mi primera condicion que hice*/