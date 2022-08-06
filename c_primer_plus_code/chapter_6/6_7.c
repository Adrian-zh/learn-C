#include<stdio.h>
#include<string.h>

int main(void){
    char vac[30];
    int t;
    printf("please enter a word:");
    scanf("%s",vac);
    for(t=strlen(vac)-1;t>=0;t--){
        printf("%c",vac[t]);
    }
    return 0;
}