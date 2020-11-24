/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

//compilar gcc l3-q2.c -o l3-q2.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    float imc,m,h;
    int tipo_user, idade;
    char *user, *situacao;
    printf("Digite 1 se for Docente. \nDigite 2 se for Discente.\nDigite 3 se for Técnico.\nDigite 4 se for não-definido.\n");
    scanf("%d", &tipo_user);
    if(tipo_user == 1)
        user = "Docente";
    if(tipo_user == 2)
        user = "Discente";
    if(tipo_user == 3)
        user = "Técnico";
    if(tipo_user == 4)
        user = "Não-Definido";

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): \n");
    scanf("%f", &h);

    printf("Digite seu peso (em kg): \n");
    scanf("%f", &m);

    imc = (m / pow(h,2));

    if(imc > 17.00)
        situacao = "Muito abaixo do peso";
    if( (imc >= 17.00) && (imc <= 18.49) )
        situacao = "Abaixo do peso";
    if( (imc >= 18.50) && (imc <= 24.99) )
        situacao = "Peso normal";
    if( (imc >= 24.50) && (imc <= 29.99) )
        situacao = "Acima do peso";
    if( (imc >= 30.00) && (imc <= 34.99) )
        situacao = "Obesidade I";
    if( (imc >= 35.00) && (imc <= 39.99) )
        situacao = "Obesidade II (severa)";
    if( (imc > 40.00 ) )
        situacao = "Obesidade III (mórbida)";

    printf("\nRELATÓRIO DE SAÚDE");
    printf("\nUsuário: %s \n", user);
    printf("Idade: %d \n", idade);
    printf("Massa: %.2f \n", m);
    printf("Altura: %.2f \n", h);
    printf("IMC: %.2f \n", imc);
    printf("Situação: %s \n", situacao);

    system("PAUSE");
    return 0;
}
