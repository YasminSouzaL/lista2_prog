/*Implemente um programa que leia o nome, a idade e o endere¸co de uma pessoa e armazene os
dados em uma estrutura. Ap´os a leitura, imprima os valores na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pessoa{
    char nome[50];
    int idade;
    char endereco[50];
};

int main(){
    struct pessoa p;
    printf("Digite o nome: ");
    scanf("%s", p.nome);
    printf("Digite a idade: ");
    scanf("%d", &p.idade);
    printf("Digite o endereco: ");
    scanf("%s", p.endereco);
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);
    return 0;
}