//
// Created by zhanzhao on 2021/2/12.
//

#include <stdio.h>

#define SPACE ' '

int main(void)
{
    char ch;
    ch = getchar();

    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch +1 );
        ch = getchar();
    }
    putchar(ch);
    return 0;
}