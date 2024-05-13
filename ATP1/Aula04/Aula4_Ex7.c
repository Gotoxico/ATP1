/*Programa para ler numero inteiro e gerar tabuada de 0 a 10*/
#include<stdio.h>
int main(){
    int tabuada0, tabuada1, tabuada2, tabuada3, tabuada4, tabuada5, tabuada6, tabuada7, tabuada8, tabuada9, tabuada10, n;
    printf("Este e um programa para gerar tabuadas de 0 a 10, digite um numero inteiro qualquer: ");
    scanf("%d", &n);
    tabuada0 = n*0;
    tabuada1 = n*1;
    tabuada2 = n*2;
    tabuada3 = n*3;
    tabuada4 = n*4;
    tabuada5 = n*5;
    tabuada6 = n*6;
    tabuada7 = n*7;
    tabuada8 = n*8;
    tabuada9 = n*9;
    tabuada10 = n*10;
    printf("Tabuada do numero e %d", tabuada0);
    printf (", %d", tabuada1);
    printf (", %d", tabuada2);
    printf (", %d", tabuada3);
    printf (", %d", tabuada4);
    printf (", %d", tabuada5);
    printf (", %d", tabuada6);
    printf (", %d", tabuada7);
    printf (", %d", tabuada8);
    printf (", %d", tabuada9);
    printf (", %d", tabuada10);
    return 0;
}
