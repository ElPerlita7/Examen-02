/*Nombre de la asignación: str_capitalizer
Archivos esperados: str_capitalizer.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una o varias cadenas y, para cada argumento,
escriba en mayúscula el primer carácter de cada palabra (si es una letra, obviamente),
escriba el resto en minúsculas y muestre el resultado en la salida estándar, seguido de \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios o
tabulaciones, o por el inicio o el final de la cadena. Si una palabra solo tiene una letra,
debe escribirse en mayúscula.

Si no hay argumentos, el programa debe mostrar \n.

Ejemplo

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX"
"   But... This iS not THAT COMPLEX"
"     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
	 Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	int j;
	char c;

	if (argc < 2)
		return (write(1, "\n", 1), 0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			if (j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
			{
				if (c >= 'a' && c <= 'z')
					c = c - 32;
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
					c = c + 32;
			}
			write(1, &c, 1);
			j++;
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
