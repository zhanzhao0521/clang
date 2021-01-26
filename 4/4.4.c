//
// Created by zhanzhao on 2021/1/25.
//
#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area,circum,radius;
    printf("What's the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    return 0;
}
