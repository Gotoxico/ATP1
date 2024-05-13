//Programa para receber idade, altura e peso de N pessoas e indicar quantas possuem mais de 50 anos, média de altura das pessoas com idade entre 10 e 20 anos e percentual de pessoas com peso inferior a 50 quilos//
#include <stdio.h>
int main(){
    int idade, maior_cinquenta_anos, N=0, count=0;
    float altura, peso, percentual_menor, media_altura, pessoas_media=0, media;
    printf("Digite numero de pessoas: ");
    scanf("%d", &N);
    while (N>count){
        printf("Digite idade:");
        scanf("%d", &idade);
        printf("Digite altura:");
        scanf("%f", &altura);
        printf("Digite peso: ");
        scanf("%f", &peso);
        if (idade>50){
            maior_cinquenta_anos = maior_cinquenta_anos+1;}
        if(idade>10 && idade<20){
            pessoas_media = pessoas_media + 1;}
        if(pessoas_media!=0){
            media_altura = media_altura + altura;}
        if(peso<50){
            percentual_menor = percentual_menor+1;}
        count ++;
    }
    media = media_altura/pessoas_media;
    printf("Pessoas maiores de 50 anos: %d", maior_cinquenta_anos);
    printf("\nMedia altura de pessoas entre 10 e 20 anos: %f", media);
    printf("\nPercentual pessoas com menos de 50kg: %f ", percentual_menor/N*100);
    return 0;
}