#include <stdio.h>
#include <string.h>
int main(){
    char string[10000];
    int lenght;
    printf("Digite string: ");
    gets(string);
    lenght = strlen(string);
    for(int i=0; i<lenght; i++){
        if(string[i]>='a' && string[i]<='z'){
            string[i] = string[i]-32;}
    }
    printf("String em maiusculo: %s", string);
    return 0;
}