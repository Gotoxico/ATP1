//Programa para pedir base e expoente, para calcular potencia//
#include <stdio.h>
#include <math.h>
int main(){
    double base, expoente, potencia;
    printf("Digite base:");
    scanf("%lf", &base);
    printf("Digite expoente:");
    scanf("%lf", &expoente);
    potencia = pow (base, expoente);
    printf("Potencia: %f", potencia);
    
}