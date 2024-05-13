#include <stdio.h>
int main(){
    char string[10000];
    int i=0;
    printf("Digite string: ");
    gets(string);
    while(string[i]!='\0'){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
            printf("_");}
        else {
            printf("%c", string[i]);}
        i++;
    }
    return 0;
}