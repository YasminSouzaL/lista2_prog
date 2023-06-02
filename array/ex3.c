/*Fa¸ca um programa que leia 50 conjuntos de dois valores, o primeiro representando o n´umero do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, vetA[50], vetB[50], vetC[50];
    for(i=0;i<50;i++){
        printf("Digite o %d valor do vetor A: ", i+1);
        scanf("%d", &vetA[i]);
    }
    for(i=0;i<50;i++){
        printf("Digite o %d valor do vetor B: ", i+1);
        scanf("%d", &vetB[i]);
    }
    for(i=0;i<50;i++){
        vetC[i] = vetA[i] - vetB[i];
    }
    for(i=0;i<50;i++){
        printf("%d ", vetC[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}