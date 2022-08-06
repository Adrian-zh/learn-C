#include<stdio.h>

int main(void){
    int uplimit,downlimit,num,num2,num3;
    printf("Please enter the limit of number:(down to up)");
    scanf("%d %d",&downlimit,&uplimit);
    getchar();
    printf("  number   number^2  number^3 \n");
    for(num = downlimit;num <= uplimit;num++){
        num2 = num * num;
        num3 = num * num * num;
        printf("%6d     %6d     %6d\n",num,num2,num3);
    }
}