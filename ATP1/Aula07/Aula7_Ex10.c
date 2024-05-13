//Programa para verificar se um numero e par ou impar//
#include <stdio.h>
int main (){
    int n1;
    printf("Digite um numero: ");
    scanf ("%d", &n1);
    if (n1%2==0){
        printf("Par!", n1);}
    else {
        printf("Impar", n1);}
    return 0;
}
