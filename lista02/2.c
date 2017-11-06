#include <stdio.h>

float volume(float a,float b,float c)
{
    return a*b*c;
}
main ( )
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f\n" , volume(a,b,c));
}
