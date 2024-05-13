#include <stdio.h>
#include <string.h>
void substring(char *entrada, char *saida, int inicial, int final){
    int tamanho=final-inicial;
    int i;
    for(i=0; i<=tamanho; i++){
        saida[i]=entrada[inicial+i];
    }
}
int main(){
    char entrada[10000], saida[10000];
    int inicio, fim;
    printf("Digite uma palavra: ");
    gets(entrada);
    printf("Digite posicao inicial: ");
    scanf("%d", &inicio);
    printf("Digite posicao final: ");
    scanf("%d", &fim);
    substring(entrada, saida, inicio, fim);
    printf("Substring: %s", saida);
    return 0;
}