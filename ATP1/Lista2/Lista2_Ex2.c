#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int num1, num2, soma, tamanho;
    char numstring[100];
    do{
        printf("Digite num 1: ");
        scanf("%d", &num1);
        printf("Digite num 2: ");
        scanf("%d", &num2);
        soma=num1+num2;
        itoa(soma, numstring, 10);
        tamanho=strlen(numstring);
        for(int i=0; i<tamanho; i++){
            if(numstring[i]!='0'){
                printf("%c", numstring[i]);}
        }
        if(soma!=0){
        printf("\n");}
    }while(num1!=0 && num2!=0);
    return 0;
}