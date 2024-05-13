#include <stdio.h>
int main(){
    int N, count=0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }
}