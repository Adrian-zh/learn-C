#include<stdio.h>

int main(void){
    float cup;
    printf("Please enter number of cup:");
    scanf("%f",&cup);
    printf("It\'s about %.2f pint\n",cup / 2);
    printf("It\'s about %.2f ounce\n",cup * 8);
    printf("It\'s about %.2f large_spoon\n",cup *16);
    printf("It\'s about %.2f tea_spoon\n",cup * 16 *3);
    return 0;
}