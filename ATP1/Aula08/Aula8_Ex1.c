//Programa para ler numero entre 1 e 7 e imprimir dia da semana//
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d",&n);
    switch (n){
        case 1:
            printf("Domingo");
            break;
         case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Nao e dia da semana, patrao!");
            break;
    }
    return 0;
}