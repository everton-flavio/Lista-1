#include <stdio.h>


int leght_vector(char* entrada){

    int leght = 0, i;
    for(i=0; entrada[i]!='\n'; i++){
        leght++;
    }
    return leght;
}

void invert( char* entrada)
{
    int i, tam = leght_vector(entrada);

    for(i = tam-1; i>=0; i--){
        printf("%c", entrada[i]);
    }
}



int main ( )
{
    char entrada [255];
    fgets (entrada , 255, stdin);

    invert(entrada);

    return 0 ;
}
