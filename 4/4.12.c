//
// Created by zhanzhao on 2021/1/26.
//

#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    //参数传递机制没有体现 应该是优化掉了
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}
