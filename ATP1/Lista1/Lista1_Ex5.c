#include <stdio.h>
int main(){
    int A, B;
    printf("");
    scanf("%d", &A);
    printf("");
    scanf("%d", &B);
    if(A%B==0 || B%A==0){
        printf("Sao Multiplos\n");}
    else{
        printf("Nao Sao Multiplos\n");
    }
    return 0;
}