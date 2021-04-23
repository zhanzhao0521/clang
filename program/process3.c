//
// Created by zhanzhao on 2021/4/23.
//

#include <unistd.h>
#include <stdio.h>

int main(void)
{

    printf("pid:%d\n",getpid());
    printf("ppid:%d\n",getppid());
    printf("uid:%d\n",getuid());
    printf("euid:%d\n",geteuid());
    printf("user gid:%d\n",getgid());
    printf("gid:%d\n",getpgrp());
    printf("pgid:%d\n",getpgid(getpid()));
    printf("ppgid:%d\n",getpgid(getppid()));
    return 0;
}