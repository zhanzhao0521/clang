//
// Created by zhanzhao on 2021/3/20.
//

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{
    pid_t pid;
    int x = 1;
    pid = fork();
    if (pid == 0 )
    {
        printf("child:x=%d\n",++x);
        exit(0);
    }
    else
    {
        printf("parent:x=%d\n",--x);
        exit(0);
    }
    return 0;

}
