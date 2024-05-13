#include <stdio.h>
int main(){
    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m05, m01;
    double N;
    printf("Digite N: ");
    scanf("%lf", &N);
    int notas = N;
    int moedas = (N-notas)*100;

    printf("NOTAS:\n");

    //notas//
    n100=notas/100;
    printf("%d nota(s) de R$ 100.00\n", n100);
    notas=notas%100;

    n50=notas/50;
    printf("%d nota(s) de R$ 50.00\n", n50);
    notas=notas%50;

    n20=notas/20;
    printf("%d nota(s) de R$ 20.00\n", n20);
    notas=notas%20;

    n10=notas/10;
    printf("%d nota(s) de R$ 10.00\n", n10);
    notas=notas%10;

    n5=notas/5;
    printf("%d nota(s) de R$ 5.00\n", n5);
    notas=notas%5;

    n2=notas/2;
    printf("%d nota(s) de R$ 2.00\n", n2);
    notas=notas%2;

    printf("MOEDAS:\n");

    //moedas//
    m1=notas/1;
    printf("%d moeda(s) de R$ 1.00\n", m1);
    notas=notas%1;

    m50=moedas/50;
    printf("%d moeda(s) de R$ 0.50\n", m50);
    moedas=moedas%50;

    m25=moedas/25;
    printf("%d moeda(s) de R$ 0.25\n", m25);
    moedas=moedas%25;

    m10=moedas/10;
    printf("%d moeda(s) de R$ 0.10\n", m10);
    moedas=moedas%10;

    m05= moedas/5;
    printf("%d moeda(s) de R$ 0.05\n", m05);
    moedas=moedas%5;

    m01= moedas/1;
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}

