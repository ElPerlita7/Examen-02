/*
Nombre de la tarea: print_bits
Archivos esperados: print_bits.c
Funciones permitidas: write
-------------------------------------------------------------------------
Escriba una función que reciba un byte y lo imprima en binario SIN
UN SALTO DE LÍNEA
AL FINAL.

Su función debe declararse de la siguiente manera:

void print_bits(unsigned char octet);

Por ejemplo, si le pasa 2 a print_bits, imprimirá "00000010".

*/
#include <unistd.h>

void print_bits(unsigned char octet)
{ 
    int i = 8;

    unsigned char bit;

    while (i--)
    { 
    bit = (octet >> i & 1) + '0';
    write(1, &bit, 1);
    }
}
