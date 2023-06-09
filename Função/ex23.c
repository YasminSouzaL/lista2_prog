/*
Fa¸ca uma fun¸c˜ao que recebe a idade de um nadador por parˆametro e retorna, tamb´em por
parˆametro, a categoria desse nadador de acordo com a tabela abaixo:
Idade ->Categoria
0 a 7 anos ->Infantil A
8 a 10 anos ->Infantil B
11 a 13 anos ->Juvenil A
14 a 17 anos ->Juvenil B
Maiores de 18 anos (inclusive)-> Adulto
*/
#include <stdio.h>
#include <stdlib.h>

void categoria(int idade, char *cat){
    if(idade >= 0 && idade <= 7)
        strcpy(cat, "Infantil A");
    else if(idade >= 8 && idade <= 10)
        strcpy(cat, "Infantil B");
    else if(idade >= 11 && idade <= 13)
        strcpy(cat, "Juvenil A");
    else if(idade >= 14 && idade <= 17)
        strcpy(cat, "Juvenil B");
    else if(idade >= 18)
        strcpy(cat, "Adulto");
    else
        strcpy(cat, "Idade invalida");
}

int main(){
    int idade;
    char cat[20];
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    categoria(idade, cat);
    printf("Categoria: %s\n", cat);
    return 0;
}