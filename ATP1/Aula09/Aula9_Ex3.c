//Programa para ler 5 valores e falar qual o maior//
#include <stdio.h>
int main(){
    int cont=0;
    float num, maior;

    while(cont<5){
        printf("Digite um valor:");
        scanf("%f",&num);
        if (cont==0){
            maior = num;}
        else {
            if (num>=maior){
                maior=num;
            }
        }
        cont++;
        }
    printf("Maior: %f", maior);
    }
