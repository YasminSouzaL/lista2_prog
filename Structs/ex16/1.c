/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter
a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira
prova.
(a) Permita ao usu´ario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova
(c) Encontre o aluno com maior m´edia geral.
(d) Encontre o aluno com menor m´edia geral.
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 60 para
aprova¸c˜ao
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
};

int main(){
    struct aluno alunos[5];
    int i, j, maiorNota1 = 0, maiorMedia = 0, menorMedia = 0;
    float media = 0;

    for(i = 0; i < 5; i++){
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota 1 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota 2 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota 3 do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota3);
        printf("\n");
    }

    for(i = 0; i < 5; i++){
        if(alunos[i].nota1 > alunos[maiorNota1].nota1){
            maiorNota1 = i;
        }
    }

    for(i = 0; i < 5; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media > alunos[maiorMedia].nota1){
            maiorMedia = i;
        }
    }

    for(i = 0; i < 5; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media < alunos[menorMedia].nota1){
            menorMedia = i;
        }
    }

    for(i = 0; i < 5; i++){
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if(media >= 60){
            printf("O aluno %s foi aprovado com media %.2f\n", alunos[i].nome, media);
        }else{
            printf("O aluno %s foi reprovado com media %.2f\n", alunos[i].nome, media);
        }
    }

    printf("\nO aluno com maior nota na primeira prova foi %s com nota %.2f\n", alunos[maiorNota1].nome, alunos[maiorNota1].nota1);
    printf("O aluno com maior media geral foi %s com media %.2f\n", alunos[maiorMedia].nome, (alunos[maiorMedia].nota1 + alunos[maiorMedia].nota2 + alunos[maiorMedia].nota3) / 3);
    

    return 0;
}