/*Programa pra ler numero inteiro e imprimir antecessor e sucessor*/
#include<stdio.h>
int main(){
    int antecessor, n, sucessor;
    printf("Digite um numero: ");
    scanf("%d", &n);
    antecessor = n-1;
    sucessor = n+1;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d", sucessor);
    return 0;
}
