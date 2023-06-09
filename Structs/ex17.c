/*Fa¸ca um programa que controla o consumo de energia dos eletrodom´esticos que vocˆe possui em
casa:
(a) Crie e leia 5 eletrodom´esticos que cont´em nome (m´aximo de 15 letras), potˆencia (real, em
kW), e tempo ativo por dia (real, em horas)
(b) Ap´os a leitura dos dados dos eletrodom´esticos, leia um tempo t (em dias) e mostre o consumo
total da casa e o consumo relativo de cada eletrodom´estico ( consumo do eletrodomestico
consumo total ) nesse
per´ıodo de t dias.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct eletrodomestico{
    char nome[15];
    float potencia;
    float tempo;
};
int main(){
    struct eletrodomestico eletrodomesticos[5];
    for(int i = 0; i < 5; i++){
        printf("Digite o nome do eletrodomestico %d: ", i+1);
        scanf("%s", eletrodomesticos[i].nome);
        printf("Digite a potencia do eletrodomestico %d: ", i+1);
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Digite o tempo ativo por dia do eletrodomestico %d: ", i+1);
        scanf("%f", &eletrodomesticos[i].tempo);
    }
    float tempo;
    printf("Digite o tempo em dias: ");
    scanf("%f", &tempo);
    float consumoTotal = 0;
    for(int i = 0; i < 5; i++){
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo * tempo;
    }
    printf("Consumo total: %.2f\n", consumoTotal);
    for(int i = 0; i < 5; i++){
        printf("Consumo relativo do eletrodomestico %s: %.2f\n", eletrodomesticos[i].nome, (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo * tempo)/consumoTotal);
    }
    return 0;
}