/* Escreva um programa que recebe uma string s e inteiros n˜ao-negativos i e j e devolve o segmento
s[i..j]. Exemplo:
s =“Texto de exemplo”, i = 2 e j = 7. Segmento ser´a “xto de”*/
#include <stdio.h>
#include <string.h>
int main(){
    int i, j;
    char s[100];
    printf("Digite uma frase: ");
    gets(s);
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    printf("O segmento sera: ");
    for(i;i<=j;i++){
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}