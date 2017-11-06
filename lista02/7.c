#include <stdio.h>

float celsius (int input_3, float date){
    if(input_3==2){
        return (date*1.8+32);           /*passagem para Farhrenheit*/
    }else if(input_3==3){
        return (date+273);              /*passagem para Kelvin*/
    }else return date;
}

float farh (int input_3, float date){
    if(input_3==1){
        return ((date -32)/1.8);        /*passagem para celsius*/
    }else if(input_3==3){
        return (date-32)/9 + 273/5;      /*passagem para kelvin*/
    } else return date;
}

float kelvin (int input_3, float date){
    if(input_3==1){
        return date - 273;              /*passagem para celsius*/
    }else if(input_3==3){
        return 9/5*date -485;           /*passagem para Farhrenheit*/
    } else return date;
}

int binario(int quociente)
{
    int resto, cont =0, resultado=0;

    while(quociente!=0)
    {
        resto = quociente%2;
        quociente = quociente/2;

        resultado += resto*pow(10,cont);

        cont++;
    }
    return resultado;
}



int decimal (int n, int cont, int soma)
{
    int Coefiente, New_n;
    if(n==0){
        return soma;
    }else{
        New_n = n/10;
        Coefiente = n%10;
        soma += Coefiente*pow(2,cont);
        return decimal(New_n, ++cont, soma);
    }
}

 int main(){


    int input_1, input_2, input_3;
    float date;
    int V[100];
    int i;

    scanf("%d %d %d %f" , &input_1, &input_2, &input_3, &date);

    

    if(input_1 == 1){
        if(input_2 == 1) printf("%f\n", celsius(input_3, date));
        if(input_2 == 2) printf("%f\n" , farh(input_3,date));
        if(input_2 == 3) printf("%f\n" , kelvin(input_3,date));
    }

    if(input_1 == 2){
        if(input_2 == 1){
            printf("%d\n", binario(date));
        }else
            printf("%f\n", date );

        if(input_2 == 2) {
            if(input_2!=input_1){
                printf("%f\n", decimal(date,0,0));
            }else printf("%f\n", date );
        }
    }
    return 0;
}
