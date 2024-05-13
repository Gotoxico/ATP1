#include <stdio.h>
int fatorial(int num){
    int fatorial=1, i=0;
    for(i=num; i>=1; i--){
        fatorial *= i;
    }
    printf("%d", fatorial);
}
int main(){
    int num;
    printf("Digite num: ");
    scanf("%d", &num);
    fatorial(num);
    return 0;
}