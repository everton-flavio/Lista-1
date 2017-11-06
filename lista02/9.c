#include <stdio.h>
#include <math.h>

int potencia (int x, int y)
{
    if(y==0){
        return 1;
    }else
          return (x*potencia (x,y-1));
}

main ( )
{
    int x ,y;
    scanf("%d %d", &x , &y);
    printf("%d\n", potencia(x,y));
    return 0;
}
