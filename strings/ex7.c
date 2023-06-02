/*Fa¸ca um programa que entre com um nome e imprima o nome somente se a primeira letra do
nome for ’a’ (mai´uscula ou min´uscula).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nome[30];
    printf("Digite o nome: ");
    gets(nome);
    if(nome[0]=='a' || nome[0]=='A'){
        printf("%s\n", nome);
    }
    system("pause");
    return 0;
}