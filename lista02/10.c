#include <stdio.h>

int fibMem [ 1000 ]={0};

int fib( int n, int cont)
{
    if (n==0)
        return 0 ;
    if (n<=2)
        return 1 ;
    else



    return fib(n-1, ++cont) + fib(n-2, ++cont);
}

int main ( )
{

    int n ;
    fibMem [ 0 ] = 0;
    fibMem [ 1 ] = 1;
    fibMem [ 2 ] = 1;
    scanf("%d", &n);

    fib (n, 3);

    printf("%d\n " , fibMem[3] ) ;
    return 0 ;
}
