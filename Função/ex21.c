/*Fa¸ca uma fun¸c˜ao que recebe os coeficientes de uma equa¸c˜ao do segundo grau e retorna o valor
de delta*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c){
    return b * b - 4 * a * c;
}

int main(){
    float a, b, c;
    printf("Digite os coeficientes da equacao: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Delta = %.2f\n", delta(a, b, c));
    return 0;
}