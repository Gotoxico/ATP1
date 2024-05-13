/*Programa para converter real em dólar*/
#include<stdio.h>
float main(){
    float conversao_dolar, real, dolar;
    printf ("Digite valor em real: ");
    scanf ("%f", &real);
    printf ("Digite a cotacao do dolar para real: ");
    scanf ("%f", &dolar);
    conversao_dolar = real/dolar;
    printf ("Real para dolar: U$ %f", conversao_dolar);
    return 0;
}
