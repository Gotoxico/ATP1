/*Programa pra multiplicar n por n+1 e dividir por 2*/
#include<stdio.h>
int main(){
    int soma, n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Valor de n: %d\n", n);
    soma = n*(n+1)/2;
    printf ("Somatorio 1 a %d: %d", n, soma);
    return 0;

}
