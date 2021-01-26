//
// Created by zhanzhao on 2021/1/23.
//
#include <stdio.h>

//ANSI/ISO C函数原型
void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}
//函数定义开始
void butler(void)
{
    printf("You rang, sir?\n");
}
