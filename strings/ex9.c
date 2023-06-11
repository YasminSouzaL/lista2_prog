/*Fa¸ca um programa que leia uma frase e conte quantos espa¸cos h´a nessa frase (utilize o comando
gets() para fazer a leitura do seu string).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char frase[100];
    int i, cont=0;
    printf("Digite uma frase: ");
    gets(frase);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]==' '){
            cont++;
        }
    }
    printf("A frase possui %d espacos\n", cont);
    return 0;
}