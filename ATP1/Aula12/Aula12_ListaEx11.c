#include <stdio.h>
int main(){
    char string1[10000]; 
    char string2[10000]="";
    int i=0;
    printf("Digite string 1: ");
    gets(string1);
    while(string1[i]!='\0'){
        string2[i]=string1[i];
        i++;
    }
    printf("\nString 2: %s", string2);
    return 0;
}