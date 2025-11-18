/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproducir el comportamiento de la función strcpy (man strcpy).

copiar un string(origen) a otro string (destino)

La función debe declararse de la siguiente manera:

char    *ft_strcpy(char *s1, char *s2);*/

char    *ft_strcpy( char *s1, char *s2)
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
/*hacemos un bucle donde le decimos mientras que s2(src) no sea nulo que entre al bucle, 
una vez dentro igualamos el s2(src), al s1(destino) donde queremos copiar y lo iteramos.
igualamos el s1(destino) a nulo para que sepa cuando acaba y devolvemos s1(destino)*/