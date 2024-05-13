#include <stdio.h>
#include <string.h>
char remover_espacos(char *string){
    int tamanho=strlen(string), j=0;
    for(int i=0; i<tamanho; i++){
        if(string[i]==' '){
            string[j]=string[i];}
        j++;
    }
    printf("%s", string);
}
int main(){
    char string[1000];
    printf("Digite string: ");
    gets(string);
    remover_espacos(string);
    return 0;
}