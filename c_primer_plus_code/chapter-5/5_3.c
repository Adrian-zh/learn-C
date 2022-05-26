#include<stdio.h>

int main(void){
    int date,week,day;
    int flag = 1;
    while (flag > 0){
        printf("Please enter a date:");
        scanf("%d",&date);
        if(date > 0){
            week = date / 7;
            day = date % 7;
            printf("%d days are %d weeks, %d days.\n",date,week,day);
        }
        else{
            flag = 0;
            printf("Bye!");
        }
    }
    return 0;
}