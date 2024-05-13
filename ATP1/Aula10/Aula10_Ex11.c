#include <stdio.h>
int main(){
    int primeiro, segundo;
    for (primeiro=0; primeiro<=10; primeiro++){
        for (segundo=0; segundo<=10; segundo++)
            printf("%d x %d = %d \n", primeiro, segundo, primeiro * segundo);
        printf("\n");
    }
    return 0;
}