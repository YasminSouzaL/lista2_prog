/*Crie um programa que lˆe 30 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, vet[30];
    for(i=0;i<30;i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=29;i>=0;i--){
        printf("%d ", vet[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}