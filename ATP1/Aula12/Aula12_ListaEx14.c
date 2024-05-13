#include <stdio.h>
int main(){
    char data[10000];
    int count=0, i=0, valido=1;
    printf("Digite data no formato DD/MM/AAAA:");
    gets(data);
    while(data[count]!='\0'){
        count++;
    }
    if(data[2]=='/' && data[5]=='/' && count==10){
        data[2]='0';
        data[5]='0';
        while (i<count){
            if(!(data[i]=='0' || data[i]=='1' || data[i]=='2' || data[i]=='3' || data[i]=='4' || data[i]=='5' || data[i]=='6' || data[i]=='7' || data[i]=='8' || data[i]=='9')){
                valido = 0;}
            i++;
        }
    }
    else{
        valido = 0;
    }
    if(valido){
        printf("Valido!");}
    else{
        printf("Invalido!");
    }
    return 0;  
}