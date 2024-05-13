//Programa para ler dois numeros, um operador aritmetico e realizar operacao//
#include <stdio.h>
int main(){
    float n1, n2;
    char operador;
    printf("Digite um operador (+, -, / ou *): ");
    scanf("%c", &operador);
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    if (operador=='+'){
        printf("%f", n1+n2);}
    else{
        if (operador=='-') {
            printf ("%f", n1-n2);}
        else {
            if (operador=='/'){
                printf("%f", n1/n2);}
            else {
                printf("%f", n1*n2);
            }
            }
        }
    return 0;
}
