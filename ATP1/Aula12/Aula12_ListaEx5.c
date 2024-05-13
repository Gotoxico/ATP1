#include <stdio.h>
int main(){
    char string[10000];
    int i=0, count=0, inc=0;
    printf("Digite string: ");
    gets(string);
    while(string[i]!='\0'){
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            count++;}
        else {
            inc++;}
        i++;
    }
    printf("Vogais: %d e consoantes: %d", count, inc);
    return 0;
}