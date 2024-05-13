#include <stdio.h>
int dentro_intervalo(int valor, int inicio, int fim){
    if(valor<inicio || valor>fim){
        printf("Fora do intervalo");}
    else{
        printf("Dentro do intervalo");
    }
}
int main(){
    int valor, inicio, fim;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    printf("Digite um inicio: ");
    scanf("%d", &inicio);
    printf("Digite um fim: ");
    scanf("%d", &fim);
    dentro_intervalo(valor, inicio, fim);
    return 0;
}