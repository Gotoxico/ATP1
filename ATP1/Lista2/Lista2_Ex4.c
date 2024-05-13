#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char string[10000], stringnum1[10000]="", stringnum2[10000]="", stringnum3[10000]="";
    int N, num1, num2, num3, soma;
    printf("Digite N: ");
    scanf("%d", &N);
    getchar();
    for(int i=0; i<N; i++){
        printf("Digite linha: ");
        gets(string);
        sprintf(stringnum1,"%c%c", string[2], string[3]);
        sprintf(stringnum2,"%c%c%c", string[5], string[6], string[7]);
        sprintf(stringnum3,"%c%c", string[11], string[12]);
        num1=atoi(stringnum1);
        num2=atoi(stringnum2);
        num3=atoi(stringnum3);
        soma=num1+num2+num3;
        printf("%d", soma);
        printf("\n");
    }
    return 0;
}
