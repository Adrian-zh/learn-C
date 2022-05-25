#include<stdio.h>
#define FEET_CHANGE 1.609
#define GALLON_CHANGE 3.785

int main(void){
    float mileage,gasoline,mile_per_gallon,liliter_per_kilo;
    printf("Please enter your mileage(feet):");
    scanf("%f",&mileage);
    getchar();
    printf("Please enter your gasoline use(gallon):");
    scanf("%f",&gasoline);
    getchar();
    mile_per_gallon = mileage / gasoline;
    liliter_per_kilo = (gasoline * GALLON_CHANGE) / (mileage * FEET_CHANGE);
    printf("Gasoline use is %.1f mile_per_gallon, or %.1f liliter_per_kilo",mile_per_gallon,liliter_per_kilo);
    return 0;
}