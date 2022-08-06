#include<stdio.h>

int main(void){
    int up,down,tump;
    int res = 0;
    do{
        printf("Please enter lower and upper integer limits:");
        scanf("%d %d",&down,&up);
        if(up != down){
            for(tump = down;tump <= up;tump++){
            res += tump * tump;
            }
            printf("The sums of the squares from %d to %d is %d\n",down*down,up*up,res);
        }
        else{
            printf("Done!");
        }

    }while (down != up);
    return 0;
}