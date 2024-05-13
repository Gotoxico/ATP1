//Programa para verificar empréstimo//
#include <stdio.h>
int main(){
    float salario, prestacao;
    printf("Digite valor do salario: ");
    scanf("%f",&salario);
    printf("Digite valor da prestacao: ");
    scanf("%f",&prestacao);
    if (salario/100*20<prestacao) {
        printf("Emprestimo nao concedido!");}
    else {printf("Emprestimo concedido!");}
    return 0;
}
