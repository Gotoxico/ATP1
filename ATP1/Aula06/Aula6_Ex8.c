//Programa para converter segundos em horas, minutos e segundos//
#include <stdio.h>
int main(){
    float segundos, minutos, horas;
    printf("Digite segundos: ");
    scanf("%f",&segundos);
    minutos = segundos/60;
    horas = minutos/60;
    printf("Segundos: %f", segundos);
    printf("\nMinutos: %f", minutos );
    printf("\nHoras: %f", horas);
}
