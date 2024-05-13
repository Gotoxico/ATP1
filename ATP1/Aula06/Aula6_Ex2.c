//Programa para verificar se um numero inteiro e positivo ou negativo//
#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero:");
    scanf("%d",&n);
    if (n==0){printf("Neutro");}
    else {
        if (n>0) {printf("Positivo");}
            else {printf("Negativo");}
    }

    return 0;
}
