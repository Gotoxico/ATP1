#include <stdio.h>
int main(){
    char nome[100], idade[3], endereco[1000], telefone[20];
    printf("Digite nome: ");
    gets(nome);
    printf("Digite idade: ");   
    gets(idade);
    printf("Digite endereco: ");
    gets(endereco);
    printf("Digite telefone: ");
    gets(telefone);
    printf("Nome: %s; Idade: %s; Endereco: %s; Telefone: %s.",nome, idade, endereco, telefone);
    return 0;
}