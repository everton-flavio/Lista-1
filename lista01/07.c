#include <stdio.h>

main ( )
{
    int valor1, valor2;
    float exp=1;

    printf("Digite o valor X: ");
    scanf("%d", &valor1);
    printf("Digite o valor Y: ");
    scanf("%d", &valor2);


    if(valor1==0){
        printf("resultado da exponecial %d\n", 1);
    }
    if(valor2>0){
        for( int i=0; i<valor2; i++ ){
            exp = exp*valor1;

        }
         printf("resultado da exponecial %f\n",exp);
    }
    if(valor2<0){
        for( int i=1; i<=(-1*valor2); i++ ){
            exp = exp/valor1;
        }
   printf("resultado da exponecial %f\n",exp);
    }

    return 0;
}
