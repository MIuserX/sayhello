#include <stdio.h>

void chPlayer(char ch, int times)
{
    int i = 0;
    
    for (i = 0; i < times; ++i) {
        putchar(ch);
    }
    putchar('\n');
}
