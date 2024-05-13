/*Programa para calcular area do triangulo*/
#include<stdio.h>
int main(){
    float area, base, altura;
    printf("Digite base do triangulo:" );
    scanf("%f", &base);
    printf("Digite altura do triangulo:");
    scanf("%f", &altura);
    area = base*altura/2;
    printf("Area do triangulo: %f", area);
    return 0;
}
