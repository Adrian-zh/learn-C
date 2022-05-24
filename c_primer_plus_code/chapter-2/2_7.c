#include<stdio.h>

int smile(void);

int smile(void){
    printf("Smile!");
    return 0;
}

int main(void){
    int pose,tump;
    scanf("%d",&pose);
    getchar();
    while (pose > 0){
        for(tump = pose;tump > 0;tump--){
            smile();
        }
        printf("\n");
        pose--;
    }
    getchar();
    return 0;
}