#include <stdio.h>
#include <string.h>
int main(){
    char nome[1000], endereco[1000], string[100000];
    int idade, telefone;
    printf("Digite nome: ");
    gets(nome);
    printf("Digite idade: ");
    scanf("%d", &idade);
    getchar();
    printf("Digite endereco: ");
    gets(endereco);
    printf("Digite telefone: ");
    scanf("%d", &telefone);
    sprintf(string, "%s %d %s %d", nome, idade, endereco, telefone);
    printf("%s", string);
    return 0;
}