//Programa para ler media e frequencia//
#include <stdio.h>
int main(){
    int media, frequencia;
    printf("Digite a media do aluno: ");
    scanf("%f", &media);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);
    if (media>5 && frequencia>70){
        printf("Aprovado %c");}
    else{
        if (media>3 && media<5 && frequencia>70) {
            printf ("Exame %c");}
        else {
            if (media<3 && frequencia<70){
                printf("Reprovado %c");}
            else {}
              }
        }
    return 0;
    }

