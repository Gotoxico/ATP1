#include <stdio.h>
int main(){
    int numero1, numero2, opcao;
    do{
        printf("\nMENU \n1-Adicao \n2-Subtracao \n3-Multiplicacao \n4-Divisao \n5-Sair");
        printf("\nDigite uma das opcoes:");
        scanf("%d", &opcao);
        if (opcao!=5){
            printf("\nDigite numero 1: ");
            scanf("%d", &numero1);
            printf("Digite numero 2:");
            scanf("%d", &numero2);}
        else{printf("Programa finalizado!");}
        if (opcao==1){
            printf("%d", numero1+numero2);}
        else{
            if (opcao==2){
                printf("%d", numero1-numero2);}
            else{
                if (opcao==3){
                    printf("%d", numero1*numero2);}
                else {
                    if (opcao==4){
                        printf("%d", numero1/numero2);}
                    else{}
                }
            }
        } 
    }while(opcao!='5');
}