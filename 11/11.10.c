//
// Created by zhanzhao on 2021/2/22.
//

#include <stdio.h>

int main(void)
{
    char * ret_val;
    char words[10];
    ret_val = fgets(words,10,stdin);
    printf("%s",ret_val);
    return 0;
}