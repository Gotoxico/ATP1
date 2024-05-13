//Programa para apresentar tres inteiros em ordem crescente//
#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf ("Digite numero 1: ");
    scanf ("%d", &n1);
    printf ("Digite numero 2: ");
    scanf ("%d", &n2);
    printf ("Digite numero 3: ");
    scanf ("%d", &n3);
    if (n1>=n2 && n2>=n3){
    printf("%d %d %d", n3, n2, n1);}
    else {
        if (n1>=n3 && n3>=n2) {
            printf("%d %d %d", n2, n3, n1);}
        else {
            if (n2>=n1 && n1>=n3){
                printf("%d %d %d", n3, n1, n2);}
            else {
                if (n2>=n3 &&  n3>=n1){
                    printf("%d %d %d", n1, n3, n2);}
                else {
                    if (n3>=n1 && n1>=n2){
                        printf("%d %d %d", n2, n1, n3);}
                    else{
                        printf ("%d %d %d", n1, n2, n3);
                    }
                }

            }
        }
    }
return 0;
}
