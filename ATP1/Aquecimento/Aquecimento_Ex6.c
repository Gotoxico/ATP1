#include <stdio.h>
int main() {
    double A, B, MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    if (A>=0.0 && A<=10.0 && B>=0.0 && A<=10.0){
        MEDIA = (A*3.5+B*7.5)/11;}
    else{}
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}