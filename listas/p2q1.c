#include <stdio.h>  //para pegar printf e scanf
#include <locale.h> //para pegar acentua��o de portugu�s no print
#include <stdlib.h> //para aloca��o de mem�ria no vetor e fun��o sizeof
#include <math.h>

//compilar gcc p2-q1.c -o p2-q1.exe -lm

// Bubble Sort
int main()
{
    setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s

    int i = 0;          /* contador */
    float buffer = 0.0, /* buffer para trocar valores no vetor */
        vetor[9];       /* vetor de 10 posi��es iniciando no 0 */

    while (i <= 9) /* Lista para pegar todos os 10 valores do array */
    {
        printf("valor %d: \n", i + 1); /* print para perguntar o valor do pr�ximo termo */
        scanf("%f", &vetor[i]);        /* scanf grava o valor digitado pelo usu�rio para proxima posi��es do array */
        i++;                           /* Contador que determina a at� quando repetir no while */
    }
    // int len = sizeof(vetor) / sizeof(int); //pegando o tamanho do vetor

    for (i = 0; i < 10; i++) //repeti��o que verifica todo o arrai
    {
        if (i >= 1) //Condi��o para entrar na ordena��o
        {
            if (vetor[i] < vetor[i - 1]) // Se o valor atual for menor que o anterior
            {
                while ((vetor[i] < vetor[i - 1]) && (i < 10)) //repeti��o enquanto o vetor atual for menor que anterior
                {
                    buffer = vetor[i - 1];   //buffer para vetor anterior
                    vetor[i - 1] = vetor[i]; //vetor anterior recebe valor de atual
                    vetor[i] = buffer;       //vetor atual recebe o valor de anterior
                    i++;                     //vai percorrendo at� escapar da condi��o
                }
                i = 0; // indice i � resetado para continuar empurrando os valores maiores at� todos estarem ordenados
            }
        }
    }
    printf("\nMostrando vetor:"); //quebra de linha
    for (i = 0; i < 10; i++)
    { //repeti��o para imprimir na tela os valores ordenados do arrai
        printf("%.2f ", vetor[i]);
    }
    printf("\n"); //quebra de linha
    system("PAUSE");

    return (1);
}
