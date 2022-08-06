#include<stdio.h>

int main(void){
    int tump,a;
    int target = 6;
    char b = 'A';
    for(tump = 1;tump <= target;tump++){
        for(a = 1;a <= tump;a++){
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}