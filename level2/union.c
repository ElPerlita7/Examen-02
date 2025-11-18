/*/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Escriba un programa que tome dos cadenas y muestre, sin dobles, el
caracteres que aparecen en cualquiera de las cadenas.

La pantalla se mostrará en el orden en que aparecen los caracteres en la línea de comando y
irá seguido de un \n.

Si el número de argumentos no es 2, el programa muestra \n.

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/
#include <unistd.h>

int checker_repeat(char letra, char *pito1)
{
    int i = 0;

    while (pito1[i] != '\0')
    {
        if (pito1[i] == letra)
         {
            return (1);
         }
         i++;
    }
    return (0);
}
int main (int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char pito1[256];

    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            if (checker_repeat(argv[1][i], pito1) == 0)
            {
                pito1[j] = argv[1][i];
                write (1, &argv[1][i], 1);
                j++;
            }
            i++;
        }
        i = 0;
        while (argv[2][i] != '\0')
        {
            if (checker_repeat(argv[2][i], pito1) == 0)
            {
                pito1[j] = argv[2][i];
                write (1, &argv[2][i], 1);
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}
