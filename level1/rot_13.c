#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c;

    while (argv[1][i] != '\0')
    {
        c = argv[1][i];
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
        {
            c = argv[1][i] + 13;
            write (1, &c, 1);
        }
        else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') || (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
        {
            c = argv[1][i] - 13;
            write (1, &c, 1);
        }
        else
            write (1, &c, 1);
        i++;
    }
    write (1, "\n", 1);
}
/* Recorro el argumento y le digo que si esta entre a y m mayuscula y minuscula a c
 le sume 13 luego le hago otro if diciendole que si esta entre n o z mayus y minuscula le reste 13*/