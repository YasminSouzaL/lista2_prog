/*Escreva uma fun¸c˜ao que recebe as 3 notas de um aluno por parˆametro e calcule a sua m´edia
ponderada (pesos: 5, 3 e 2). A m´edia ponderada ´e dada por 5×n1+3×n2+2×n3/
5+3+2*/

#include <stdio.h>
#include <stdlib.h>

float media(float n1, float n2, float n3){
    return (5 * n1 + 3 * n2 + 2 * n3) / 10;
}

int main(){
    float n1, n2, n3;
    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Media = %.2f\n", media(n1, n2, n3));
    return 0;
}