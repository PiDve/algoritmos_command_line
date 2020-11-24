/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
//compilar gcc l3-q1.c -o l3-q1.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    float salario;
    printf("Digite o Salário do funcionário: \n");
    scanf("%f", &salario);
    if(salario < 1000)
    {
        float imposto = salario * 0.05;
        printf("Imposto para pagar: %2f \n", imposto);


    }else if ( (salario >= 1000) && (salario <= 3500) )
    {
        float imposto = salario * 0.10;
        printf("Imposto para pagar: %2f \n", imposto);

    }else if ( (salario >= 3500) && (salario <= 10000))
    {
        float imposto = salario * 0.20;
        printf("Imposto para pagar: %2f \n", imposto);


    }else if (salario > 10000)
    {
        float imposto = salario * 0.27;
        printf("Imposto para pagar: %2f \n", imposto);

    }
    system("PAUSE");
    return 0;
}
