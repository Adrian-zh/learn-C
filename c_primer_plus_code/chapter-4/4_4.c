#include<stdio.h>

int main(void){
    char name[20];
    float height;
    printf("Please enter your name:");
    scanf("%s",name);
    getchar();
    printf("Please enter your height(centimeter):");
    scanf("%f",&height);
    getchar();
    printf("%s, you are %.3f meters tall\n",name,height/100);
    return 0;
}