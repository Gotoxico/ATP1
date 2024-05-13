#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char string[10000];
    int i=0, counta=0, countb=0, countc=0, countd=0, counte=0, countf=0, countg=0, counth=0, counti=0, countj=0, countk=0, countl=0, countm=0, countn=0, counto=0, countp=0, countq=0, countr=0, counts=0, countt=0, countu=0, countv=0, countw=0, countx=0, county=0, countz=0;
    printf("Digite uma palavra: ");
    fgets(string, 10000, stdin);
    for(int i=0;i<strlen(string);i++){
    string[i]=tolower(string[i]);
    }
    while(string[i]!='\0'){
        switch(string[i]){
            case 'a':
                counta++;
                break;
            case 'b':
                countb++;
                break;
            case 'c':
                countc++;
                break;
            case 'd':
                countd++;
                break;
            case 'e':
                counte++;
                break;
            case 'f':
                countf++;
                break;
            case 'g':
                countg++;
                break;
            case 'h':
                counth++;
                break;
            case 'i':
                counti++;
                break;
            case 'j':
                countj++;
                break;
            case 'k':
                countk++;
                break;
            case 'l':
                countl++;
                break;
            case 'm':
                countm++;
                break;
            case 'n':
                countn++;
                break;
            case 'o':
                counto++;
                break;
            case 'p':
                countp++;
                break;
            case 'q':
                countq++;
                break;
            case 'r':
                countr++;
                break;
            case 's':
                counts++;
                break;
            case 't':
                countt++;
                break;
            case 'u':
                countu++;
                break;
            case 'v':
                countv++;
                break;
            case 'w':
                countw++;
                break;
            case 'x':
                countx++;
                break;
            case 'y':
                county++;
                break;
            case 'z':
                countz++;
                break;
        }
        i++;
    }
    if(counta!=0){
        printf("a : %d ocorrencia(s)\n", counta);}
    if(countb!=0){
        printf("b : %d ocorrencia(s)\n", countb);}
    if(countc!=0){
        printf("c : %d ocorrencia(s)\n", countc);}
    if(countd!=0){
        printf("d : %d ocorrencia(s)\n", countd);}
    if(counte!=0){
        printf("e : %d ocorrencia(s)\n", counte);}
    if(countf!=0){
        printf("f : %d ocorrencia(s)\n", countf);}
    if(countg!=0){
        printf("g : %d ocorrencia(s)\n", countg);}
    if(counth!=0){
        printf("h : %d ocorrencia(s)\n", counth);}
    if(counti!=0){
        printf("i : %d ocorrencia(s)\n", counti);}
    if(countj!=0){
        printf("j : %d ocorrencia(s)\n", countj);}
    if(countk!=0){
        printf("k : %d ocorrencia(s)\n", countk);}
    if(countl!=0){
        printf("l : %d ocorrencia(s)\n", countl);}
    if(countm!=0){
        printf("m : %d ocorrencia(s)\n", countm);}
    if(countn!=0){
        printf("n : %d ocorrencia(s)\n", countn);}
    if(counto!=0){
        printf("o : %d ocorrencia(s)\n", counto);}
    if(countp!=0){
        printf("p : %d ocorrencia(s)\n", countp);}
    if(countq!=0){
        printf("q : %d ocorrencia(s)\n", countq);}
    if(countr!=0){
        printf("r : %d ocorrencia(s)\n", countr);}
    if(counts!=0){
        printf("s : %d ocorrencia(s)\n", counts);}
    if(countt!=0){
        printf("t : %d ocorrencia(s)\n", countt);}
    if(countu!=0){
        printf("u : %d ocorrencia(s)\n", countu);}
    if(countv!=0){
        printf("v : %d ocorrencia(s)\n", countv);}
    if(countw!=0){
        printf("w : %d ocorrencia(s)\n", countw);}
    if(countx!=0){
        printf("x : %d ocorrencia(s)\n", countx);}
    if(county!=0){
        printf("y : %d ocorrencia(s)\n", county);}
    if(countz!=0){
        printf("z : %d ocorrencia(s)\n", countz);}
    return 0;
}
    
