//Programa para calcular media ponderada//
#include<stdio.h>
float main(){
    float nota1, nota2, peso1, peso2, media_ponderada;
    printf("Digite primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite primeiro peso: ");
    scanf("%f", &peso1);
    printf("Digite segundo peso: ");
    scanf("%f", &peso2);
    media_ponderada = (nota1*peso1+nota2*peso2)/(peso1+peso2);
    printf("Media ponderada: %f", media_ponderada);
    return 0;

}
