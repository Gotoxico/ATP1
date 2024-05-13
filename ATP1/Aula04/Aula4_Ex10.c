/*Programa para dividir prêmio em porcentagens*/
#include<stdio.h>
float main(){
    printf ("Um premio de R$780000.00 sera divididido entre ganhadores da seguinte forma: \n");
    printf ("Primeiro ganhador recebeu: R$%f \n", 780000*0.5);
    printf ("Segundo ganhador recebeu: R$%f \n", 780000*0.3);
    printf ("Terceiro ganhador recebeu: R$%f \n", 780000*0.2);
    return 0;
}
