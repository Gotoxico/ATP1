#include <stdio.h>
int main(){
    int numero, pares=0, impares=0;
    for (int count=0; numero!=0; count++){
        printf("Digite numero inteiro positivo: ");
        scanf("%d", &numero);
        if (numero%2 == 0){
            pares = pares+1;}
        else{impares = impares+1;};
    }
    printf("Pares: %d e Impares: %d", pares-1, impares);
    return 0;
}