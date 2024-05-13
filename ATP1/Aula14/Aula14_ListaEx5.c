#include <stdio.h>
int menu(num){
    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\nDigite opcao: ");
    scanf("%d", &num);
    printf("Opcao: %d", num);
}

int main(){
    menu();
    return 0;
}