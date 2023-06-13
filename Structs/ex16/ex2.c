/*Defina uma estrutura de Conta que possuir´a o nome do cliente e seu saldo. Ap´os a leitura de uma
conta (nome do cliente e saldo inicial), fa¸ca a leitura do tipo de opera¸c˜ao que o usu´ario deseja
fazer: ’D’ (d´ebito) ou ’C’ (cr´edito) at´e que a opera¸c˜ao digitada seja ’S’ (sair). Caso a opera¸c˜ao
n˜ao seja S (sair), leia o valor a ser debitado/creditado na conta. Chame uma fun¸c˜ao que ir´a
receber como parˆametro a conta do cliente, o tipo de opera¸c˜ao e o valor a ser debitado/creditado
e que altere o valor do saldo da conta. Ao usu´ario digitar S (sair) exiba o saldo atual da conta
ap´os todas as opera¸c˜oes realizadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Conta{
    char nome[30];
    float saldo;
};

void operacao(struct Conta *conta, char tipo, float valor){
    if(tipo == 'D'){
        conta->saldo -= valor;
    }else if(tipo == 'C'){
        conta->saldo += valor;
    }
}

int main(){
    struct Conta conta;
    char tipo;
    float valor;

    printf("Digite o nome do cliente: ");
    scanf("%s", conta.nome);
    printf("Digite o saldo inicial: ");
    scanf("%f", &conta.saldo);

    do{
        printf("Digite o tipo de operacao (D/C/S): ");
        scanf("%s", &tipo);
        if(tipo != 'S'){
            printf("Digite o valor: ");
            scanf("%f", &valor);
            operacao(&conta, tipo, valor);
        }
    }while(tipo != 'S');

    printf("Saldo atual: %.2f\n", conta.saldo);

    return 0;
}