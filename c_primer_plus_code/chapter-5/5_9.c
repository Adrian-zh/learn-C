#include<stdio.h>

void Temperatures(double n);

void Temperatures(double n){
    const double a = 32,b = 273.16;
    double Celsius,Kelvin,Fahrenheit;
    Fahrenheit = n;
    Celsius = 5.0 / 9.0 * (Fahrenheit - a);
    Kelvin = Celsius + b;
    printf("Fahrenheit is %.2lf\n",Fahrenheit);
    printf("Celsius is %.2lf\n",Celsius);
    printf("Kelvin is %.2lf\n",Kelvin);
}

int main(void){
    double Fahrenheit;
    while (scanf("%lf",&Fahrenheit) == 1){
        Temperatures(Fahrenheit);
    }
    return 0;
}