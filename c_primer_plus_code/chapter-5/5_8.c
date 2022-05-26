#include<stdio.h>

int main(void){
    int a,b;
    int flag = 1;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&b);
    getchar();
    printf("Now enter the first operand:");
    scanf("%d",&a);
    getchar();
    printf("%d %% %d is %d\n",a,b,a%b);
    while (flag > 0){
        printf("Enter next number for first operand (<= 0 to quit):");
        scanf("%d",&a);
        if(a > 0){
            printf("%d %% %d is %d\n",a,b,a%b);
        }
        else{
            flag = 0;
            printf("Done");
        }
    }
    return 0;    
}