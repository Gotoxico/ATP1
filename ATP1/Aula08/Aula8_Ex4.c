//Programa para ler numeros e operadores e apresentar resultado//
#include <stdio.h>
int main(){
    int n1, n2, menu;
    printf("Digite numero 1: ");
    scanf("%d",&n1);
    printf("Digite numero 2:");
    scanf("%d",&n2);
    printf("MENU \n");
    printf("1- Somar os dois números \n");
    printf("2- Subtrair os dois números \n");
    printf("3- Multiplicar os dois números \n");
    printf("4- Dividir os dois números (o denominador não pode ser zero) \n");
    printf("5- Sair \n");
    printf("Digite uma opção: \n");
    scanf("%d",&menu);
    switch (menu){
        case 1:
            printf("%d", n1+n2);
            break;
         case 2:
            printf("%d", n1-n2);
            break;
        case 3:
            printf("%d", n1*n2);
            break;
        case 4:
            printf("%d", n1/n2);
            break;
        case 5:
            printf("Programa finalizado!");
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
    return 0;
}