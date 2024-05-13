//Programa para calcular valor gasto no supermercado e numero de cupons//
#include <stdio.h>
int main(){
    float valor_compras;
    printf("Digite valor gasto em compras:");
    scanf("%f",&valor_compras);
    printf("Cupons: %f", valor_compras/20);
    return 0;
}
