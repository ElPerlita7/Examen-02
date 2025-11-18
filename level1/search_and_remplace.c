/*Nombre de la asignación: buscar_y_reemplazar
Archivos esperados: buscar_y_reemplazar.c
Funciones permitidas: escribir, salir
--------------------------------------------------------------------------------

Escriba un programa llamado search_and_replace que acepte 3 argumentos.
 El primero es una cadena en la que se reemplaza una letra (segundo argumento) por otra (tercer argumento).

Si el número de argumentos no es 3, simplemente se muestra una nueva línea.

Si el segundo argumento no está contenido en el primero (la cadena), el programa simplemente reescribe la cadena seguida de una nueva línea.

Ejemplos:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zazz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ y David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
encOre Un ExEmPle Pas Facile a Ecrire $
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char search;
    char remplace;

    if (argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }
    if ((argv[2][0] == '\0' || argv[2][1] != '\0') || (argv[3][0] == '\0' || argv[3][1] != '\0')) // si los argumentos son invalido me imprime "\n"
    {
        write (1, "\n", 1);
        return(0);
    }
    // si son validos cambio los valores de search and remplace
        search = argv[2][0];
        remplace = argv[3][0];

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == search) // si la posicion donde esta el primer argumento coincide con search
            write (1, &remplace, 1); // si coincide escribe la que remplaza
        else 
            write (1, &argv[1][i], 1); // si no escribimos el mismo caracter
        i++;  
    }
    write (1, "\n", 1);
    return(0);
}
/*
primero compruebo si hay 3 argumentos, si no lo hay imprimo un salto de linea y salgo del programa, 
luego compruebo si en los argumentos 2 y 3 son validos y que solo haya un caracter en los 2 argumentos.
Si no son validos imprimo un salto de linea y si son valido es decir solo hay un caracter 
le doy el valor a las variables search y remplace en posicion del primer caracter de los argumentos.
Luego hago un bucle donde le digo mientras no llegue a nulo que entre y una vez dentro me comprueba si argv[1][i]
en su posicion es igual a search es decir argv[2][0], si lo es printea lo que hay en remplace 
si no escribe el mismo caracter que ya hay y no lo remplaza y iteramos con la i++.
*/

int main(int argc, char **argv)
{
    if (argc = 4)
    {
        int i = 0;
        if ((argv[2][0] == '\0' || argv[2][1] != '\0') || (argv[3][0] == '\0' || argv[3][1] != '\0'))
        {
            write (1, "\n", 1);
            return(0);
        }
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\0", 1);
}