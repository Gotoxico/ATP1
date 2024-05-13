//Programa para calcular consumo eletrico//
#include<stdio.h>
float main(){
    float watts, tempo_diario, watts_dia, watts_mes, watts_ano, kwh_dia, kwh_mes, kwh_ano, preco_kwh, gasto_mensal;
    printf("Digite potencia do equipamento em watts: ");
    scanf("%f", &watts);
    printf("Digite o tempo de utilizacao do equipamento em horas: ");
    scanf("%f", &tempo_diario);
    printf("Digite o valor do kwh: ");
    scanf("%f", &preco_kwh);
    watts_dia = watts*tempo_diario;
    watts_mes = watts*tempo_diario*30;
    watts_ano = watts*tempo_diario*365;
    kwh_dia = watts*tempo_diario/1000;
    kwh_mes = kwh_dia*30;
    kwh_ano = kwh_mes*12;
    printf("watts/dia: %.2f \n", watts_dia);
    printf("watts/mes: %.2f\n", watts_mes);
    printf("watts/ano: %.2f\n", watts_ano);
    printf("kwh/dia: %.2f\n", kwh_dia);
    printf("kwh/mes: %.2f\n", kwh_mes);
    printf("kwh/ano: %.2f\n", kwh_ano);
    gasto_mensal = kwh_mes*preco_kwh;
    printf("Gasto mensal e: R$%f", gasto_mensal);


}
