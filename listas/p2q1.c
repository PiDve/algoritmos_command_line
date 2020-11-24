#include <stdio.h>  //para pegar printf e scanf
#include <locale.h> //para pegar acentuação de português no print
#include <stdlib.h> //para alocação de memória no vetor e função sizeof
#include <math.h>

//compilar gcc p2-q1.c -o p2-q1.exe -lm

// Bubble Sort
int main()
{
    setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português

    int i = 0;          /* contador */
    float buffer = 0.0, /* buffer para trocar valores no vetor */
        vetor[9];       /* vetor de 10 posições iniciando no 0 */

    while (i <= 9) /* Lista para pegar todos os 10 valores do array */
    {
        printf("valor %d: \n", i + 1); /* print para perguntar o valor do próximo termo */
        scanf("%f", &vetor[i]);        /* scanf grava o valor digitado pelo usuário para proxima posições do array */
        i++;                           /* Contador que determina a até quando repetir no while */
    }
    // int len = sizeof(vetor) / sizeof(int); //pegando o tamanho do vetor

    for (i = 0; i < 10; i++) //repetição que verifica todo o arrai
    {
        if (i >= 1) //Condição para entrar na ordenação
        {
            if (vetor[i] < vetor[i - 1]) // Se o valor atual for menor que o anterior
            {
                while ((vetor[i] < vetor[i - 1]) && (i < 10)) //repetição enquanto o vetor atual for menor que anterior
                {
                    buffer = vetor[i - 1];   //buffer para vetor anterior
                    vetor[i - 1] = vetor[i]; //vetor anterior recebe valor de atual
                    vetor[i] = buffer;       //vetor atual recebe o valor de anterior
                    i++;                     //vai percorrendo até escapar da condição
                }
                i = 0; // indice i é resetado para continuar empurrando os valores maiores até todos estarem ordenados
            }
        }
    }
    printf("\nMostrando vetor:"); //quebra de linha
    for (i = 0; i < 10; i++)
    { //repetição para imprimir na tela os valores ordenados do arrai
        printf("%.2f ", vetor[i]);
    }
    printf("\n"); //quebra de linha
    system("PAUSE");

    return (1);
}
