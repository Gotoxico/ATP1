#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int N, K, bandeira;
    char string1[21], string[21], stringant[21];
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &K);
        getchar();
        gets(string1);
        strcpy(stringant, string1);
        bandeira=1;
        for(int j=1; j<K; j++){
            gets(string);
            if(strcmp(string, stringant)>0 || strcmp(string, stringant)<0){
                bandeira=0;}
            strcpy(stringant, string);
        }
        if(bandeira==0){
            printf("ingles\n");}
        else{
            printf("%s\n", string);
    }
    }
    return 0;
}