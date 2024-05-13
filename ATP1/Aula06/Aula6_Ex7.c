//Programa para classificar precos//
#include <stdio.h>
int main(){
    float preco;
    printf("Digite preco do produto: R$");
    scanf("%f", &preco);
    if (preco<=100){
        printf("Barato");}
    else{
        if (preco<=500){
        printf("Normal");}
        else {printf("Caro");}
    return 0;
    }
}

