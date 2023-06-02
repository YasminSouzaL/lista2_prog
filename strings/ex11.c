/* Usando o comando for, fa¸ca um programa que conte o n´umero de 1’s que aparecem em uma
string. Exemplo:
0011001 → 3
*/
#include <stdio.h>
#include <string.h>
int main(){
    int i, cont=0;
    char s[100];
    printf("Digite uma frase: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='1'){
            cont++;
        }
    }
    printf("O numero de 1's e: %d\n", cont);
    return 0;
}