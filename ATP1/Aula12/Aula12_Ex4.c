#include <stdio.h>
int main(){
    char texto[10000];
    printf("Digite um texto: ");
    gets(texto);
    printf("3 primeiros caracteres: %c%c%c", texto[0], texto[1], texto[2]);
}