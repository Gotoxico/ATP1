//Programa para verificar se os lados de um triangulo sao reais//
#include <stdio.h>
int main(){
    float lado1, lado2, lado3;
    printf("Digite lado 1: ");
    scanf("%f", &lado1);
    printf("Digite lado 2: ");
    scanf("%f", &lado2);
    printf("Digite lado 3: ");
    scanf("%f", &lado3);
    if (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){
        printf("E um triangulo!");}
    else {
        printf("Nao e um triangulo!");}
    return 0;
}
