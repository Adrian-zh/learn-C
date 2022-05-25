#include<stdio.h>

int main(void){
    float a,b;
    printf("Please enter a floating-point value:");
    scanf("%f",&a);
    getchar();
    printf("a.enter %.1f or %.1e;\n",a,a);
    printf("Please enter a floating-point value:");
    scanf("%f",&b);
    printf("b.enter %+.3f or %.3E;\n",b,b);
    return 0;
}