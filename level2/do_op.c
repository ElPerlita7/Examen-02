/*
Nombre de la asignación: do_op
Archivos esperados: do_op.c
Funciones permitidas: atoi, printf, write
--------------------------------------------------------------------------------

Escriba un programa que acepte tres cadenas:
- La primera y la tercera son representaciones de enteros con signo en base 10 que caben en un entero.
- La segunda es un operador aritmético entre: + - * / %

El programa debe mostrar el resultado de la operación aritmética solicitada, seguido de un salto de línea.
 Si el número de parámetros no es 3, el programa simplemente muestra un salto de línea.
Se puede asumir que la cadena no contiene errores ni caracteres extraños. Los números negativos, 
tanto en la entrada como en la salida, tendrán un solo '-' inicial. El resultado de la operación cabe en un entero.

Ejemplos:

$> ./do_op "123" "*" 456 | gato -e
56088$
$> ./do_op "9828" "/" 234 | gato -e
42$
$> ./do_op "1" "+" "-43" | gato -e
-42$
$> ./do_op | gato -e
$*/
#include <stdlib.h>
#include <unistd.h>

void putnbr(int num)
{
    char result;

    if (num < 10)
    {
        result = '0' + num;
        write(1, &result, 1);
    }
    else
    {
        putnbr(num / 10);
        result = '0' + (num % 10);
        write(1, &result, 1);
    }
}
int main(int argc, char **argv)
{
    int num1;
    int num2;
    int result;

    if (argc != 4)
        return(write(1, "\n", 1));

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if(argv[2][0] == '+')
    {
        result = num1 + num2;
    }
    else if(argv[2][0]== '-')
    {
        result = num1 - num2;
    }
    else if(argv[2][0] == '*')
    {
        result = num1 * num2;
    }
    else if(argv[2][0] == '/')
    {
        result = num1 / num2;
    }
    else if(argv[2][0] == '%')
    {
        result = num1 % num2;
    }
    putnbr(result);
    write(1, "\n", 1);
    return(0);
}