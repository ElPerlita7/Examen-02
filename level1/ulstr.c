/*Nombre de la asignación: ulstr
Archivos esperados: ulstr.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una cadena y cambie el formato de todas sus letras.
Los demás caracteres permanecen sin cambios.

Debe mostrar el resultado seguido de '\n'.

Si el número de argumentos no es 1, el programa muestra '\n'.

Ejemplos:

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI perSIsTent VAnIte et auto-justification." | gato -e
L'EspRIT Ne PEuT PLUS PROGRESSER S'iL STAgNE ET Si PERSISTENT vanNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOurer DE SECRET EST UN SIGNE DE MANQUE DE CONnaiSSANCE. " | gato -e
S'ENTOURER DE SECREt EST UN SIGNE DE MANQUE DE CONNAISSANCE.  $
$>./ulstr "3:21 Ba tOut moUn ki Ka di KE m'en Ka fe fot" | gato -e
3:21 bA TOUT MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | gato -e
$*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (c >= 'a' && c <= 'z')
            {
                c = c - 32;
                write (1, &c, 1);
            }
            else if (c >= 'A' && c <= 'Z')
            {
                c = c + 32;
                write (1, &c, 1);
            }
            else
                write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}
/*hago un bucle diciendo que mientras no sea nulo que entre,
una vez dentro le digo que si c que es el caracter que le pasan no esta entre a y z minuscula cambie su valor
a c + 32 para convertirlo en mayuscula y lo printee y si es una mayuscula y esta entre A y Z que le reste -32 para
convertirlo en minuscula y lo printee. Si no le digo que lo printee si no es un caracter entre A y Z para que me pongas
los espacios o otros caracteres que les pasan*/