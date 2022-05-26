#include<stdio.h>

int main(void){
    int count = 0,sum = 0;
    int target;
    printf("Please enter a target:");
    scanf("%d",&target);
    getchar();
    while (count++ < target){
        sum += count;
    }
    printf("sum = %d\n",sum);
    return 0;
}