//Programa para receber dividendo e divisor e exibir o quociente e o resto//
#include <stdio.h>
int main(){
    int dividendo, divisor;
    printf("Digite um dividendo:");
    scanf("%d",&dividendo);
    printf("Digite um divisor:");
    scanf("%d",&divisor);
    printf("Quociente: %d", dividendo/divisor);
    printf("\nResto: %d", dividendo%divisor);
    return 0;

}
