#include <stdio.h>
#include <string.h>
int main(){
    char num[5], extenso[]="";
    int tamanho;
    printf("Digite numero: ");
    gets(num);
    tamanho = strlen(num);
    for(int i=0; i<tamanho; i++){
        if(i==0){
            if(num[i]=='0'){
                printf("Zero");}
            if(num[i]=='1'){
                printf("Um");}
            if(num[i]=='2'){
                printf("Dois");}
            if(num[i]=='3'){
                printf("Tres");}
            if(num[i]=='4'){
                printf("Quatro");}
            if(num[i]=='5'){
                printf("Cinco");}
            if(num[i]=='6'){
                printf("Seis");}
            if(num[i]=='7'){
                printf("Sete");}
            if(num[i]=='8'){
                printf("Oito");}
            if(num[i]=='9'){
                printf("Nove");}
        }
        if(i==1){
            if(num[i]=='1' && num[i+1]=='0'){
                printf("Dez");}
            if(num[i]=='1' && num[i+1]=='1'){
                printf("Onze");}
            if(num[i]=='1' && num[i+1]=='2'){
                printf("Doze");}
            if(num[i]=='1' && num[i+1]=='3'){
                printf("Treze");}
            if(num[i]=='1' && num[i+1]=='4'){
                printf("Quatorze");}
            if(num[i]=='1' && num[i+1]=='5'){
                printf("Quinze");}
            if(num[i]=='1' && num[i+1]=='6'){
                printf("Dezesseis");}
            if(num[i]=='1' && num[i+1]=='7'){
                printf("Dezessete");}
            if(num[i]=='1' && num[i+1]=='8'){
                printf("Dezoito");}
            if(num[i]=='1' && num[i+1]=='9'){
                printf("Dezenove");}
            if(num[i]=='2' && num[i+1]=='0'){
                printf("Vinte");}
            if(num[i]=='1' && num[i+1]=='9'){
                printf("Dezenove");}

            
        }
    }
}