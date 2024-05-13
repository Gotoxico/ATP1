//Programa para calcular reajuste salarial//
#include <stdio.h>
int main(){
    float salario_antigo, salario_novo;
    printf("Digite salario: ");
    scanf("%f", &salario_antigo);
    if (salario_antigo>2000) {printf("Sem reajuste: %.2f", salario_antigo);}
    else{
        if (salario_antigo<=1000) {printf("Reajustado: %.2f", salario_antigo*1.2);}
        else {printf("Reajustado: %.2f", salario_antigo*1.1);}
    return 0;
    }
}
