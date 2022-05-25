#include<stdio.h>
#include<string.h>

int main(void){
    char firstname[20],familyname[20];
    printf("Please enter your familyname:");
    scanf("%s",familyname);
    getchar();
    printf("Please enter your firstname:");
    scanf("%s",firstname);
    getchar();
    printf("%s %s\n",firstname,familyname);
    printf("%*d %*d\n",strlen(firstname),strlen(firstname),strlen(familyname),strlen(familyname));
    printf("%s %s\n",firstname,familyname);
    printf("%-*d %-*d",strlen(firstname),strlen(firstname),strlen(familyname),strlen(familyname));
    return 0;
}