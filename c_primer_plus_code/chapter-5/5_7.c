#include<stdio.h>

int calculate(double n);

int calculate(double n){
    double res;
    res = n * n * n;
    printf("%.2f  or %.2e",res,res);
    return 0;
}

int main(void){
    double num;
    printf("Please enter a number:");
    scanf("%lf",&num);
    getchar();
    calculate(num);
    return 0;
}