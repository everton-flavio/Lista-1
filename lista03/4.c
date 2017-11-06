#include <stdio.h>

void transposta (int entrada1[3][3], int entrada2[3][3])
{
    int cop_matr[3][3]={0};
    int i,j;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cop_matr[i][j]=entrada1[i][j];
            entrada2[j][i]=cop_matr[i][j];
        }
        printf("\n");
    }
}

int main ( )
{
    int entrada1 [3][3]={0};
    int entrada2 [3][3]={0};
    int i, j;

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d", &entrada1[i][j]);
        }
    }

    transposta (entrada1, entrada2);

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ", entrada2[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}
