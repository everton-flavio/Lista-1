#include <stdio.h>
#include <math.h>


double A1 ( double a,  double b)
{
    return (a+b)/2;
}

double B(double a, double b)
{
    return sqrt(a*b);
}

double T(double t, double p , double a, double al)
{
    return (t-p*pow(a -al, 2));
}

double P(double p)
{
    return p=p*2;
}

main ( )
{
     double a=1, b=1/sqrt(2), t=1/4, p=1, a1;
     int n, i;
     scanf("%d", &n);

     for(i=0; i<=n; i++){
        a1 = A1(a,b);
        b = B(a,b);
        t= T(t, p, a, a1);
        p= P(p);
        a = a1;

     }
     printf("%.2f\n", pow(a+b,2)/(4*t));
}
