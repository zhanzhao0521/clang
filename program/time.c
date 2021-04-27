//
// 时间复杂度
// Created by zhanzhao on 2021/4/27.
//

#include <stdio.h>

int O1(int);
int OLogN(int);
int ON(int);
int OMN(int,int);
int ONLogN(int,int);
int ON2(int);

int main(void)
{

    int num1 = 5,num2 = 10;
    printf("%d\n",O1(num1));
    printf("%d\n",OLogN(num1));
    printf("%d\n",ON(num1));
    printf("%d\n",OMN(num1,num2));
    printf("%d\n",ONLogN(num1,num2));
    printf("%d\n",ON2(num1));

}

int O1(int num)
{
    int j = num;
    int i = num*2;
    return i+j;
}

int OLogN(int num)
{
    int i=1;
    while (i<num)
        i = i*2;
    return i;
}

int ON(int num)
{
    int total;
    int i;
    for (i = 0; i < num; ++i)
        total += i;
    return total;
}

int OMN(int num1,int num2)
{
    int total;
    int i,j;
    for (i = 0; i < num1; i++)
        total += i;
    for (j = 0; j < num2; j++)
        total += j;
    return total;
}

int ONLogN(int num1,int num2)
{
    int total;
    int i=0,j=0;
    for (; i < num1; i++) {
        for (; j < num2; j++) {
            total += i + j;
            j = j * 2;
        }
    }
    return total;
}

int ON2(int num)
{
    int total = 0;
    int i,j;
    for (i = 0; i < num; i++)
        for (j = 0; j < num;j++)
            total += i+j;
    return total;
}
