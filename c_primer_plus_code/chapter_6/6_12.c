#include<stdio.h>

double reduce(int times,double a,double res){
    int i;
    double t;
    for(i = 1;i <= times;i++){
        t = (double)i;
        if(i % 2 == 0){
            res -= (a/t);
        }
        if(i % 2 == 1){
            res += (a/t);
        }
    }
    return res;
}

double add(int times,double a,double res){
    int i;
    double t;
    for(i = 1;i <= times;i++){
        t = (double)i;
        res += (a/t);
    }
    return res;
}

int main(void){
    int times;
    double res = 0.0;
    double a = 1.0;
    printf("Please enter times:");
    scanf("%d",&times);
    res = add(times,a,res);
    printf("%f\n",res);
    res = 0.0;
    res = reduce(times,a,res);
    printf("%f\n",res);
    return 0;
}

/*
Addition diverges, addition and subtraction interlace converges to ln2.
*/