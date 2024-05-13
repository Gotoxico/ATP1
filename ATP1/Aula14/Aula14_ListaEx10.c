#include <stdio.h>
#include <string.h>
int digito(char *string){
    int tamanho=strlen(string);
    int num;
    for(int i=0; i<tamanho; i++){
        switch(string[i]){
            case 1:
                if(string[i]>='A' && string[i]<='z'){
                    num=0;}
                break;
            case 2:
                if(string[i]>='0' && string[i]<='9'){
                    num=1;}
                break;
        }
    }
    if(num==0){
        printf("Verificacao: 0");}
    else{
        printf("Verificacao: 1");
    }
    
}
int main(){
    char string[10000];
    printf("Digite uma palavra: ");
    gets(string);
    digito(string);
    return 0;
}