/* Fa¸ca um programa que leia um vetor com os dados de 5 carros: marca (m´aximo 15 letras), ano
e pre¸co. Leia um valor p e mostre as informa¸c˜oes de todos os carros com pre¸co menor que p.
Repita este processo at´e que seja lido um valor p = 0.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct carro carros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a marca do carro %d: ", i + 1);
        scanf("%s", carros[i].marca);

        printf("Digite o ano do carro %d: ", i + 1);
        scanf("%d", &carros[i].ano);

        printf("Digite o preco do carro %d: ", i + 1);
        scanf("%f", &carros[i].preco);
    }

    float preco;

    while (1) {
        printf("Digite o preco: ");
        scanf("%f", &preco);

        if (preco == 0) {
            break;
        }

        for (int i = 0; i < 5; i++) {
            if (carros[i].preco < preco) {
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f\n", carros[i].preco);
                printf("\n");
            }
        }
    }

    return 0;
}
