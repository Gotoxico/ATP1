#include <stdio.h>
int main(){
    float numero, maior=0, menor=0, soma=0;
    for (int count=0; count<5; count++ ){
        printf("Digite numero: ");
        scanf("%f", &numero);
        soma = soma+numero;
        if (count==0){
            maior = numero;}
        else{
            if(numero>=maior){
                maior = numero;}
        }
        if (count==0){
            menor = numero;}
        else{
            if(numero<=menor){
                menor = numero;}
        }   
    }
    printf("Maior: %f e Menor: %f", maior, menor);
    printf("\nSoma: %f e Media: %f", soma, soma/5);
    return 0;
}