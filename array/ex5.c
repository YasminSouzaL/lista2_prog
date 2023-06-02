/*Fa¸ca um programa que permita ao usu´ario entrar com uma matriz de 3 x 3 n´umeros inteiros. Em
seguida, crie dois arrays unidimensionais de tamanho 3 cada, que conter˜ao a soma dos n´umeros
de cada linha da matriz no primeiro array e a soma de cada coluna da matriz no segundo*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, mat[3][3], vetA[3], vetB[3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<3;i++){
        vetA[i] = mat[i][0] + mat[i][1] + mat[i][2];
    }
    for(i=0;i<3;i++){
        vetB[i] = mat[0][i] + mat[1][i] + mat[2][i];
    }
    for(i=0;i<3;i++){
        printf("%d ", vetA[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("%d ", vetB[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}