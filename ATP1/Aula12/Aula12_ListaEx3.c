#include <stdio.h>
int main(){
    char string[10000];
    int count=0, a=0, e=0, i=0, o=0, u=0;
    printf("Digite string: ");
    gets(string);
    while(string[count]!='\0'){
        if(string[count]=='a' || string[count]=='A'){
            a++;}
        if(string[count]=='e' || string[count]=='E'){
            e++;}
        if(string[count]=='i' || string[count]=='I'){
            i++;}
        if(string[count]=='o' || string[count]=='O'){
            o++;}
        if(string[count]=='u' || string[count]=='U'){
            u++;}
        count++;
    }
    printf("A: %d; E: %d; I: %d; O: %d; U: %d.", a, e, i, o, u);
    return 0;
}