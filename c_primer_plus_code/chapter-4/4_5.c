#include<stdio.h>

int main(void){
    float speed,time,size;
    printf("Please enter download speed(Mb/s):");
    scanf("%f",&speed);
    getchar();
    printf("Please enter file size(MB):");
    scanf("%f",&size);
    getchar();
    time = size * 8 / speed;
    printf("At %.2f megabits per second,a file of %.2f megabytes\n",speed,size);
    printf("downloads in %.2f seconds.\n",time);
    return 0;
}