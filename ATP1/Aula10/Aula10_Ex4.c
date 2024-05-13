#include <stdio.h>
int main(){
    int numero, count=0, pares=0, impares=0;
    do{
        printf("Digite numero inteiro positivo ou 0 para sair: ");
        scanf("%d", &numero);
        if (numero%2 == 0){
            pares = pares+1;}
        else {impares = impares+1;};
    }while(numero!=0);
    printf("Pares: %d e Impares: %d", pares-1, impares);
    return 0;
}