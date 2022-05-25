#include<stdio.h>

int main(void){
    float a;
    printf("Please enter a floating-point value:");
    scanf("%f",&a);
    getchar();
    printf("fixed-point notation:%f\n",a);
    printf("exponential notation:%e\n",a);
    printf("p notation:%a\n",a);
    return 0;
}