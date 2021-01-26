//
// Created by zhanzhao on 2021/1/26.
//

#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;
    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);
    printf("*%04.1f*\n",1.326);

    return 0;
}
