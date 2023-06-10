/*Fa¸ca um programa que leia 50 conjuntos de dois valores, o primeiro representando o n´umero do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o n´umero do aluno mais baixo e do mais alto, juntamente com suas alturas.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, num, numA, numB;
    float alt, altA, altB;
    for(i=0;i<50;i++){
        printf("Digite o numero do aluno: ");
        scanf("%d", &num);
        printf("Digite a altura do aluno: ");
        scanf("%f", &alt);
        if(i==0){
            numA = num;
            numB = num;
            altA = alt;
            altB = alt;
        }
        if(alt>altA){
            altA = alt;
            numA = num;
        }
        if(alt<altB){
            altB = alt;
            numB = num;
        }
    }
    printf("O aluno mais alto e o %d com %.2f metros.\n", numA, altA);
    printf("O aluno mais baixo e o %d com %.2f metros.\n", numB, altB);
    system("pause");
    return 0;
}