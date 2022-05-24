#include<stdio.h>

int main(void){
    char a;
    printf("please input a number of ascii:");
    scanf("%d",&a);
    getchar();
    printf("the char of the number you input is:%c\n",a);
    return 0;
}