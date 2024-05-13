#include <stdio.h>
int main(){
    char caracter, texto[10000];
    int count=0, i=0;
    printf("Digite texto: ");
    gets(texto);
    printf("Digite caracter desejado: ");
    scanf("%c", &caracter);
    while (texto[i]!='\0'){
        if (texto[i]==caracter){
            count++;}
    i++;
    }
    if (count!=0){
        printf("Contem caracter!");}
    else{printf("Nao contem caracter!");}
}