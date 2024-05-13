/*Programa para aplicar desconto 12% em produto*/
#include<stdio.h>
float main(){
    float valor_inicial, valor_final;
    printf("Este e um programa para calcular desconto de 12 porcento em produtos, entao digite o valor de um produto: ");
    scanf("%f", &valor_inicial);
    valor_final = valor_inicial*0.88;
    printf("Valor final e %f", valor_final);
    return 0;
}
