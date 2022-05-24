#include<stdio.h>

int print1(void);
int print2(void);

int print1(void){
    printf("For he's a jolly good fellow!\n");
    return 0;
}

int print2(void){
    printf("Which nobody can deny!\n");
    return 0;
}

int main(void){
    print1();
    print1();
    print1();
    print2();
    getchar();
    return 0;
}