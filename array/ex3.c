/*Fa¸ca um programa que leia 50 conjuntos de dois valores, o primeiro representando o n´umero do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, n, aluno, maior, menor;
    float altura, maior_altura, menor_altura;
    printf("Digite o numero do aluno e sua altura: ");
    scanf("%d %f", &aluno, &altura);
    maior = aluno;
    menor = aluno;
    maior_altura = altura;
    menor_altura = altura;
    for(i = 1; i < 50; i++){
        printf("Digite o numero do aluno e sua altura: ");
        scanf("%d %f", &aluno, &altura);
        if(altura > maior_altura){
            maior_altura = altura;
            maior = aluno;
        }
        if(altura < menor_altura){
            menor_altura = altura;
            menor = aluno;
        }
    }
    printf("O aluno mais alto e o %d com %.2f metros\n", maior, maior_altura);
    printf("O aluno mais baixo e o %d com %.2f metros\n", menor, menor_altura);
    return 0;
}