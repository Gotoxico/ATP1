#include <stdio.h>
int main(){
    int numero, fatorial=1, count=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (count=numero; count>=1; count--){
        fatorial *= count;
    }
    printf("Fatorial: %d", fatorial);
    return 0;
}