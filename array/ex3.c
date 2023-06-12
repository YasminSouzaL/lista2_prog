/*Fa¸ca um programa que leia 50 conjuntos de dois valores, o primeiro representando o n´umero do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, 
    char nome[50][50];
    float altura[50], maior, menor;
    for(i=0;i<50;i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome[i]);
        printf("Digite a altura do aluno: ");
        scanf("%f", &altura[i]);
    }
    maior = altura[0];
    menor = altura[0];
    for(i=0;i<50;i++){
        if(altura[i]>maior){
            maior = altura[i];
        }
        if(altura[i]<menor){
            menor = altura[i];
        }
    }
    printf("O aluno mais alto eh: %s com %.2f metros\n", nome[i], maior);
    printf("O aluno mais baixo eh: %s com %.2f metros\n", nome[i], menor);
    return 0;
}