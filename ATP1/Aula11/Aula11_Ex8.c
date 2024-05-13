#include <stdio.h>
int main(){
    int n1, n2=0, n3 = 1, termo=0;
    printf("Digite quantos termos quer: ");
    scanf("%d", &termo);
    for(int count=0; count<termo; count++){
        printf("%d\t", n3);
        n1 = n2;
        n2 = n3;
        n3 = n3 + n1;
    }
}