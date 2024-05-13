//Programa para calcular raizes da equacao de 2 grau//
#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, delta, raiz1, raiz2;
    printf("Digite coeficiente A: ");
    scanf("%lf", &a);
    printf("Digite coeficiente B: ");
    scanf("%lf", &b);
    printf("Digite coeficiente C: ");
    scanf("%lf", &c);
    delta = pow (b, 2) - 4 * a * c;
    raiz1 = (-b + sqrt(delta))/2*a;
    raiz2 = (-b - sqrt(delta))/2*a;
    if (a==0){
        printf("Nao e equacao de segundo grau!");}
    else{
        if (delta<0){
            printf("Nao existe raiz.");}
        if (delta==0){
            printf("Raiz unica: %f", raiz1);}
        if (delta>0){
            printf("Raizes: %f, %f", raiz1, raiz2);}  
    }
}