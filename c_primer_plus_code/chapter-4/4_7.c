#include<stdio.h>
#include<float.h>

int main(void){
    float a = 1.0 / 3.0;
    double b = 1.0 / 3.0;
    printf("float:%.6f double:%.6f FLT_DIG:%d DBL_DIG:%d\n",a,b,FLT_DIG,DBL_DIG);
    printf("float:%.12f double:%.12f FLT_DIG:%d DBL_DIG:%d\n",a,b,FLT_DIG,DBL_DIG);
    printf("float:%.16f double:%.16f FLT_DIG:%d DBL_DIG:%d\n",a,b,FLT_DIG,DBL_DIG);
}