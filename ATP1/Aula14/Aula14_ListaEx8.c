#include <stdio.h>
#include <string.h>
void centralizar(char *string, int tamanho_string){
    int espacos =(tamanho_string-strlen(string))/2;
    for(int i=0; i<espacos; i++){
        printf(" ");
    }
    printf("%s\n", string);
}
int main(){
    char string1[100], string2[100], string3[100], string4[100], string5[100];
    int tamanho;
    printf("Digite 5 palavras: ");
    gets(string1);
    gets(string2);
    gets(string3);
    gets(string4);
    gets(string5);
    printf("Digite tamanho: ");
    scanf("%d", &tamanho);
    printf("Palavras centralizadas: \n");
    centralizar(string1, tamanho);
    centralizar(string2, tamanho);
    centralizar(string3, tamanho);
    centralizar(string4, tamanho);
    centralizar(string5, tamanho);
    return 0;
}