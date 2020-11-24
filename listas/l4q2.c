/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

//compilar gcc l4-q2.c -o l4-q2.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro,i=0, buffer = 0;

    printf("Digite o valor: \n");
    scanf("%d", &inteiro);

    while (i <= inteiro)
    {
        buffer = buffer + pow(i,2);
        i++;
        printf("Soma: %d \n", buffer);

    }
    printf("Soma Final: %d \n", buffer);

    system("PAUSE");
    return 0;
}
