/* Fa¸ca uma fun¸c˜ao que recebe 3 valores inteiros por parˆametro e retorna-os ordenados em ordem
crescente. Utilize a passagem de parˆametros por referˆencia.*/
#include <stdio.h>
#include <stdlib.h>

void ordena(int *a, int *b, int *c){
    int aux;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
    if(*a > *c){
        aux = *a;
        *a = *c;
        *c = aux;
    }
    if(*b > *c){
        aux = *b;
        *b = *c;
        *c = aux;
    }
}

int main(){
    int a, b, c;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    ordena(&a, &b, &c);
    printf("Numeros ordenados: %d %d %d\n", a, b, c);
    return 0;
}