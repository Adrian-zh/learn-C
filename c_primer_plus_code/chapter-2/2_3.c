#include<stdio.h>
int main(void){
    int old,old2day;
    printf("please input how old are you(an integer)");
    scanf("%d",&old);
    getchar();
    old2day = old*365;
    printf("your old is %d years\n",old);
    printf("change your old to day is about %d days\n",old2day);
    getchar();
    return 0;
}