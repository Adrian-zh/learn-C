#include<stdio.h>

int main(void){
    float a,b;
    int flag = 1;
    while (flag){
        printf("Please enter two floating point numbers:");
        flag = scanf("%f %f",&a,&b);
        if(flag != 0){
            printf("%.2f\n",(a - b ) / ( a * b ) );
        }
    }
    return 0;
}