#include <stdio.h>
#include <math.h>

float op1 (float x, float y)
{
    return x+y;
}
float op2 (float x, float y)
{
    return (x-y);
}
float op3 (float x, float y)
{
    return x*y;
}
float op4 (float x, float y)
{
    return x/y;
}
float op5 (float x, float y)
{
    return pow(x,y);
}

main ( )
{
    int n;
    float x,y;
    scanf("%d %f %f", &n ,&x,&y );

    switch ( n - 1 ) {
        case 0:
            printf("%f\n", op1(x,y));
            break;

        case 1:
            printf("%f\n", op2(x,y));
            break;

        case 2:
            printf("%f\n", op3(x,y));
            break;

        case 3:
            printf("%f\n", op4(x,y));
            break;

        case 4:
            printf("%f\n", op5(x,y));
            break;

        default:
            printf("%f\n");

    }
}
