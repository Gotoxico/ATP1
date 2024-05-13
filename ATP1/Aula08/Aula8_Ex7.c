//Programa para classificar nadadores//
#include <stdio.h>
int main(){
    int codigo, quantidade;
    printf("Digite codigo do produto: ");
    printf("Cachorro-quente(100), Bauru Simples(101), Hamburguer(102), Cheeseburguer(103), Refrigerante(104)");
    scanf("%d",&codigo);
    printf("Digite quantidade de produtos:");
    scanf("%d",&quantidade);
    switch (codigo){
        case 100:
            printf("%d", 7*quantidade);
            break;
        case 101:
            printf("%d", 5*quantidade);
            break;
        case 102:
            printf("%d", 10*quantidade);
            break;
        case 103:
            printf("%d", 12*quantidade);
            break;
        case 104:
            printf("%d", 3*quantidade);
            break;
        default: 
            printf ("");
            break;
    }
    return 0;
}