#include <stdio.h>

main ( )
{
    int i, seq1=0, seq2=1,seq3;

    printf("Entre com um numero: ");
    scanf("%d", &i );

	if(i < 0){
		printf("numero não permitido");
	}else{
		printf(" 0  1 ");

		while (seq2 <= i){
			seq3=seq2 + seq1;
			printf(" %d ",seq3);
			seq1=seq2;
			seq2=seq3;
		}
	}
}


