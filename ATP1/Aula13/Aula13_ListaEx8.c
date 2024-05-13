#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char string[100], maior[100], menor[100];
    int quantidade;
    printf("Informe quantas palavras ira digitar: ");
    scanf("%d", &quantidade);
    fflush(stdin);
    printf("Digite palavra 1: ");
    gets(string);
    strcpy(menor, string);
    strcpy(maior, string);
    for(int i=1; i<quantidade; i++){
        printf("Digite palavra %d: ", i+1);
        gets(string);
        if(strcmp(string, menor)<0){
            strcpy(menor, string);}
        if(strcmp(string, maior)>0){
            strcpy(string, maior);}
        
    }
    printf("Primeira: %s", menor);
    printf("\nUltima: %s", maior);
    return 0;
}