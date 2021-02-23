//
// Created by zhanzhao on 2021/2/19.
//

#include <stdio.h>

#define MONTHS 12

void show_array(const double a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%.2lf\t", *a++);
    printf("\n");
}

void mult_array(double a[], int n)
{
    int i;
    for(i = 0; i < n;i++)
        printf("%.2lf\t", a[i]);
    printf("\n");

}
int main()
{

    double rate[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double locked[4] = {0.08, 0.075, 0.0725, 0.07};

    //把const数据或者非const数据的地址赋值给const指针是合法，
    //但是把const数据的地址赋值给普通指针是非法的，
    const double *pc = rate;    //yes
    pc = rate;  //yes
    pc = locked;    //yes

    double *pns = rate; //有效，可以把非const数据的地址赋值给普通指针
    pns = locked;   //无效，不可以把const数据的地址赋给普通指针
    pns = &rate[2]; //有效

    //上面这个规定是非常合理的，否则通过指针就可以改变const数组中的数据
    //所以 show_array() 可以接受普通数据名和const数据名作为参数，因为这种参数都可以初始化指向const的指针
    show_array(rate, 5);    //有效
    show_array(locked, 4);  //有效

    //另外不应该把const数据，作为参数传给普通指针
    //所以 不应该把locked数据作为参数传给mult_array()这样的数据，c语言规定这样导致的结果是未定义的
    mult_array(rate, 5);    //有效
    mult_array(locked, 4);  //不建议这样做，规避这种

    //const还有其他用法，比如可以声明一个不可以指向别处的指针
    double * const pd = rate;   //pd只能指向rate[0],不可以修改
    //pd = &rate[2];  //非法
    *pd = 99.00;	//合法，pd的值不可以改，但是pd指向的是一个非const数据，则*pd是可以修改的
    return 0;
}