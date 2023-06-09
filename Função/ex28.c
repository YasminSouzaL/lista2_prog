/* Vocˆe deve fazer um programa de gest˜ao de biblioteca. Para isso defina uma estrutura de Livro
que contenha, autor, t´ıtulo e n´umero de p´aginas. A biblioteca possui um acerto de 250 livros
ainda n˜ao cadastrados. Fa¸ca uma fun¸c˜ao que realize o cadastro dos livros que essa biblioteca
possui*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
    char autor[50];
    char titulo[50];
    int paginas;
};

void cadastro(struct livro *livros){
    int i;
    for(i = 0; i < 250; i++){
        printf("Digite o autor do livro %d: ", i+1);
        scanf("%s", livros[i].autor);
        printf("Digite o titulo do livro %d: ", i+1);
        scanf("%s", livros[i].titulo);
        printf("Digite o numero de paginas do livro %d: ", i+1);
        scanf("%d", &livros[i].paginas);
    }
}

int main(){
    struct livro livros[250];
    cadastro(livros);
    return 0;
}