//Programa para mostrar categoria do nadador//
#include <stdio.h>
int main(){
    int idade;
    printf("Digite idade do nadador: ");
    scanf("%d", &idade);
    if (idade>=5 && idade<=7){
        printf("Infantil A 5 a 7 %c");}
    else{
        if (idade>=8 && idade<=10) {
            printf ("Infantil B 8 a 10 %c");}
        else {
            if (idade>=11 && idade<=13){
                printf("Juvenil A 11 a 13 %c");}
            else {
                if (idade>=14 && idade<=17){
                    printf("Juvenil B 14 a 17");}
                else {
                    if (idade>=18){
                        printf("Adulto");}
                    else {printf("Muito novo!");}
                     }
                }
             }
        }
    return 0;
}
