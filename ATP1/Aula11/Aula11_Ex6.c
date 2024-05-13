#include <stdio.h>
int main(){
    int numero;
    float harmonico, resultado, count=1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    do{
        harmonico=1/count;
        resultado=resultado+harmonico;
        count++;
    }while(count<=numero);
    printf("%f", resultado);
}