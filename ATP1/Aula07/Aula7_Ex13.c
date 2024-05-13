//Programa para apresentar nome por extenso de digito entre 1 e 5//
#include <stdio.h>
int main(){
    int n;
    printf("Digite um digito entre 1 e 5: ");
    scanf("%d",&n);
    if (n==1) {
        printf("Nome por extenso: um, %d", n);}
    else {
        if (n==2){
             printf("Nome por extenso: dois, %d", n);}
        else {
            if (n==3){
                printf("Nome por extenso: tres, %d", n);}
            else {
                if (n==4){
                    printf("Nome por extenso: quatro, %d", n);}
                else {
                    if (n==5){
                        printf("Nome por extenso: cinco, %d", n);}
                    else {printf("Numero invalido!");}
                    }
                }
            }
            }
return 0;}



