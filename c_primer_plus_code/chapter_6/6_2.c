#include<stdio.h>

int main(void){
    int tump,a;
    int target = 5;
    for(tump = 1;tump <= target;tump++){
        for(a = 1;a <= tump;a++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}