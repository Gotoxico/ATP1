//Programa para verificar qual o maior numero e imprimir diferença//
#include <stdio.h>
int main(){
    int n1, n2;
    printf("Digite numero 1:");
    scanf("%d",&n1);
    printf("Digite numero 2:");
    scanf("%d",&n2);
    if (n1>n2){
        printf("O maior numero e: %d", n1);
        printf("\nA diferenca entre eles e: %d", n1-n2);}
    else {
        if (n2>n1) {
            printf("O maior numero e: %d", n2);
            printf("\nA diferenca entre eles e: %d", n2-n1);}
        else {
            if (n1==n2){
                printf("Numeros iguais: %d %d", n1,n2);
                printf("\nA diferenca entre eles e: %d", n1-n2);}
            else {
                printf("Deu merda!");
            }
        }

    }
return 0;
}
