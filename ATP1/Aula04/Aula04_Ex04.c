/*Programa pra calcular IMC*/
#include<stdio.h>
int main(){
    float IMC, peso, altura;
    printf ("Digite peso: ");
    scanf ("%f", &peso);
    printf ("Digite altura: ");
    scanf ("%f", &altura);
    IMC = peso/(altura*altura);
    printf ("IMC= %f", IMC);
    return 0;
}
