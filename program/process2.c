//
// Created by zhanzhao on 2021/4/23.
//

#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t getpid(void); // 获得当前进程id
    uid_t getuid(void); //获得当前进程的实际用户id
    uid_t geteuid(void);//获得当前进程的有效用户id
    gid_t getgid(void);//获得当前进程的用户组id
    pid_t getppid(void);//获得当前进程的父进程id
    pid_t getpgrp(void);//获得当前进程所在的进程组id
    pid_t getpgid(pid_t pid);//获得进程id为pid的进程所在的进程组id
    return 0;
}