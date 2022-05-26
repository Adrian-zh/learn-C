#include<stdio.h>
#define CHANGE 60
int main(void){
    int flag = 1;
    int hour,minute,time;
    while (flag)
    {
        printf("Please enter the time(minutes):");
        scanf("%d",&time);
        getchar();
        if(time >= 0){
            hour = time / CHANGE;
            minute = time % CHANGE;
            printf("You mean %d hour and %d minutes,right?\n",hour,minute);
            printf("Enter a time less than or equal to 0 to push out\n");
        }
        else{
            flag = 0;
        }

    }
    return 0;
}