//Programa para ler datas e verificar se s�o validas//
#include <stdio.h>
int main(){
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 && dia>=1 && dia<=31) {
        printf("Data valida! ");}
    else {
        if (mes==4 || mes==6 || mes==9 || mes==11 && dia>=1 && dia<=30){
            printf("Data valida! ");}
        else {
            if (mes==2 && ano%40==0 || ano%4==0 && ano%100!=0 && dia>=1 && dia<=29) {
                printf("Data valida! ");}
            else{
                if (mes ==2 && dia>=1 && dia<=28){
                    printf("Data valida! ");}
                else {
                    printf("Data invalida! ");}
                                                }
                                            }
                                        }
    return 0;                       }






