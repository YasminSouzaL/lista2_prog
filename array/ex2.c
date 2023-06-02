/*Fa¸ca um programa que receba do usu´ario dois vetores, A e B, com 40 posi¸c˜oes de n´umeros
inteiros cada. Crie um novo vetor denominado C calculando C = A − B. Mostre na tela os
dados do vetor C.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, vetA[40], vetB[40], vetC[40];
    for(i=0;i<40;i++){
        printf("Digite o %d valor do vetor A: ", i+1);
        scanf("%d", &vetA[i]);
    }
    for(i=0;i<40;i++){
        printf("Digite o %d valor do vetor B: ", i+1);
        scanf("%d", &vetB[i]);
    }
    for(i=0;i<40;i++){
        vetC[i] = vetA[i] - vetB[i];
    }
    for(i=0;i<40;i++){
        printf("%d ", vetC[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}