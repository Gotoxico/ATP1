#include <stdio.h>
int main(){
    char L1, L2, string[10000];
    int i=0;
    printf("Digite string: ");
    gets(string);
    printf("Digite L1: ");
    scanf("%c", &L1);
    fflush(stdin);
    printf("Digite L2: ");
    scanf("%c", &L2);
    while (string[i]!='\0'){
        if(string[i]==L1){
            printf("%c", L2);}
        else{
            printf("%c", string[i]);
        }
        i++;
    }
    return 0;
}