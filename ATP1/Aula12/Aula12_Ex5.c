#include <stdio.h>
int main(){
    char texto[10000], antepenultimo, penultimo, ultimo;
    int i=0;
    printf("Digite um texto: ");
    gets(texto);
    while (texto[i]!='\0'){
        i++;
    }
    ultimo = texto[i-1];
    penultimo = texto[i-2];
    antepenultimo = texto[i-3];
    printf("3 ultimos caracteres: %c%c%c", antepenultimo, penultimo, ultimo);
    return 0;
}