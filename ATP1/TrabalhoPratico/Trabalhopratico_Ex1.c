#include <stdio.h>
#include <string.h>
void codificador(char string[], int k){
    int i=0;
    while(string[i]!='\0' && k>=1 && k<=10){
        string[i]=string[i]+k;
        i++;
    }
}
void decodificador(char string[], int k){
    int i=0;
    while(string[i]!='\0' && k>=1 && k<=10){
        string[i]=string[i]-k;
        i++;
    }
}
int main(){
    char string[10000], resposta;
    int k;
    printf("Digite uma palavra: ");
    gets(string);
    printf("Valor K: ");
    scanf("%d", &k);
    codificador(string,k);
    printf("Palavra codificada: %s", string);
    getchar();
    printf("\nDeseja decodificar? (Digite S ou N): ");
    scanf("%c", &resposta);
    if(resposta=='S'){
        decodificador(string,k);
        printf("\nPalavra decodificada: %s", string);}
    else{}
    return 0;
}