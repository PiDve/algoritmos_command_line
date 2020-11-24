/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l4-q6.c -o l4-q6.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro, i=0;

    printf("Digite o valor: \n");
    scanf("%d", &inteiro);

    while (i <= inteiro)
    {
        printf("%d*%d = %d \n",i,inteiro, i*inteiro);
        i++;
    }

    system("PAUSE");
    return 0;
}
