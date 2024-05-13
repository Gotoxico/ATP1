#include <stdio.h>
int main(){
    char string[10000];
    int i=0;
    printf("Digite string: ");
    gets(string);
    while (string[i]!='\0'){
        if(string[i]=='1'){
            printf("%c",string[i]);}
        else{
            printf("1");}
        i++;
    }
    return 0;
}