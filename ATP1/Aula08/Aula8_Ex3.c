//Programa para ler numeros e operadores e apresentar resultado//
#include <stdio.h>
int main(){
    char op;
    int n1, n2;
    printf("Digite um operador: ");
    scanf("%c",&op);
    printf("Digite numero 1: ");
    scanf("%d",&n1);
    printf("Digite numero 2:");
    scanf("%d",&n2);
    switch (op){
        case '+':
            printf("%d", n1+n2);
            break;
         case '-':
            printf("%d", n1-n2);
            break;
        case '*':
            printf("%d", n1*n2);
            break;
        case '/':
            printf("%d", n1/n2);
            break;
        default:
            printf("Operador invalido!");
            break;
    }
    return 0;
}