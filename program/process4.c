//
// Created by zhanzhao on 2021/4/23.
//

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void)
{
    printf("pid:%d\n",getpid());
    pid_t pid;
    pid = fork();//创建子进程
    //在fork之后会运行两个进程（父进程和子进程）

    if (pid <0){
        perror("fork error");
    } else if (pid>0){
        printf("I am parent process pid is %d ppid is %d, fork return is %d\n",
                getpid(),getppid(),pid);
    } else{
        printf("I am child process pid is %d ppid is %d, fork return is %d\n",
               getpid(),getppid(),pid);
    }
    printf("pid:%d\n",getpid());
    sleep(1);
    return 0;

}