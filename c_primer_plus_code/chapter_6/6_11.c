#include<stdio.h>

int main(void){
    int i,nums[10];
    for(i = 0;i<8;i++){
        scanf("%d",&nums[i]);
    }
    for (i = 7;i>=0;i--){
        printf("%d ",nums[i]);
    }
    return 0;
}