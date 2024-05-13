//Programa para ler 5 valores, apresentar o maior, o menor, a soma e a media//
#include <stdio.h>
int main(){
    int cont=0;
    float num, maior, menor, soma=0;

    while(cont<5){
        printf("Digite um valor:", cont+1);
        scanf("%f",&num);
        soma = soma+num;
        if (cont==0){
            maior = num;}
        else {
            if (num>=maior){
                maior=num;
            }
        }
        if (cont==0){
            menor = num;}
        else {
            if (num<=menor){
                menor=num;
            }
        }

        cont++;

    }
    printf("Soma: %f", soma);
    printf("\n Media: %f", soma/5);
    printf("\n %f Maior: ", maior);
    printf("\n %f Menor: ", menor);
}
