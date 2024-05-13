//Programa para imprimir 1 digito por linha de um numero com 4 digitos//
#include <stdio.h>
int main(){
    int n1, d1, d2, d3, d4;
    printf("Digite um numero com 4 digitos: ");
    scanf("%d",&n1);
    d1 = n1/1000;
    d2 = ((n1/100)%10);
    d3 = (n1%100)*0.1;
    d4 = n1%10;
    printf("Digito 1: %d",d1);
    printf("\nDigito 2: %d",d2);
    printf("\nDigito 3: %d",d3);
    printf("\nDigito 4: %d",d4);
    return 0;
}

