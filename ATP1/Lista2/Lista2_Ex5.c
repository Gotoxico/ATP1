#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char linha1[101], linha2[101];
    int N, tamanho1;
    printf("Digite N: ");
    scanf("%d", &N);
    getchar();
    for(int i=0; i<N; i++){
        printf("Linha 1: ");
        gets(linha1);
        printf("Linha 2: ");
        gets(linha2);
        tamanho1=strlen(linha1);
        for(int i=0; i<tamanho1; i++){
            printf("%c%c", linha1[i], linha1[i+1]);
            if(linha2[i+1]!='\0'){
                printf("%c%c", linha2[i], linha2[i+1]);}
            else{
                printf("%c", linha2[i]);
            }
            i=i+1;
            
        }
        printf("\n");
    }
    return 0;
}