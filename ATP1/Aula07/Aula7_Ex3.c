//Programa para mostrar categoria do nadador//
#include <stdio.h>
int main(){
    int idade, data_ano, data_nascimento_ano;
    printf("Digite o ano da data desejada: ");
    scanf("%d", &data_ano);
    printf("Digite o ano da data de nascimento:");
    scanf("%d", &data_nascimento_ano);
    idade = data_ano - data_nascimento_ano;
    printf("Idade: %d", idade);
    return 0;
}
