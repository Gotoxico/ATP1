#include <stdio.h>
int main() {
    int N, fatorial=1;
    printf("Digite N: ");
    scanf("%d", &N);
    for(int i=N;i>=1;i--){
        fatorial *= i;
    }
    printf("%d\n", fatorial);
    return 0;
}