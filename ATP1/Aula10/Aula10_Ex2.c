#include <stdio.h>
int main(){
    int quantidade, count=0;
    float numero, soma=0;
    printf("Quantos numeros serao digitados? ");
    scanf("%d", &quantidade);
    do {
        printf("Digite numero: ");
        scanf("%f", &numero);
        soma = soma+numero;
        count ++;
    }while(count<quantidade);
    printf("Soma: %f e Media: %f", soma, soma/quantidade);

}
