#include <stdio.h>
#include <math.h>
int main(){
    int count=0;
    double numero;
    while (numero>0){
        printf("Digite um numero: ");
        scanf("%lf", &numero);
        printf("\n%f ^ 2 = %f", numero, pow(numero, 2));
        printf("\n%f ^ 3 = %f", numero, pow(numero, 3));
        printf("\nRaiz quadrada de %f= %f", numero, sqrt(numero));
        printf("\n");
        count ++;
    }
    return 0;
}