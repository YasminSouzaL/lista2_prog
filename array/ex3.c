/*Fa¸ca um programa que leia 50 conjuntos de dois valores, o primeiro representando o n´umero do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
   int i;
   int nAluno[50], nAlto, nBaixo;
   float altura[50], alturaAlto, alturaBaixo;
    for(i=0;i<50;i++){
        printf("Digite o numero do aluno %d: ", i+1);
        scanf("%d", &nAluno[i]);
        printf("Digite a altura do aluno %d: ", i+1);
        scanf("%f", &altura[i]);
    }
    alturaAlto = altura[0];
    alturaBaixo = altura[0];
    for(i=0;i<50;i++){
        if(altura[i]>alturaAlto){
            alturaAlto = altura[i];
            nAlto = nAluno[i];
        }
        if(altura[i]<alturaBaixo){
            alturaBaixo = altura[i];
            nBaixo = nAluno[i];
        }
    }
    printf("O aluno mais alto e o aluno %d com %.2f metros.\n", nAlto, alturaAlto);
    printf("O aluno mais baixo e o aluno %d com %.2f metros.\n", nBaixo, alturaBaixo);
   return 0;
}