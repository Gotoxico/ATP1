#include <stdio.h>
int main(){
    char string1[100], string2[100];
    printf("Digite string 1: ");
    gets(string1);
    printf("Digite string 2: ");
    gets(string2);
    sprintf(string1, "%s%s", string1, string2);
    printf("%s", string1);
    return 0;
}