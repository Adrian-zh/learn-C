#include<stdio.h>

int main(void){
    int num,target;
    printf("Please enter a integer:");
    scanf("%d",&num);
    getchar();
    target = num + 10;
    while (num <= target){
        printf("%d ",num);
        num++;
    }
    return 0;
}