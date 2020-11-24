/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

//compilar gcc l5-q1.c -o l5-q1.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int y=0, i=0;
    float consumo[12], consumoMedio = 0, maiorConsumo = 0, menorConsumo = 1000000.00;

    // printf("Digite o valor: \n");
    // scanf("%d", &inteiro);

    while (i <= 11)
    {
        printf("%d mês quanto de consumo (em kWh): \n", i+1);
        scanf("%f", &consumo[i]);
        //printf("Consumo %.2f \n",consumo[i]);
        if (consumo[i] > maiorConsumo)
        {
            maiorConsumo = consumo[i];
            //printf("maiorConsumo %.2f \n", maiorConsumo);
        }
        if (consumo[i] < menorConsumo)
        {
            menorConsumo = consumo[i];
            //printf("menorConsumo %.2f \n", menorConsumo);

        }
        consumoMedio += consumo[i];

        i++;
    }
    consumoMedio = consumoMedio/12;
    printf("Consumo Médio: %.2f \n", consumoMedio);
    printf("Maior Consumo: %.2f \n", maiorConsumo);
    printf("Menor Consumo: %.2f \n", menorConsumo);

    system("PAUSE");
    return 0;
}
