#include <stdio.h>

int main(void)
{
    int friends = 5;
    unsigned int weeks = 0;
    while (friends < 150) {
        weeks++;
        friends--;
        friends *= 2;
        printf("After %d weeks, he has %d friends.\n", weeks, friends);
    }
    printf("The nuumbers of friends is over Dunbar's number.");
    return 0;
}