#include<stdio.h>

int main(void){
    char user;
    int target,tump,a,b;
    printf("Please enter a char:");
    scanf("%c",&user);
    getchar();
    target = user - 'A' + 1;
    for(tump = 0;tump < target;tump++){
        for(a = 0;a <= target-tump;a++){
            printf(" ");
        }
        for(a = 'A';a < ('A' + tump);a++){
            printf("%c",a);
        }
        for(a;a >= 'A';a--){
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}