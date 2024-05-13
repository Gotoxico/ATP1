//Programa para ler duas notas, verificar se são válidas e dar média//
#include <stdio.h>
int main(){
    float n1, n2;
    printf("Digite nota 1: ");
    scanf("%f", &n1);
    printf("Digite nota 2: ");
    scanf("%f", &n2);
    if (n1>=0.0 && n1<=10.0 && n2>=0.0 && n2<=10.0) {
        printf("Media aritmetica: %f", (n1+n2)/2);}
    else {printf("Nota invalida");}
    return 0;
}
