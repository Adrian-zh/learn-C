#include<stdio.h>

int main(void){
    char alphabate[26],i;
    int a;
    for(i = 'a',a = 0;i <= 'z',a < 26;i++,a++){
        alphabate[a] = i;
    }
    printf("%s",alphabate);
    return 0;
}