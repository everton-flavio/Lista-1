#include <stdio.h>

unsigned int par(unsigned int n )
{
    if(n%2==0){
        return 0;
    }else
        return 1;
}

int main( )
{
    unsigned int n;
    scanf("%d", &n);
    printf("%d\n", par(n));

    return 0;
}
