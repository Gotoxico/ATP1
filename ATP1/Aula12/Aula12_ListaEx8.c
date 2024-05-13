#include <stdio.h>
int main(){
    char string[10000];
    int count=0;
    printf("Digite string: ");
    gets(string);
    while (string[count]!='\0'){
        count++;
    }
    for (; count>=0; count--){
        printf("%c", string[count-1]);
    }
    return 0;
}