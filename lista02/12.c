#include <stdio.h>
#include <stdlib.h>

int binomio(int n, int k)
{
    if(n==k || (n==1 && k==0) || k==0 ) return 1;

    return binomio(n-1, k-1) + binomio(n-1, k);

}


int main()
{

    int n, k;
    scanf("%d%d", &n, &k);

    if(n>=k){
        printf("%d\n", binomio(n,k));
    }

    return 0;
}
