//
// Created by zhanzhao on 2021/2/23.
//
#include <stdio.h>

int put2(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}

int main(void)
{
    printf("%d",put2("hanzhanzhao"));
    return 0;
}