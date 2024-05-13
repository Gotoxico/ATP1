#include <stdio.h>
int main(){
    int number, hours;
    float hourpay, salary;
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%f", &hourpay);
    salary = hours*hourpay;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}