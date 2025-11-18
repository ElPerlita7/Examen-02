/*
Nombre de la asignación: alpha_mirror
Archivos esperados: alpha_mirror.c
Funciones permitidas: write
-------------------------------------------------------------------------
Escriba un programa llamado alpha_mirror que tome una cadena y la muestre después de reemplazar 
cada carácter alfabético por el carácter alfabético opuesto, seguido de un salto de línea.
'a' se convierte en 'z', 'Z' en 'A', 'd' en 'w', 'M' en 'N', y así sucesivamente.
No se distingue entre mayúsculas y minúsculas.
Si el número de argumentos no es 1, se muestra solo un salto de línea.
*/


#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                argv[1][i] = 'z' - argv[1][i] + 'a';
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                argv[1][i] = 'Z' - argv[1][i] + 'A';
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
/*Mientras el argumento no sea nulo entra al bucle una vez dentro comprueba si el argumento esta entre a y z entra 
y le da valor al argumento de 'z' - el caracter que le pasa al argumento  + 'a' y con las mayusculas hace lo mismo*/