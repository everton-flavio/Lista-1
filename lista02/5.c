#include <stdio.h>
#include <math.h>

unsigned fatorial ( int n )
{
    int fat= 1;
    while (n>1){
        fat*=n;
        --n;
    }
    return fat;
}

double binomio (int i, int j)
{
    int bi;
    bi=fatorial(i);
    bi/=fatorial(j);
    bi/=fatorial(i-j);

    return bi;
}

main ( )
{
    int i, j;
    scanf("%d %d" , &i ,&j);
    printf("%.2f\n ", binomio(i,j));
}
