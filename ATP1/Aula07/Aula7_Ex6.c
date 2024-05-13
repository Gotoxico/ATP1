//Programa para verificar se um ano é bissexto//
#include <stdio.h>
int main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if ((ano%40==0) || (ano%4==0) && (ano%100!=0)){
        printf("E bissexto! %d", ano);}
    else{
        printf ("Nao e bissexto! ");}
    return 0;
        }


