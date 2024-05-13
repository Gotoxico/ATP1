#include <stdio.h>
int main(){
    char nome[100], idade[3], endereco[100];
    printf("Digite nome: ");
    gets(nome);
    printf("Digite idade: ");
    gets(idade);
    printf("Digite endereco: ");
    gets(endereco);

    printf("Nome: %s", nome);
    printf("\nIdade: %s", idade);
    printf("\nEndereco: %s", endereco);
    return 0;
}
