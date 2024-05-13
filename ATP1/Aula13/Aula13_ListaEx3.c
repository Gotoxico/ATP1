#include <stdio.h>
#include <string.h>
int main(){
    char string1[10000], string2[10000];
    int igualdade;
    printf("Digite string 1: ");
    gets(string1);
    printf("Digite string 2: ");
    gets(string2);
    igualdade = strcmp(string1, string2);
    if(igualdade==0){
        printf("Strings iguais!");}
    else{
        printf("Strings diferentes!");
    }
    return 0;
}