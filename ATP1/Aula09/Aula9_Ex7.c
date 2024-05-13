//Programa para apresentar fatorial com while//
#include <stdio.h>
int main(){
    int num, fatorial=1, count=0;
    printf("Digite um numero para calcular fatorial:");
    scanf("%d",&num);
    count = num;
    while (count>=1){
        fatorial *= count;
        count--;
    }
    printf("Fatorial: %d", fatorial);
    return 0;
}
