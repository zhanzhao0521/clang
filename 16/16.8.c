//
// Created by zhanzhao on 2021/4/16.
//

#include <stdio.h>
#include "16.6.h"

int main(void)
{
    names candidate;
    get_names(&candidate);
    printf("Let's welcome");
    show_names(&candidate);
    printf("to this program!\n");
    return 0;
}