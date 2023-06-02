/*Fa¸ca um programa que receba do usu´ario uma string. O programa imprime a string sem suas
vogais.*/
#include <stdio.h>
#include <string.h>
int main(){
    int i;
    char s[100];
    printf("Digite uma frase: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}