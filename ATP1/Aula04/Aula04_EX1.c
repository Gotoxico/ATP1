/*Programa para calcular media de duas notas*/
#include<stdio.h>
int main(){
    float media, nota1, nota2;
    printf("Digite Nota 1: ");
    scanf("%f", &nota1);
    printf("Digite Nota 2: ");
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    printf("Media: %f", media);
    return 0;
  }
