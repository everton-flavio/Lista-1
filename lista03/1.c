#include <stdio.h>

int cont_vogal( char* entrada)
{
        int cont=0, i;

        for(i=0; entrada[i]!='\n'; i++){
            if(entrada[i]=='a' ||entrada[i]=='e'||entrada[i]=='i'||entrada[i]=='o'||entrada[i]=='u'){
                cont++;
            }
        }
        return cont;
}

int main ( )
{

    char entrada [255];
    fgets (entrada , 255, stdin);

    printf("%d\n", cont_vogal(entrada) );
    return 0 ;
}
