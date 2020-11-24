/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdlib.h>
//compilar gcc l4-q3.c -o l4-q3.exe -lm

//Programa I
#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i <= 5)
        printf("*\n");
    i = i + 1;
    system("PAUSE");
    return 0;
}

// Programa II
// #include<stdio.h>
// main()
// {
//     int i;
//     i = 1;
//     while (i <= 5)
//         printf("*\n");
// }

/*
Os dois códigos entram no laço infinito.
*/
