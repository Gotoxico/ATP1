//Programa para ler angulo em graus e mostrar seno e cosseno//
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(){
    double ang_graus, seno, cosseno;
    printf("Digite angulo em graus: ");
    scanf("%lf", &ang_graus);
    seno = sin (ang_graus*PI/180.0);
    cosseno = cos (ang_graus*PI/180.0);
    printf("Seno: %f",seno);
    printf("\nCosseno: %f",cosseno);
    return 0;
}