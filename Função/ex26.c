/*Fa¸ca um programa que utilizar´a uma estrutura que ir´a armazenar as coordenadas x e y de um
dado Ponto. Fa¸ca a leitura de dois pontos e crie uma fun¸c˜ao que, recebendo dois pontos como
parˆametro, retorne a distˆancia euclidiana entre eles. Dist =
p
(p1.x − p2.x)
2 + (p1.y − p2.y)
2.
Para realizar o c´alculo da raiz quadrada utilize a fun¸c˜ao sqrt(num) e para realizar a potencia¸c˜ao
utilize a fun¸c˜ao pow(num, exp).
Exemplo: sqrt(81) = 9 pow(2, 4) = 16*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
    float x;
    float y;
};

float distancia(struct ponto p1, struct ponto p2){
    float dist;
    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return dist;
}

int main(){
    struct ponto p1, p2;
    printf("Digite as coordenadas do ponto 1: ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite as coordenadas do ponto 2: ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("Distancia entre os pontos: %.2f\n", distancia(p1, p2));
    return 0;
}