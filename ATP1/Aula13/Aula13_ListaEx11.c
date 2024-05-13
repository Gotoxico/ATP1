#include <stdio.h>
#include <string.h>
int main(){
    char string[100], auxiliar;
    int tamanho;
    printf("Digite uma palavra(sem espacos): ");
    gets(string);
    tamanho=strlen(string);
    for(int i=0; i<tamanho-1; i++){
        for(int j=0; j<tamanho-1-i; j++){
            if(string[j]>string[j+1]){
                auxiliar=string[j+1];
                string[j+1]=string[j];
                string[j]=auxiliar;}
        }
    }
    printf("Caracteres em ordem alfabetica: %s", string);
    return 0;
}