#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputWord[256];
    unsigned short index;
    gets(inputWord);
    index = strlen(inputWord) - 1;
    for (index;index >= 0;index--) {
        printf("%c",inputWord[index]);
    }
    return 0;
}