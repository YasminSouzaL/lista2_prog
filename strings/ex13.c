/*Fa¸ca um programa que receba uma string no formato “DD/MM/AAAA” e copie o dia, mˆes e
ano para 3 vari´aveis inteiras. Antes disso, verifique se as barras est˜ao no lugar certo, e se DD,
MM e AAAA s˜ao num´ericos.*/
#include <stdio.h>
#include <string.h>
int main(){
    int i, j, k, cont=0;
    char s[100], dia[3], mes[3], ano[5];
    printf("Digite uma data no formato DD/MM/AAAA: ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        if(s[i]=='/'){
            cont++;
        }
    }
    if(cont==2){
        for(i=0;i<strlen(s);i++){
            if(s[i]=='/'){
                for(j=0;j<i;j++){
                    dia[j]=s[j];
                }
                dia[j]='\0';
                for(k=i+1;k<strlen(s);k++){
                    if(s[k]=='/'){
                        for(j=i+1;j<k;j++){
                            mes[j-i-1]=s[j];
                        }
                        mes[j-i-1]='\0';
                        for(j=k+1;j<strlen(s);j++){
                            ano[j-k-1]=s[j];
                        }
                        ano[j-k-1]='\0';
                    }
                }
            }
        }
        printf("Dia: %s\n", dia);
        printf("Mes: %s\n", mes);
        printf("Ano: %s\n", ano);
    }
    else{
        printf("Data invalida!\n");
    }
    return 0;
}