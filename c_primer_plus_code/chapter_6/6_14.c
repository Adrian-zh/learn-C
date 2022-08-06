#include<stdio.h>

int main(void){
    int i;
    double a[8],b[8],sum = 0.0;
    printf("Please enter 8 number:");
    for(i = 0;i < 8;i++){
        scanf("%lf",&a[i]);
        sum += a[i];
        b[i] = sum;
    }
    for(i = 0;i < 8;i++){
        printf("%10.2f",a[i]);
    }
    printf("\n");
    for(i = 0;i < 8;i++){
        printf("%10.2f",b[i]);
    }
    return 0;
}