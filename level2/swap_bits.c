/*Nombre de la tarea: swap_bits
Archivos esperados: swap_bits.c
Funciones permitidas:

-------------------------------------------------------------------------
Escriba una función que reciba un byte, intercambie sus mitades (como en el ejemplo)

y devuelva el resultado.

Su función debe declararse de la siguiente manera:

unsigned char swap_bits(unsigned char octet);

Example:
1 byte
_____________
0100 | 0001
\ /
/ \
0001 | 0100

*/

unsigned char swap_bits(unsigned char octet)
{
return ((octet >> 4) | (octet << 4));
}
/*

>> 4 quiere decir “mueve todas las luces 4 pasos a la derecha”.
Ejemplo: 1011 0010 → 0000 1011
(Las 4 luces de la izquierda se mueven a la derecha).

<< 4 quiere decir “mueve todas las luces 4 pasos a la izquierda”.
Ejemplo: 1011 0010 → 0010 0000
(Las 4 luces de la derecha se mueven a la izquierda).

| (OR) junta los dos resultados.
Si una luz está encendida en alguno de los dos, el resultado también tendrá esa luz encendida.

Así, el ordenador combina los dos grupos y consigue que las mitades se intercambien.

*/