/*Programa para calcular média simples de 4 notas*/
#include<stdio.h>
float main(){
    float media_simples, nota1, nota2, nota3, nota4;
    printf("Digite nota1: ");
    scanf("%f", &nota1);
    printf("Digite nota2: ");
    scanf("%f", &nota2);
    printf("Digite nota3: ");
    scanf("%f", &nota3);
    printf("Digite nota4: ");
    scanf("%f", &nota4);
    media_simples = (nota1+nota2+nota3+nota4)/4;
    printf("Media simples: %f", media_simples);
    return 0;
}
