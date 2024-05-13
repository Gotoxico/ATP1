//Programa para classificar nadadores//
#include <stdio.h>
int main(){
    int idade;
    printf("Digite idade do nadador:");
    scanf("%d",&idade);
    switch (idade){
        case 0 ... 4:
            printf("Nao pode competir!");
            break;
        case 5 ... 7:
            printf("Infantil A 5 a 7");
            break;
        case 8 ... 10:
            printf("Infantil B 8 a 10");
            break;
        case 11 ... 13:
            printf("Juvenil A 11 a 13");
            break;
        case 14 ... 17:
            printf("Juvenil B 14 a 17");
            break;
        case 18 ... 150:
            printf("Adulto");
            break;
        default: 
            printf ("Idade invalida!");
            break;
    }
    return 0;
}