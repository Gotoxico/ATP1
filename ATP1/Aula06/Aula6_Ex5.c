//Programa para ler dois numeros e colocar em ordem crescente//
#include <stdio.h>
int main(){
    float n1, n2;
    printf("Digite numero 1:");
    scanf("%f",&n1);
    printf("Digite numero 2:");
    scanf("%f",&n2);
    if (n1==n2){
            printf("Iguais");
    }
    else {
        if (n1>n2) {
                printf("%f,%f",n2, n1);
        }
        else {
                printf("%f,%f",n1, n2);
        }
        }

    return 0;
}
