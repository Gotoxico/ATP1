#include <stdio.h>
int main(){
    char num[1000];
    int i;
    printf("Digite numero binario: ");
    gets(num);
    while(num[i]!='\0'){
        if (num[i]=='1'){
            printf("%c", num[i]);}
        else{
            printf("*");}
        i++;
    }
}