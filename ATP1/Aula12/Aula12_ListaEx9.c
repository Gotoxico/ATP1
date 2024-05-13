#include <stdio.h>
int main(){
    char string[10000];
    int count=0;
    printf("Digite string: ");
    gets(string);
    while (string[count]!='\0'){
        count++;
    }
    printf("Quantidade caracteres: %d", count);
    return 0;
}