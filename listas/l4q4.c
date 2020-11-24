/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l4-q4.c -o l4-q4.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro,i=0, buffer = 0;

    printf("Digite o valor: \n");
    scanf("%d", &inteiro);

    while (i <= inteiro)
    {
        buffer = i%2;
        i++;
        if(buffer == 1)
            printf("Par: %d \n", i);

    }

    system("PAUSE");
    return 0;
}
