#include<stdio.h>

int main(void){
    char firstname[20],familyname[20];
    printf("Please enter your familyname:");
    scanf("%s",familyname);
    getchar();
    printf("Please enter your firstname:");
    scanf("%s",firstname);
    getchar();
    printf("\"%s,%s\"",firstname,familyname);
    return 0;
}