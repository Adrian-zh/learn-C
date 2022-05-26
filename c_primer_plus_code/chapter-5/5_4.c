#include<stdio.h>
#define CHANGE 2.54
#define FEET 12

int main(void){
    float height,inches;
    int feet;
    printf("Please enter a height in centimeters:");
    scanf("%f",&height);
    getchar();
    inches = height / CHANGE;
    feet = (int)inches / FEET;
    inches = inches - feet * FEET;
    if(height > 0){
        printf("%.1f = %d feet , %.1f inches\n",height,feet,inches);
    }
    else{
        printf("Bye!");
    }
    while (height > 0){
        printf("Please enter a height in centimeters(<=0 to quit):");
        scanf("%f",&height);
        getchar();
        if(height > 0){
            inches = height / CHANGE;
            feet = (int)inches / FEET;
            inches = inches - feet * FEET;
            printf("%.1f = %d feet , %.1f inches\n",height,feet,inches);
        }
        else{
            printf("Bye!");
        }

    }
    return 0;    
}