//
// Created by zhanzhao on 2021/2/2.
//

#include <stdio.h>

int main(void)
{
    int count,sum;
    count = 0;
    sum = 0;
    while (count++ < 20)
    {
        sum = sum + count;
        printf("sum = %d\n",sum);
    }
    return 0;
}
