#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char string[100], string_mod[100]="", string_contrario[100]="";
    int tamanho_string, tamanho;
    printf("Digite linha: ");
    gets(string);
    tamanho_string=strlen(string);
    int k=0;
    for(int i=0; i<tamanho_string; i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            string_mod[k]=string[i];
            k++;
        }
    }
    string_mod[k]='\0';
    tamanho=strlen(string_mod);
    int u=0;
    for(int a=tamanho-1; a>=0; a--){
        string_contrario[u]=string_mod[a];
        u++;
    }
    string_contrario[u]='\0';
    if(strcmp(string_mod, string_contrario)==0){
        printf("S");}
    else{
        printf("N");
    }
    return 0;
}