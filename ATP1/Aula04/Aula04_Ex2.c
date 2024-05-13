/*Conversao de temperatura*/
#include<stdio.h>
int main(){
    float fahrenheit,celsius;
    printf ("Digite uma temperatura em celsius: ");
    scanf ("%f",&celsius);
    fahrenheit = celsius*1.8+32;
    printf ("Temperatura em fahreinheit: %f", fahrenheit);
    return 0;
}
