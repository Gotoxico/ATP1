#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int tamanho(char string[]){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char string[10000];
    printf("Digite string: ");
    gets(string);
    printf("Tamanho: %d", tamanho(string));
    return 0;
}