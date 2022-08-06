#include <stdio.h>

int main(void)
{
    float investment = 100;
    unsigned int years = 0;
    while (investment > 0) {
        years++;
        investment *= 1.08;
        investment -= 10;
    }
    printf("After %d years,investment all pick out", years);
    return 0;
}