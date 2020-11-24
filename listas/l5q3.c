/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l5-q3.c -o l5-q3.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int n,j,i,l;

    printf("Qual o número de linhas? ");
    scanf("%d", &n);

    // Limpando matriz
    int mat[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = 0;
        }
    }

    // Preenchendo matriz
    mat[1][1] = 1;
    for(i=0;i<n;i++){
        mat[i][0] = 1;
        for(j=1;j<n;j++){
            if(i > j){
                for(l=j-1;l<i;l++){
                    mat[i][j] += mat[l][j-1];
                }
            }
            if(i == j)
                mat[i][j] = 1;
        }
    }

    // Imprimindo matriz
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (i >= j){
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
