#include <stdio.h>
int main(){
    char string[10000];
    int i=0, count=0, meio, palindromo=1;
    printf("Digite string: ");
    gets(string);
    while(string[count]!='\0'){
        count++;
    }
    meio=count/2;
    while(i < meio && palindromo){
        if(string[i] != string[count-1-i]){
            palindromo = 0;
        }
        i++;
    }
    if(palindromo){
        printf("Palindromo!");}
    else{
        printf("Nao palindromo!");
    }
    return 0;
}