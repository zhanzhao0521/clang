//
// Created by zhanzhao on 2021/2/4.
//

#include <stdio.h>
//该头文件让bool成为_Bool的别名，而且还把true和false分别定义为1和0的符号常量。
#include <stdbool.h>

int main(void)
{
    long num;
    long sum = 0l;
    //_Bool  input_is_good = false;
    bool input_is_good = false;
    printf("Please enter an integer to be summed");
    printf("(q to quit):");
    input_is_good = (scanf("%ld",&num) == 1);
    while (input_is_good)
    {
        sum = sum+num;
        printf("Please enter next integer (q to quit):");
        input_is_good = (scanf("%ld",&num) == 1);
    }
    printf("Those integers sum to %ld.\n",sum);
    return 0;
}