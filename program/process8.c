//
// Created by zhanzhao on 2021/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void main(void)
{
    int i = 0;

    pid_t pid;
    printf("father\n");

    pid = fork();
    if (pid < 0)
        perror("error fork");
    else if (pid == 0 )
    {
        printf("son\n");

    }else{

        pid = fork();
        if (pid < 0)
            perror("error fork");
        else if (pid == 0 )
        {
            printf("daughter\n");

        }
    }
}