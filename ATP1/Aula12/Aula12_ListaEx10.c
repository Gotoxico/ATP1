#include <stdio.h>
int main(){
    char string1[10000], string2[10000];
    int i=0, count1=0, count2=0;
    printf("Digite string 1: ");
    gets(string1);
    printf("Digite string 2: ");
    gets(string2);
    while(string1[count1]!='\0'){
        count1++;
    }
    while(string2[count2]!='\0'){
        count2++;
    }
    if(count1!=count2){
        printf("Strings diferentes!");}
    else{
        while(string1[i]!='\0' && string1[i] == string2[i]){
            i++;
        }
        if(string1[i]!=string2[i]){
            printf("Strings diferentes!");}
        else{
            printf("Strings iguais!");
        }
    }
    return 0;
}