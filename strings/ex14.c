/*Fa¸ca um programa que receba uma string e a imprima de tr´as pra frente. (N˜ao utilize a fun¸c˜ao
rev)*/
#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char s[100];
    printf("Digite uma frase: ");
    gets(s);
    for(i=strlen(s)-1;i>=0;i--){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}