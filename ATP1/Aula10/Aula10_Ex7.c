#include <stdio.h>
int main(){
    int quantidade;
    float numero, soma=0;
    printf("Digite quantidade de numeros: ");
    scanf("%d", &quantidade);
    for (int count=0; count<quantidade; count++){
        printf("Digite numero: ");
        scanf("%f", &numero);
        soma = soma+numero;
    }
    printf("Soma: %f e Media: %f", soma, soma/quantidade);
    return 0;
}