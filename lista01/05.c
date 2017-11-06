#include <stdio.h>

main ( )
{

    int valor1, valor2, resultado;

    printf("Digite um numero X: ");
    scanf("%d", &valor1);

    printf("Digite um numero Y: ");
    scanf("%d", &valor2);

    if(valor2<=valor1){
        resultado=valor1/valor2;
        printf("O resultado da divisão é: %d\n", resultado);
    }else{
        printf("Erro na divisão ");
    }
    resultado=valor1/valor2;
}
