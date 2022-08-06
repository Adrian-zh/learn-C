#include<stdio.h>

float calculate(float a,float b){
    return ("%.2f\n",(a - b ) / ( a * b ) );
}

int main(void){
    float a,b,res;
    int flag = 1;
    while (flag){
        printf("Please enter two floating point numbers:");
        flag = scanf("%f %f",&a,&b);
        if(flag != 0){
            res = calculate(a,b);
            printf("%.2f\n",res);
        }
    }
    return 0;
}