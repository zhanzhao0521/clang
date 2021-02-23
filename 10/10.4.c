//
// Created by zhanzhao on 2021/2/18.
//

#include <stdio.h>

int main(void)
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for(index = 0;index<sizeof days/sizeof days[0];index++)
        printf("Month %2d has %2d days.\n",index+1,days[index]);
    //把const数据或非const数据的地址初始化为指向const的指针或为其赋值是合法的
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const  double * pd = rates;
    printf("*pd = %f \n",pd[2]);
    //只能把非const数据的地址赋给普通指针
    const double locked[4] = {0.08, 0.075, 0.0725, 0.07};
    double *pnc = rates; // 有效

    pnc = locked; // 无效
    *pnc = 1;
    printf("pnc = %f\n",*pnc);
    pnc = &rates[3];// 有效
    printf("pnc = %f\n",*pnc);
    return 0;
}
