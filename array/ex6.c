/*Leia uma matriz 5 x 10 que se refere respostas de 10 quest˜oes de m´ultipla escolha, referentes a
5 alunos. Leia tamb´em um vetor de 10 posi¸c˜oes contendo o gabarito de respostas que podem
ser a, b, c ou d. Seu programa dever´a comparar as respostas de cada candidato com o gabarito
e armazenar em um vetor denominado resultado, contendo a pontua¸c˜ao correspondente a cada
aluno. Considere que cada resposta certa equivale a 1 ponto. Exiba a nota dos alunos.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, mat[5][10], vet[10], vetA[5], cont=0;
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0;i<10;i++){
        printf("Digite o %d valor do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(mat[i][j]==vet[j]){
                cont++;
            }
        }
        vetA[i] = cont;
        cont = 0;
    }
    for(i=0;i<5;i++){
        printf("O aluno %d acertou %d questoes.\n", i+1, vetA[i]);
    }
    return 0;
}