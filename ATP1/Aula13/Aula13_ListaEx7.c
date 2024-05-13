//Aula 13_ListaEx7//
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char string[10000];
    int i=0;
    printf("Digite string: ");
    fgets(string,10000,stdin);
    for(int i=0;i<strlen(string);i++){
    string[i]=tolower(string[i]);
    }
    printf("%s", string);
    while(string[i]!='\0'){
        if(string[0]>='a' && string[0]<='z'){
            string[0]=string[0]-32;}
        else{
            if(string[i]==' '){
                string[i+1]=string[i+1]-32;}
        }
        i++;
    }
    
    
    printf("String: %s", string);
    return 0;
}
    