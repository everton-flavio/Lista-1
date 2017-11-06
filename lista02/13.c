#include <stdio.h>

/*
int mdc(int n, int m)
{
    if(m=0) return n;
    if(n=0) return m;

    return mdc(m, n%m);
}

*/

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}



int main()
{
    int n,m;

    scanf("%d %d", &n, &m);

    printf("%d\n", mdc(n, m));
}
