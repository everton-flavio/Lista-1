#include <stdio.h>

int palidromo(char v[], int tamanho)
{
    int i;

    for(i=0;i<tamanho/2;i++)
    {
        if(v[i] != v[tamanho-i-1])
        {
            return 0;
        }
    }

    return 1;
}



int main()
{
    char vetor[20];
    int i, tamanho = 0 ;



    scanf("%s", vetor);



    for(i=0; i< vetor[i] != '\0' ; i++)
    {
        tamanho++;
    }


    if(palidromo(vetor, tamanho) == 1)
    {
        printf("%s", "sim");

    }else
    {
        printf("%s", "nao");
    }

}
