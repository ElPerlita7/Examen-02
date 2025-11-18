/*Nombre de la tarea: rstr_capitalizer
Archivos esperados: rstr_capitalizer.c
Funciones permitidas: write
--------------------------------------------------------------------------------

Escriba un programa que tome una o más cadenas y, para cada argumento, escriba
la última letra de cada palabra en mayúscula y el resto en minúscula,
y luego muestre el resultado seguido de un salto de línea (\n).

Una palabra es una sección de cadena delimitada por espacios/tabulaciones o el inicio/fin de la cadena.

Si una palabra tiene una sola letra, debe escribirse con mayúscula inicial.

Una letra es un carácter del conjunto [a-zA-Z].

Si no hay parámetros, muestre un salto de línea (\n).

$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX"
"     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>*/

// #include <unistd.h>

// void ft_strcapitalizer(char *str)
// {
// 	int i = 0;
// 	char h;

// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'A' && str[i] <= 'Z' && !(str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t'))
// 		{ // Si el carácter actual es una letra mayúscula Y el siguiente carácter NO es un espacio, ni el final del texto, ni un tabulador
// 			h = str[i] + 32; // La convierto en minusculas
// 			write (1, &h, 1);

// 		}
// 		else if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '\t'))
// 		{ // Si el carácter actual es una letra minuscula y el siguiente carácter es un espacio,  el final del texto o un tabulador
// 			h = str[i] - 32; // LA convierte en mayuscula
// 			write (1, &h, 1);
// 		}
// 		else
// 			write (1, &str[i], 1); // Si no imprime el cacter que le pasen
// 		i++;
// 	}
// }

// int main (int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc != 2)
// 		write (1, "\n", 1);
// 	else
// 	{
// 		i = 1;
// 		while (i < argc)
// 		{
// 			ft_strcapitalizer(argv[i]);
// 			write (1, "\n", 1);
// 			i++;
// 		}
// 	}
// 	return (0);
// }

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];

			/* pasar todo a minúscula */
			if (c >= 'A' && c <= 'Z')
				c = c + 32;


			if ((c >= 'a' && c <= 'z') && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0'))
			{ // Si es a o z minuscula y es la siguiente posicion del caracter es igual a espacio o tab o nulo
				c = c - 32; // convertirla en mayuscula;
			}
			write(1, &c, 1); // imprimir la palabra
			j++;
		}

		if (i < argc - 1) // Si hay más cadenas por imprimir, añade salto de línea. Si es la última, no.
			write(1, "\n", 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}
