#include <stdio.h>
int main(){
    int numero, fatorial=1, count=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    count = numero;
    do {
        fatorial *= count;
        count --;
    }while(count>=1);
    printf("Fatorial: %d", fatorial);
    return 0;
}