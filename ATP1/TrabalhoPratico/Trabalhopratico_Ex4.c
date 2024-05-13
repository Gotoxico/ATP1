#include <stdio.h>
#include <string.h>
#include <ctype.h>
int funcao(char *string, char *substring){
    int igual;
    for(int i=0; i<=strlen(string); i++){
        igual=strcmp(string[i], substring[i]);
        if(igual!=0){
            printf("Palavra de Busca esta na String");}
        else{
            printf("Palavra de Busca nao esta na String");}
    }

}
int main(){
    char string[10000], substring[10000];
    printf("Digite uma palavra: ");
    gets(string);
    printf("Palavra de busca: ");
    gets(substring);
    funcao(string, substring);
    printf("Substring: %s", funcao);
    return 0;
}