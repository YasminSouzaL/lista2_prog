/* O que h´a de errado com o programa abaixo?
i n t main ( ) /∗ e s s e programa e s t a e r r a d o ∗/
{
i n t x , ∗p ;
x = 1 0;
p = x ;
p r i n t f (”%d ” , ∗p ) ;
r e t u r n 0 ;
}*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, *p;
    x = 10;
    p = x;
    printf("%d\n", *p);
    return 0;
}