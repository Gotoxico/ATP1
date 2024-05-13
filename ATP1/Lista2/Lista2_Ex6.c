#include <stdio.h>
#include <string.h>
int main(){
    int c, tamanho, tamanhodois, j;
    char string[10000], stringminusculo[10000]="";
    printf("Digite C: ");
    scanf("%d", &c);
    getchar();
    for(int i=0; i<c; i++){
        int k=0;
        printf("Digite linha: ");
        scanf("%s", &string);
        getchar();
        tamanho=strlen(string);
        for(j=0; j<tamanho; j++){
            if(string[j]>='a' && string[j]<='z'){
                stringminusculo[k]=string[j];
            k++;    }
        }
        stringminusculo[k]='\0';
        tamanhodois=strlen(stringminusculo);
        for(int a=tamanhodois-1; a>=0; a--){
            printf("%c", stringminusculo[a]);
        }
        printf("\n");
    }
    return 0;
}