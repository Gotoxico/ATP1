//Programa para ler duas medias e apresentar media final//
#include <stdio.h>
int main(){
    float mt, mp, media_final;
    printf("Digite media trabalho: ");
    scanf("%f", &mt);
    printf("Digite media prova: ");
    scanf("%f", &mp);
    if (mt>5 && mp>5){
        printf("Media final: %f", (mt+mp)/2);}
    else{
        if (mt<mp) {
            printf ("Media final: %f", mt);}
        else {
            if (mt>mp){
                printf("Media final: %f", mp);}
            else {
                printf("Media final: %f", mt);}
            }
        }
    return 0;
}
