#include <stdio.h>
#include  <string.h>
#include <math.h>

float delta(float a, float b, float c)
{
    float result=0;
    result= pow(b,2)-4*a*c;
    return result;
}

double baskara1(double a, double b, double delta)
{
    int x1=0;
    x1=(-b+sqrt(delta))/(2*a);
    return x1;
}
double baskara2(double a, double b, double delta)
{
    int x2=0;
    x2=(-b-sqrt(delta))/(2*a);
    return x2;
}

int main(){

    float a=0,b=0,c=0;
    scanf("%f %f %f",&a,&b,&c);
    printf("x1=%.2f ",baskara1(a,b,delta(a,b,c)));
    printf("x2=%.2f ",baskara2(a,b,delta(a,b,c)));

}


