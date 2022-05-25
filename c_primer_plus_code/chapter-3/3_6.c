#include<stdio.h>

int main(void){
    float weight_water = 3e-23,quart = 950;
    float res,tump;
    printf("Please enter how much quart of water:");
    scanf("%f",&tump);
    res = quart * tump / weight_water;
    printf("There are about %e water molecules in water!\n",res);
    return 0;
}