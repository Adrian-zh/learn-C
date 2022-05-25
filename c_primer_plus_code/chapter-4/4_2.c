#include<stdio.h>
#include <string.h>

int main(void){
    char firstname[10],familyname[10];
    char name[20] = {"\""},tump[2] = {"\""};
    printf("Please enter your familyname:");
    scanf("%s",familyname);
    getchar();
    printf("Please enter your firstname:");
    scanf("%s",firstname);
    getchar();
    printf("\"%s,%s\"\n",firstname,familyname);
    strcat(name,firstname);
    strcat(name,",");
    strcat(name,familyname);
    strcat(name,tump);
    printf("%20s\n",name);
    printf("%-20s\n",name);
    printf("%*s\n",strlen(name)+3,name);
    return 0;
}