/*Programa para calcular novo salário com 25%*/
#include<stdio.h>
float main(){
    float valor_antigo, valor_novo;
    printf("Este e um programa para calcular o novo valor de salario do funcionario, entao digite o valor antigo: ");
    scanf("%f", &valor_antigo);
    valor_novo = valor_antigo*1.25;
    printf("Valor novo e %f", valor_novo);
    return 0;
}
