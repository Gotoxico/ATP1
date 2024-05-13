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
    while (i<=count2){
        string1[count1+i] = string2[i];
        i++;
    }
    printf("String 1: %s", string1);
    return 0;
}