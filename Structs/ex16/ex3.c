/*Implemente uma função que calcule as raízes de uma equação do segundo
grau do tipo Ax² + Bx + C = 0. Lembrando que:
Essa função deve obedecer ao seguinte protótipo:
int raizes(float A,float B,float C,float * X1,float * X2);
Essa função deve ter como retorno o número de raízes reais e
distintas da equação. Se existirem raízes reais, seus valores
devem ser armazenados nas variáveis apontadas por X1 e X2.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
    if(A==0){
        return 0;
    }
    float delta = (B*B) - (4*A*C);
    else if(delta < 0){
        return 0;
    }
    else if(delta == 0){
        *X1 = (-B + sqrt(delta))/(2*A);
        return 1;
    }
    else{
        *X1 = (-B + sqrt(delta))/(2*A);
        *X2 = (-B - sqrt(delta))/(2*A);
        return 2;
    }
}

int main(){
    float A, B, C, X1, X2;
    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);
    int nRaizes = raizes(A, B, C, &X1, &X2);
    if(nRaizes == 0){
        printf("Nao existem raizes reais.\n");
    }
    else if(nRaizes == 1){
        printf("Existe uma raiz real: %.2f\n", X1);
    }
    else{
        printf("Existem duas raizes reais: %.2f e %.2f\n", X1, X2);
    }
    return 0;
}