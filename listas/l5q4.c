/* AUTOR: JEORGEAN A. DE ASSUNÇÂO LUZ
   DATA: 23/11/2020
   DESCRIÇÂO:
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


//compilar gcc l5-q4.c -o l5-q4.exe -lm

int main(){
    setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português

    int n=3,j,i,cl,w,z;

    // Preenchendo matriz A
    float matA[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Qual o valor matA[%d][%d] \n",i,j);
            scanf("%f", &matA[i][j]);
        }
    }

    // Preenchendo matriz B
    float matB[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Qual o valor matB[%d][%d] \n",i,j);
            scanf("%f", &matB[i][j]);
        }
    }

    // Transposta de A
    printf("\nTranposta de A\n");
    float matATransposta[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matATransposta[i][j] = matA[j][i];
            printf("%f ", matATransposta[i][j]);
        }
        printf("\n");
    }

    // Transposta de B
    printf("\nTransposta de B\n");
    float matBTransposta[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matBTransposta[i][j] = matB[j][i];
            printf("%f ", matBTransposta[i][j]);
        }
        printf("\n");
    }

    // Somando as matrizes
    printf("\nSomando as matrizes\n");
    float matSoma[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matSoma[i][j] = matA[i][j] + matB[i][j];
            printf("%f ", matSoma[i][j]);
        }
        printf("\n");
    }

    // Subtraindo as matrizes
    printf("\nSubtraindo as matrizes\n");
    float matSub[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matSub[i][j] = matA[i][j] - matB[i][j];
            printf("%f ", matSub[i][j]);
        }
        printf("\n");
    }

    // Multiplicando as matrizes
    printf("\nMultiplicando as matrizes\n");
    float matMul[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matMul[i][j] = 0;
            for(cl=0;cl<n;cl++){
                matMul[i][j] += matA[i][cl] * matB[cl][j];
            }
            printf("%f ", matMul[i][j]);
        }
        printf("\n");
    }

    // Achando o determinante de B
    float detB = 0;


    detB = ((matB[0][0]*matB[1][1]*matB[2][2]) +
            (matB[0][1]*matB[1][2]*matB[2][0]) +
            (matB[0][2]*matB[1][0]*matB[2][1])) - (
            (matB[0][2]*matB[1][1]*matB[2][1] ) +
            (matB[0][0]*matB[1][2]*matB[2][1] )+
            (matB[0][1]*matB[1][0]*matB[2][2] )
            );
    if(detB == 0){

        printf("Determinante da Matriz B é zero, \nlogo não é inversível e não é possivel calcular a divisão");
    }else
    {
        // Inversa de B
        printf("\nInversa da Matriz B\n");
        printf("\nMatriz B + Identidade\n");
        float matInvBTemp[n][n+3];
        float matInvB[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i == j){
                    matInvBTemp[i][j+3] = 1;
                    matInvBTemp[i][j+4] = 0;
                    matInvBTemp[i][j+5] = 0;
                    matInvBTemp[i][j] = matB[i][j];
                }else
                {
                    matInvBTemp[i][j] = matB[i][j];
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n+3;j++){
                printf("%f ", matInvBTemp[i][j]);
            }
            printf("\n");
        }

        float pivo[] = {1.0, matB[0][0], 0.0, 0.0};
        int contadorpivo = 0;
        float matInvBBuffer[n][n+3];


        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    int i3 = 0, j3 =0;
                    for(i3=0;i3<n;i3++){
                        for(j3=0;j3<n+3;j3++){
                            matInvBBuffer[i3][j3] = 0;
                            matInvBBuffer[i3][j3] = matInvBTemp[i3][j3];
                        }
                    }

                    for(w=0;w<n;w++){
                        for(z=0;z<n+3;z++){
                            if ( i != w )
                            {
                                //printf("\n %f %f %f %f %f \n", matInvBBuffer[i][j], matInvBBuffer[w][z], matInvBBuffer[w][j], matInvBBuffer[i][z], pivo[contadorpivo] );
                                matInvBTemp[w][z] = ( ( (matInvBBuffer[i][j] * matInvBBuffer[w][z]) - (matInvBBuffer[w][j] * matInvBBuffer[i][z]) ) / pivo[contadorpivo] );

                            }

                        }
                    }

                    // printf("\nPivo: %f \n",pivo[contadorpivo]);
                    // printf("\nStatus da Inversa da Matriz B\n");
                    // int i2 = 0, j2 = 0;
                    // for(i2=0;i2<n;i2++){
                    //     for(j2=0;j2<n+3;j2++){
                    //         printf("%f ", matInvBTemp[i2][j2]);
                    //     }
                    //     printf("\n");
                    // }
                    contadorpivo++;
                    if(contadorpivo == 2)
                        pivo[contadorpivo] = matInvBTemp[i][j];
                }
            }
        }
        if(contadorpivo == 3){
            pivo[contadorpivo] = 1/matInvBTemp[2][2];
            for(w=0;w<n;w++){
                for(z=0;z<n+3;z++){
                    if ( i != w )
                    {
                        matInvBTemp[w][z] = matInvBTemp[w][z]*pivo[contadorpivo];
                    }
                }
            }
        }
        printf("\nStatus final da Inversa da Matriz B\n");
        int i2 = 0, j2 = 0;
        for(i2=0;i2<n;i2++){
            for(j2=3;j2<n+3;j2++){
                matInvB[i2][j2-3] = 0;
                matInvB[i2][j2-3] = matInvBTemp[i2][j2];
                printf("%f ", matInvB[i2][j2-3]);
            }
            printf("\n");
        }

        // Dividindo as matrizes
        printf("\nMatriz A sobre Matriz B\n");
        float matDiv[3][3];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                matDiv[i][j] = 0;
                for(cl=0;cl<n;cl++){
                    matDiv[i][j] += matA[i][cl] * matInvB[cl][j];
                }
                printf("%f ", matDiv[i][j]);
            }
            printf("\n");
        }

    }
    system("PAUSE");
    return 0;
}
