#include <stdio.h>
int tabuada(int num){
    for(int i=0; i<=10; i++){
        printf("%d\n", num*i);
    }
    return tabuada;
}
int main(){
    int num;
    printf("Digite num: ");
    scanf("%d",&num);
    tabuada(num);
    return 0;
}