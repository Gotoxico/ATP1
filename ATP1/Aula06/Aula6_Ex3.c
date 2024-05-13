//Programa para calcular media simples e verificar se foi aprovado ou reprovado//
#include <stdio.h>
float main(){
    float nota1, nota2, media;
    printf("Digite nota 1:");
    scanf("%f",&nota1);
    printf("Digite nota 2:");
    scanf("%f",&nota2);
    media = (nota1+nota2)/2;
    if (media<5){printf("Reprovado!");}
    else {printf("Aprovado!");}
    return 0;
}
