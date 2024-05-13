//Programa para ler dois numeros e verificar se sao iguais ou diferentes//
#include <stdio.h>
float main(){
    float n1, n2;
    printf("Digite numero 1:");
    scanf("%f",&n1);
    printf("Digite numero 2:");
    scanf("%f",&n2);
    if (n1=n2){printf("Iguais!");}
    else {printf("Diferentes!");}
    return 0;
}
