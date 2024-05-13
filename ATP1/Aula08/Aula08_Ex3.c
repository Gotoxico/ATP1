//Programa para ler um numero e apresentar raiz quadrada//
#include <stdio.h>
#include <math.h>
int main(){
    double num, raiz;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    raiz = sqrt (num);
    printf("Raiz quadrada: %f", raiz);
    return 0;
}