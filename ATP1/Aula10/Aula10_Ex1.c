//Programa para ler 5 valores e calcular media com do while//
#include <stdio.h>
int main(){
    float numero, count=0, soma=0;
    do{
        printf("Digite numero: ");
        scanf("%f", &numero);
        soma = soma+numero;
        count++;
    }while(count<5);
    printf("Media: %f", soma/5);
}