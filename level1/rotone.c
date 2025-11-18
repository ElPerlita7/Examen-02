/*Nombre de la asignación: rotone
Archivos esperados: rotone.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena y la muestre, reemplazando cada una de sus letras por la siguiente en orden alfabético.

'z' se convierte en 'a' y 'Z' en 'A'. No se modifica el uso de mayúsculas y minúsculas.

La salida irá seguida de un \n.

Si el número de argumentos no es 1, el programa muestra \n.

Ejemplo:

$>./rotone "abc"
bcd
$>./rotone "Los empleados del personal no siempre son muy buenos." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | gato -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

int main(int argc, char **argv)
{
#include <unistd.h>

int i = 0;
char c;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            c = argv[1][i];

            if(c >= 'a' && c <= 'z')
            {
                if (c == 'z')
                c = 'a';
                else
                c = c + 1;
            }
            else if(c >= 'A' && c <= 'Z')
            {
                if (c == 'Z')
                c = 'A';
                else
                c = c + 1;             
            }
            write (1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
/*
Hago un bucle donde entra mientras no sea nulo el argumento, 
una vez dentro le digo que si esta entre a y z 
minuscula haga una codicion de si c es == 'a' lo convierta en z, si no es igual solo a c le suma + 1 
para que vaya a su siguiente posicion y lo mismo con las mayusculas, si no es un caracter en a y z mayus o minus, imprime igual
*/
