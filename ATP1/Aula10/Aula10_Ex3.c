#include <stdio.h>
int main(){
    int count=0;
    float numero, maior, menor, soma=0;
    do {
        printf("Digite um valor: ");
        scanf("%f", &numero);
        soma = soma+numero;
        if (count==0){
            maior = numero;}
        else {
            if (numero>=maior){
                maior = numero;}
            }
        if (count==0){
            menor = numero;}
        else {
            if (numero<=menor){
                menor = numero;}
            }
        count ++;
    }while(count<5);
    printf("Maior: %f e Menor: %f", maior, menor);
    printf("\n Soma: %f e Media: %f", soma, soma/5);
    return 0;
}

