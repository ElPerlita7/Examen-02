/*Nombre de la tarea: max
Archivos esperados: max.c
Funciones permitidas:

--------------------------------------------------------------------------------

Escriba la siguiente función:

int max(int* tab, unsigned int len);

El primer parámetro es un array de enteros, el segundo es el número de elementos en el array.

La función devuelve el número mayor encontrado en el array.

Si el array está vacío, la función devuelve 0.*/

int max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int max_num;

    if (len == 0)
        return (0);
    max_num = tab[0];
    while (i < len)
    {
        if (tab[i] > max_num)
        {
            max_num = tab[i];
        }
        i++;
    }
    return (max_num);
}
/*creamos un contador en unsgined int (unsigned es que nunca puede ser negativo) y una variable donde vamos a guardar
el numero mas grande de la lista, hacemos una comprobacion de si len es igual a 0 es decir esta vacio acaba el programa, 
luego igualamos max num al primer numero de la lista (*tab) y hacemos un bucle de si i es menor que len que avance,
hacemos una comprobacion de si la lista (*tab) en su posicion es mayor que el max_num que hemos guardado que le de el valor a max_num 
del numero mas alto y luego lo devolvemos con un return */