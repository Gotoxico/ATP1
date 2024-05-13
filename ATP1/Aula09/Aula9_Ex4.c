//Programa para ler 5 valores e falar qual o maior//
#include <stdio.h>
int main(){
    int cont=0;
    float num, menor;

    while(cont<5){
        printf("Digite um valor:");
        scanf("%f",&num);
        if (cont==0){
            menor = num;}
        else {
            if (num<=menor){
                menor=num;
            }
        }
        cont++;
        }
    printf("Menor: %f", menor);
    }