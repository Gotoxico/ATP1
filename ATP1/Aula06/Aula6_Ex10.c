//Programa para calcular valor recebido por cada amigo na loteria//
#include <stdio.h>
int main(){
    float investimento1, investimento2, investimento3, investimento_total, porcentagem1, porcentagem2, porcentagem3, premio, valor1, valor2, valor3;
    printf("Digite valor investido por amigo 1:");
    scanf("%f",&investimento1);
    printf("Digite valor investido por amigo 2:");
    scanf("%f",&investimento2);
    printf("Digite valor investido por amigo 3:");
    scanf("%f",&investimento3);
    printf("Digite valor do premio:");
    scanf("%f",&premio);
    investimento_total = investimento1+investimento2+investimento3;
    porcentagem1 = investimento1/investimento_total;
    porcentagem2 = investimento2/investimento_total;
    porcentagem3 = investimento3/investimento_total;
    valor1 = premio*porcentagem1;
    valor2 = premio*porcentagem2;
    valor3 = premio*porcentagem3;
    printf("\n Amigo 1 recebe: R$ %f\n", valor1);
    printf("Amigo 2 recebe: R$ %f\n", valor2);
    printf("Amigo 3 recebe: R$ %f\n", valor3);
    return 0;
}
