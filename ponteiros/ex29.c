/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no computador o resultado.
i n t main ( )
{
i n t y , ∗p , x ;
y = 0 ;
p = &y ;
x = ∗p ;
x = 4 ;
(∗p)++;
(∗p ) += x ;
p r i n t f ( ” y = %d\n ” , y ) ;
r e t u r n 0 ;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int y, *p, x;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    (*p) += x;
    printf("y = %d\n", y);
    return 0;
}