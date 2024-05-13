#include <stdio.h>
int main(){
    int valor, count=0;
    for(int i=0; i<6; i++){
        getchar();
        scanf("%d", &valor);
        if(valor>0){
            count++;}
        else{}
    }
    printf("%d valores positivos\n", count);
    return 0;
}