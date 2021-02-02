//
// Created by zhanzhao on 2021/2/2.
//

#include <stdio.h>

int main(void)
{
    int ultra = 0,super = 0;
    while(super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d,ultra = %d\n",super,ultra);
    }
    return 0;
}