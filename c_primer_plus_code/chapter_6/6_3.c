#include<stdio.h>

int main(void){
    int tump,a;
    int target = 6;
    char b;
    for(tump = 1;tump <= target;tump++){
        for(a = 1,b = 'F';a <= tump;a++,b--){
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}