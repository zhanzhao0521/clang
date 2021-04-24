//
// Created by zhanzhao on 2021/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//进程扇
int main(int argc,char *argv[])
{
    int counter  = 0 ;
    if (argc < 2)
        counter = 2;
    else
        counter = atoi(argv[1]);

    int i=1;
    pid_t pid;
    for (; i <counter ; i++) {
        pid = fork();
        if (pid<0)
            perror("fork error");
        else if (pid==0) break;//如果是子进程，就直接推出循环，父进程继续做循环 创建子进程
    }
    printf("pid: %d,ppid: %d\n",getpid(),getppid());

    while (1) sleep(1);

    return 0;
}

