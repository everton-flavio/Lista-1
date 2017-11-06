#include <stdio.h>

main( )
{
    int valor1, acumulador;

    printf("Digite um numero: ");
    scanf("%d", &valor1);

    acumulador=valor1;
    if(valor1>=0){
        while (acumulador>1){
            acumulador=acumulador-1;
            valor1=valor1*acumulador;

        }printf("resultado do fatorial= %d\n", valor1);
    }else{
        printf("numero invalido");
    }
}
