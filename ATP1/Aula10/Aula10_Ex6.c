#include <stdio.h>
int main(){
    float numero, soma=0;
    for (int count=0; count<5; count++){
        printf("Digite numero: ");
        scanf("%f", &numero);
        soma = soma+numero;
    }
    printf("Media: %f", soma/5);
    return 0;
}