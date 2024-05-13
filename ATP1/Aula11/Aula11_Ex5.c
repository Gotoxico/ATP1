#include <stdio.h>
int main(){
    int numero, resultado;
    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    if (numero == 1){
        resultado ++;}
    else{}
    for (int count=2; count<numero; count++){
        if (numero%count==0){
            resultado++;}
        else{}
        
    }
    if (resultado==0){
        printf("%d Primo!", numero);}
    else {printf("%d Nao primo!", numero);}
    return 0;
}