#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char string[10000], num_string[1000];
    int i=0, num_inteiro, soma=0;
    printf("Digite numeros separados por virgula: ");
    gets(string);
    while(string[i]!='\0'){
        int j=0;
        do{
            if(string[i]>='0' && string[i]<='9'){
                num_string[j]=string[i];
                j++;}
        i++;
        }
        while(string[i]!='\0' && string[i]!=',');
        num_string[j]='\0';
        num_inteiro=atoi(num_string);
        soma=soma+num_inteiro;
       
    }
    printf("Soma: %d", soma);
    return 0;
}