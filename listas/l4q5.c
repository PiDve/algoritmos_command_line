/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l4-q5.c -o l4-q5.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int inteiro,
    z=6/* segundo contador */,
    i=0/* contador */,
    buffer = 0/* resto */,
    buffer1 = 0 /* resto2 */,
    buffer2 = 0/* soma */;

    printf("Digite o valor: \n");
    scanf("%d", &inteiro);

    while (z <= inteiro)
    {

        while (i <= z)
        {
            i++;
            buffer = z%i;
            //printf("buffer: %d \n", buffer);
            if(buffer == 0)
            {
                buffer2 += i;
                //printf("Número: %d \n", i);
            }
            buffer = 0;

        }

        if( (buffer2-z) == z)
        {
            printf("   %d é número perfeito\n",z);
        }
        else
        {
            //printf("   %d não é número perfeito\n",z);
        }
        buffer2 = 0;
        i = 0;
        z++;
    }
    system("PAUSE");
    return 0;
}
