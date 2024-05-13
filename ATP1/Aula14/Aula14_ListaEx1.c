#include <stdio.h>
float soma(float num1, float num2){
    return num1+num2;}
float subtracao(float num1, float num2){
    return num1-num2;}
float multiplicacao(float num1, float num2){
    return num1*num2;}
float divisao(float num1, float num2){
    return num1/num2;}
int main(){
    float num1, num2;
    printf("Digite numero 1: ");
    scanf("%f",&num1);
    printf("Digite numero 2: ");
    scanf("%f",&num2);
    printf("Soma: %f\n", soma(num1, num2));
    printf("Subtracao: %f\n", subtracao(num1, num2));
    printf("Multiplicao: %f\n", multiplicacao(num1, num2));
    printf("Divisao: %f\n", divisao(num1, num2));
    return 0;
}