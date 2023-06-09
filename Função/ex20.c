/*Implemente uma fun¸c˜ao que inverta a ordem dos caracteres de uma string recebida como
parˆametro*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char *str){
    int i, j;
    char aux;
    for(i = 0, j = strlen(str) - 1; i < j; i++, j--){
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }
}

int main(){
    char str[100];
    printf("Digite uma string: ");
    gets(str);
    inverte(str);
    printf("String invertida: %s\n", str);
    return 0;
}