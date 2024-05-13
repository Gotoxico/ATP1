#include <stdio.h>
int main(){
    char string[10000];
    printf("Digite string: ");
    gets(string);
    printf("%s", string);
    return 0;
}