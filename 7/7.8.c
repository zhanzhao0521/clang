//
// Created by zhanzhao on 2021/2/13.
//
#include <stdio.h>
#define COVERAGE 350

int main(void)
{
    int sq_feet;
    int cans;
    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("You neet %d %s of paint.",cans,
                cans == 1 ? "can":"cans");
        printf("Enter next value (q to quit):\n");
    }
    return 0;
}

