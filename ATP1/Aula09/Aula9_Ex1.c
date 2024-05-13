//Programa para ler cinco valores e exibir media usando while//
#include <stdio.h>
int main(){
    float num, cont=0, soma=0;
    while(cont<5){
        printf("Digite um numero: ");
        scanf("%f", &num);
        soma = soma+num;
        cont++;
    }
    printf("Media: %f", soma/5);
    return 0;
}