#include <stdio.h>

int main(void)
{
    float Daphne = 100, Deirdre = 100;
    unsigned int years = 0;
    while (Daphne >= Deirdre) {
        years++;
        Daphne += 10;
        Deirdre *= 1.05; 
    }
    printf("After %d years,Deirdre's investment:%.0f over Daphne's investment:%.0f", years, Deirdre, Daphne);
    return 0;
}