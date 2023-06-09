/* Escreva uma fun¸c˜ao que gere, para um valor inteiro n > 0 passado como parˆametro, um “quadrado” de n linhas e n colunas de s´ımbolos ’+’. Nas posi¸c˜oes da diogonal principal utilize o
s´ımbolo ’x’. Por exemplo, para n = 5 a fun¸c˜ao deve exibir:
x++++
+x+++
++x++
+++x+
++++x
*/

#include <stdio.h>
#include <stdlib.h>

int quadrado(int x){
    int i, j;
    for(i = 0; i < x; i++){
        for(j = 0; j < x; j++){
            if(i == j)
                printf("x");
            else
                printf("+");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    quadrado(n);
    return 0;
}