//Programa para receber idade, cor dos olhos e mostrar numero de pessoas com cada cor de olho//
#include <stdio.h>
int main(){
    int idade, count=0, pessoas, azuis=0, pretos=0, verdes=0, castanhos=0, outros=0;
    char olhos;
    printf("Digite quantidade de pessoas: ");
    scanf("%d", &pessoas);
    while (pessoas>count){
        fflush(stdin);
        printf("Digite letra da cor dos olhos (A-Azul, P-Preto, V-Verde, C-Castanho ou O-Outro): ");
        scanf("%c", &olhos);
        printf("Digite idade: ");
        scanf("%d", &idade);
        if (olhos == 'A'){
            azuis = azuis+1;}
        else{
            if (olhos == 'P'){
                pretos = pretos+1;}
            else {
                if (olhos == 'V'){
                    verdes = verdes+1;}
                else{
                    if (olhos == 'C'){
                        castanhos = castanhos+1;}
                    else{
                        if (olhos == 'O'){
                            outros = outros+1;}
                    }
                }
            }
        }
    count ++;
    }
    printf("Pessoas com olhos azuis: %d", azuis);
    printf("\nPessoas com olhos pretos: %d", pretos);
    printf("\nPessoas com olhos verdes: %d", verdes);
    printf("\nPessoas com olhos castanhos: %d", castanhos);
    printf("\nPessoas com olhos outros: %d", outros);
    return 0;
}