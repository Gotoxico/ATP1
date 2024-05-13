//Programa para inverter numero de 3 digitos//
#include <stdio.h>
int main(){
    int n1, num;
    printf("Digite um numero com 3 digitos: ");
    scanf("%d",&n1);
    num = (n1%10)*100+((n1/10)%10)*10+(n1/100);
    printf("Ao contrario: %d",num);
    return 0;
}
