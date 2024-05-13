#include <stdio.h>
#include <string.h>
#include <ctype.h>
void minusculo(char string[]){
    int i=0;
    while (string[i]!='\0'){
        if(string[i]>='A' && string[i]<='Z'){
            string[i]=string[i]+32;}
        i++;
    }
}
int main(){
    char string[10000];
    printf("Digite string: ");
    gets(string);
    minusculo(string);
    printf("String minuscula: %s", string);
    return 0;
}