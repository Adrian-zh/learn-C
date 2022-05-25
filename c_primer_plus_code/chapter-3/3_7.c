#include<stdio.h>

int main(void){
    float change = 2.54;
    float centimeter,foot;
    printf("Please enter your height:(foot)");
    scanf("%f",&foot);
    centimeter = change * foot;
    printf("If change your height into centimeter,it\'s %.2f cm.\n",centimeter);
    return 0;
}