/*Programa para somar 3 inteiros*/
#include<stdio.h>
int main(){
    int soma, inteiro_1, inteiro_2, inteiro_3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro_1);
    printf("Digite segundo numero inteiro: ");
    scanf("%d", &inteiro_2);
    printf("Digite terceiro numero inteiro: ");
    scanf("%d", &inteiro_3);
    soma = inteiro_1+inteiro_2+inteiro_3;
    printf("Soma dos 3 inteiros e: %d", soma);
    return 0;



}
