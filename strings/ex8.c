/*Fa¸ca um programa que leia duas strings A e B. Determine quantas vezes a string A ocorre na
string B. (N˜ao utilize a fun¸c˜ao strcmp())*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char A[30], B[30];
    int i, j, cont=0;
    printf("Digite a string A: ");
    gets(A);
    printf("Digite a string B: ");
    gets(B);
    for(i=0;i<strlen(B);i++){
        if(B[i]==A[0]){
            for(j=0;j<strlen(A);j++){
                if(B[i+j]!=A[j]){
                    break;
                }
            }
            if(j==strlen(A)){
                cont++;
            }
        }
    }
    printf("A string A ocorre %d vezes na string B\n", cont);
    system("pause");
    return 0;
}