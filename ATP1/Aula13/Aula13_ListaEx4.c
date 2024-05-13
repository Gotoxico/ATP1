#include <stdio.h>
#include <string.h>
int main(){
    char string1[10000], string2[10000]="";
    printf("Digite string: ");
    gets(string1);
    strcpy(string2, string1);
    printf("String 1: %s String 2: %s", string1, string2);
    return 0;
}