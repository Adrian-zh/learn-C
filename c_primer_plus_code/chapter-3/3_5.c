#include<stdio.h>

int main(void){
    float a,res;
    float change = 3.156e7;
    printf("Please enter your age:");
    scanf("%f",&a);
    res = a * change;
    printf("If change your age to second,you are about %e seconds old.\n",res);
    return 0;
}