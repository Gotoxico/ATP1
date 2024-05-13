//Programa para ler quantidade de valores, os valores e apresentar media e soma//
#include <stdio.h>
int main(){
    int quantidade, cont=0;
    float valores, soma=0;
    printf("Digite quantidade de valores:");
    scanf("%d",&quantidade);

    while(cont<quantidade){
        printf("Digite um valor:");
        scanf("%f",&valores);
        soma = soma+valores;
        cont++;
    }
    printf("Soma: %f", soma);
    printf("\n Media: %f", soma/quantidade);
}