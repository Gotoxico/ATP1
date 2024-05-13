//Programa para ler numero e apresentar ceil, floor, round e trunc//
#include <stdio.h>
#include <math.h>
int main(){
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("Ceil de %f: %1.f", num, ceil(num));
    printf("\nFloor de %f: %1.f", num, floor(num));
    printf("\nRound de %f: %1.f", num, round(num));
    printf("\nTrunc de %f: %1.f", num, trunc(num));
}