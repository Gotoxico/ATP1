#include <stdio.h>
int main(){
    int numero;
    float harmonico, resultado=0, i=0, count=1, fatorial=1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    while(count<=numero){
        i=count;
        while(i>=1){
            fatorial *= i;
            i--;}
        harmonico=1/fatorial;
        resultado=resultado+harmonico;
        count++;}
    printf("%f", resultado+1);
}
   
