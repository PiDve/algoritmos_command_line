/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l4-q7.c -o l4-q7.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro, i=3, penultimo=0, antepenultimo=0, proximo=0;

    printf("Digite o valor: \n");
    scanf("%d", &inteiro);

    printf("1 Termo: 0 \n");
    printf("2 Termo: 1 \n");
    antepenultimo = 0;
    penultimo = 1;
    while (i <= inteiro)
    {
        proximo = penultimo + antepenultimo;
        printf("%d Termo: %d \n",i,proximo);
        antepenultimo = penultimo;
        penultimo = proximo;
        i++;
    }

    system("PAUSE");
    return 0;
}
