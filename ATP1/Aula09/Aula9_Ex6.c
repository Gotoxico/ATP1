//Programa para ler valores inteiros positivos ate o 0 ser fornecido e informar quantidade de pares e impares//
#include <stdio.h>
int main(){
    int num, cont=0, pares=0, impares=0;
    while(num != 0){
        printf("Digite um numero:", num);
        scanf("%d", &num);
        cont++;
        if (num%2==0){
            pares++;}
        else {impares++;}
        }
    printf("Pares: %d", pares);
    printf("\nImpares: %d", impares);
    return 0;
    }
    