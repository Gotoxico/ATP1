//Programa para ler a m�dia de N alunos e indicar se s�o v�lidas//
#include <stdio.h>
int main(){
    int N, count=0;
    float media;
    printf("Digite numero de alunos: ");
    scanf("%d", &N);
    while (N>0 && count<N){
        printf("Digite media: ");
        scanf("%f", &media);
        if (media<0 || media>10){
            printf("Media invalida, digite outra! ");}
        else{count ++;}
    }
}