/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l5-q2.c -o l5-q2.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro = 10, i=3, penultimo=0, antepenultimo=0, proximo=0, vetor[9];


    // printf("1 Termo: 0 \n");
    // printf("2 Termo: 1 \n");
    antepenultimo = 0;
    vetor[0] = antepenultimo;
    penultimo = 1;
    vetor[1] = penultimo;
    while (i <= inteiro)
    {
        proximo = penultimo + antepenultimo;
        // printf("%d Termo: %d \n",i,proximo);
        vetor[i-1] = proximo;

        antepenultimo = penultimo;
        penultimo = proximo;
        i++;
    }
    i = 0;
    printf("Termos 1 ao 10: ");

    while (i <= inteiro-1)
    {
        printf("%d ",vetor[i]);

        i++;
    }
    printf("\n");

    system("PAUSE");
    return 0;
}
