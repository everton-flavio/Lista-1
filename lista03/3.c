#include <stdio.h>


void soma (int*entrada1, int* entrada2)
{
    int i;

    for(i = 0; i<=4; i++){
        printf("%d ", entrada1[i]+entrada2[i]);
    }
}



int main ( )
{
    int entrada1 [5]={0};
    int entrada2 [5]={0};
    int i;

    for(i=0;i<=4;i++){
        scanf("%d", &entrada1[i]);
    }

    for(i=0;i<=4;i++){
        scanf("%d", &entrada2[i]);

    }
    soma (entrada1, entrada2);

    return 0 ;
}
