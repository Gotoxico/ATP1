#include <stdio.h>
#include <string.h>
int main(){
    char string[10000];
    printf("Digite string: ");
    gets(string);
    int lenght = strlen(string);
    printf("Tamanho da string: %d", lenght);
    return 0;
}