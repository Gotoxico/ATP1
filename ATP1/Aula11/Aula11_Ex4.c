#include <stdio.h>
int main(){
    int N, count=3;
    printf("Digite um numero: ");
    scanf("%d", &N);
    while (N>=count){
        if (count%3==0){
            printf("\n%d", count);
        }
        else {
            if(count%5==0){
                printf("\n%d", count);}
            else{}
        }
        count++;
    }
    return 0;
}