#include <stdio.h>
int fatorial(int num){
    if(num==0){
        return 1;
    }
    else{
        return (num*fatorial(num-1));
    }
}
int main(){
    int num;
    printf("Digite num: ");
    scanf("%d", &num);
    printf("Fatorial: %d", fatorial(num));
    return 0;
}
