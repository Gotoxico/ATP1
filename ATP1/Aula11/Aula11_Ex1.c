#include <stdio.h>
int main(){
    int count=0, numero, maior, menor;
    while (numero>=0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (count==0){
            maior=numero;}
        else{
            if (numero>=maior){
                maior=numero;}
        }
        if (count==0){
            menor=numero;}
        else{
            if (numero<=menor){
                menor=numero;}
        }
        count++;
    }
    printf("Maior: %d e Menor: %d", maior,menor);
    return 0;
}