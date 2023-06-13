/*Fa¸ca um programa que gerencie o estoque de um mercado
(a) Crie e leia um vetor de 5 produtos, onde cada produto possui as seguintes informa¸c˜oes:
c´odigo (inteiro), nome (m´aximo de 15 caracteres), pre¸co e quantidade em estoque.
(b) Leia um pedido, composto por um c´odigo de produto e a quantidade que que o usu´ario
deseja comprar. Localize este c´odigo no vetor e, se houver quantidade suficiente para
atender o pedido integralmente, atualize o estoque e informe ao usu´ario. Caso não haja,
avise ao usu´ario que n˜ao h´a estoque suficiente.
(c) Repita as leituras dos pedidos at´e que o usuário digite um c´odigo de produto negativo ou
zero*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto {
    int codigo;
    char nome[16];
    float preco;
    int quantidade;
};

int main() {
    struct produto produtos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%s", produtos[i].nome);

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &produtos[i].quantidade);
    }

    int codigo;
    int quantidade;

    while (1) {
        printf("Digite o codigo do produto: ");
        scanf("%d", &codigo);

        if (codigo <= 0) {
            break;
        }

        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantidade);

        int encontrado = 0;

        for (int i = 0; i < 5; i++) {
            if (produtos[i].codigo == codigo) {
                if (produtos[i].quantidade >= quantidade) {
                    produtos[i].quantidade -= quantidade;
                    printf("Pedido atendido\n");
                } else {
                    printf("Nao ha estoque suficiente\n");
                }
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Produto nao encontrado\n");
        }
    }

    return 0;
}
