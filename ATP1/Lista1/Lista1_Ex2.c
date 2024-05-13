#include <stdio.h>
int main(){
    int days1, years, months, days2;
    scanf("%d", &days1);
    years = days1/365;
    months = (days1%365)/30;
    days2 = (days1%365)%30;
    printf("%d ano(es)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days2);
    return 0;
}