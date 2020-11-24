/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//compilar gcc l3-q3.c -o l3-q3.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int ano, bufferano = 0, resto = 0;

    printf("Digite o ano que quer verificar.\n");
    scanf("%d", &ano);
    while (bufferano <= ano+1)
    {
        bufferano = bufferano+4;
        if(bufferano == ano)
        {
            resto = bufferano%100;
            if(resto != 0)
            {
                printf("Esse ano: %d é bissexto\n", ano);
                break;
            }else
            {
                printf("Esse ano: %d não é bissexto\n", ano);
            }
        }
    }
    bufferano = 0;
    while (bufferano <= ano+1)
    {
        bufferano = bufferano+400;
        if(bufferano == ano)
        {
            resto = bufferano%100;
            if(resto != 0)
            {
                printf("Esse ano: %d é bissexto\n", ano);
                break;
            }else
            {
                printf("Esse ano: %d não é bissexto\n", ano);
            }
        }
    }

    system("PAUSE");
    return 0;
}
