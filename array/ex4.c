/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, mat[4][4], cont=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]>10){
                cont++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n", cont);
    system("pause");
    return 0;
}